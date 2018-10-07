#pragma once
#include <iostream>
#include <map>
#include <filesystem>
#include <vector>
#include <iterator>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::IO;
using namespace System::IO::Compression;
using namespace msclr::interop;

namespace fs = std::filesystem;


int decommpression_(String^ , String^ );
