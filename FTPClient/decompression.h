#pragma once
#include <iostream>
#include <zip.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <fstream>
#include <direct.h>
#include <locale>


//using namespace std;

int writeCurrentFile(int i, zip *za, struct zip_stat zipStat, char bufForFileName[]) {
	
	struct zip_file *zipFile; // ��������� ��� ������ � ������� ������ ������

	zip_int64_t lenOfReadData; // ������� ���� ���� ��������� �� �����

	int size =  zipStat.size;
	char * buf = new char[size+1]; // ����� ��� ������ ���������� �� ������

	zipFile = zip_fopen_index(za, i, 0);
	if (!zipFile) {

		return 1;
	}
	std::wofstream fd(bufForFileName, std::ios::binary);//������� ���� 
	if (!fd.is_open()) { // ���� ���� ������ �������, ������ ��������� ������

		zip_fclose(zipFile);
		return 1;
	}
	
	zip_uint64_t sum = 0; // ������ ������ �������� ����� � ������
	while (sum != zipStat.size) {

		lenOfReadData = zip_fread(zipFile, buf, size);
		if (lenOfReadData < 0) {

			zip_fclose(zipFile);
			return 1;
		}


		buf[size] = 0;
		fd << buf;
		sum += lenOfReadData;
	}
	fd.close();
	delete[] buf;
	int zipCloseResult = zip_fclose(zipFile);
	if (zipCloseResult != 0) {
		return 1;
	}
	return 0;
}

int loopThroughFiles(zip *za, const char* output) {

	int i; // ���������� ��� ������������
	struct zip_stat zipStat; // ���������� � �����
	size_t currentItemNameLength; // ����� ����� �������� �������� � ������

	for (i = 0; i < zip_get_num_entries(za, 0); i++) {

		if (zip_stat_index(za, i, 0, &zipStat) == 0) {

			currentItemNameLength = strlen(zipStat.name);
			std::cout << "��� �����:  " << zipStat.name << std::endl;
			std::cout << "������: " << zipStat.size << std::endl;
			std::cout << std::endl;
			char bufForFileName[300]; // ����� ��� ����� ����� � ������ �������� �����
			strcpy_s(bufForFileName, output);
			strcat_s(bufForFileName, zipStat.name);
			if (zipStat.name[currentItemNameLength - 1] == '/') { // ���� ������� ������� ������ - �����, �� ����� ������� ����� �� �����

				if (!_mkdir(bufForFileName)) { 
				}


			}
			else { 

				writeCurrentFile(i, za, zipStat, bufForFileName);
			}
		}
	}
	return 0;
}

int enumerateArchive(const char* filePath, const char* output) {

	zip *za;// ��������� ��� ������ � �������
	int err; // ��� ��������� ������
	// ���������� ������� ���� � �������, ���� �� ���������� - �������� �� ������
	if ((za = zip_open(filePath, 0, &err)) == NULL) {
		std::cout << "�� �������� ������� ����� " << std::endl;
		return 1;
	}
	// �������� �� ���� ��������� ������

	loopThroughFiles(za, output);
	// ������� ���� � ������� (���� �� ���������� - �������� �� ������)
	if (zip_close(za) == -1) {

		return 1;
	}
	std::cout << "���������� ���������" << std::endl;
	return 0;
}
