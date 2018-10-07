#include "To_Hash.h"




std::string To_Hash(std::string path) {
	std::ifstream file(path, std::ifstream::binary);
	MD5_CTX md5Context;
	MD5_Init(&md5Context);
	char buf[1024 * 16];
	while (file.good()) {
		file.read(buf, sizeof(buf));
		MD5_Update(&md5Context, buf, file.gcount());
	}
	unsigned char result[MD5_DIGEST_LENGTH];
	MD5_Final(result, &md5Context);

	std::stringstream md5string;
	md5string << std::hex << std::uppercase << std::setfill('0');
	for (const auto &byte : result)
		md5string << std::setw(2) << (int)byte;

	return md5string.str();

}