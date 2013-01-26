"/usr/bin/make" -f nbproject/Makefile-Debug.mk QMAKE= SUBPROJECTS= .build-conf
"/usr/bin/make"  -f nbproject/Makefile-Debug.mk dist/Debug/GNU-MacOSX/libiotutorial.a
mkdir -p build/Debug/GNU-MacOSX
rm -f build/Debug/GNU-MacOSX/IOTutorial.o.d
g++    -c -g -MMD -MP -MF build/Debug/GNU-MacOSX/IOTutorial.o.d -o build/Debug/GNU-MacOSX/IOTutorial.o IOTutorial.cpp
IOTutorial.cpp: In function 'int numberAdd()':
IOTutorial.cpp:25: error: no match for 'operator>>' in '((std::basic_istream<char, std::char_traits<char> >*)std::cin. std::basic_istream<_CharT, _Traits>::operator>> [with _CharT = char, _Traits = std::char_traits<char>](((int&)(& input1))))->std::basic_istream<_CharT, _Traits>::operator>> [with _CharT = char, _Traits = std::char_traits<char>](((int&)(& input2))) >> std::endl'
/usr/include/c++/4.2.1/istream:131: note: candidates are: std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(std::basic_istream<_CharT, _Traits>& (*)(std::basic_istream<_CharT, _Traits>&)) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:135: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(std::basic_ios<_CharT, _Traits>& (*)(std::basic_ios<_CharT, _Traits>&)) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:142: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(std::ios_base& (*)(std::ios_base&)) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:178: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(bool&) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:182: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(short int&) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:185: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(short unsigned int&) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:189: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(int&) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:192: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(unsigned int&) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:196: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(long int&) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:200: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(long unsigned int&) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:205: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(long long int&) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:209: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(long long unsigned int&) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:214: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(float&) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:218: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(double&) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:222: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(long double&) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:226: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(void*&) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:250: note:                 std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::operator>>(std::basic_streambuf<_CharT, _Traits>*) [with _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:755: note:                 std::basic_istream<_CharT2, _Traits2>& std::operator>>(std::basic_istream<_CharT2, _Traits2>&, _CharT2*) [with _CharT2 = char, _Traits2 = std::char_traits<char>, _CharT = char, _Traits = std::char_traits<char>]
/usr/include/c++/4.2.1/istream:78: note:                 std::basic_istream<_CharT2, _Traits2>& std::operator>>(std::basic_istream<_CharT2, _Traits2>&, _CharT2&) [with _CharT2 = char, _Traits2 = std::char_traits<char>, _CharT = char, _Traits = std::char_traits<char>]
make[2]: *** [build/Debug/GNU-MacOSX/IOTutorial.o] Error 1
make[1]: *** [.build-conf] Error 2
make: *** [.build-impl] Error 2


BUILD FAILED (exit value 2, total time: 832ms)

 