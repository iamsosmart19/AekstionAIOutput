#ifndef COLORISE_HPP
#define COLORISE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <locale>
#include <regex>

#define UN 61

//					0     1     2     3     4     5     6     7     8     9     10    11    12    13    14    15    16    17    18    19
int uniValues[UN] = {32,  46,   47,   48,   49,   50,   51,   52,   53,   54,   55,   56,   57,   96,   168,  171,  172,  175,  180, 182,
  					183,  184,  186,  187,  247,  248,  411,  710,  711,  728,  729,  730,  731,  732,  733,  850,  855,  859,  865, 866,
				  	926,  8211, 8216, 8217, 8218, 8220, 8224, 8225, 8226, 8230, 8249, 8250, 8710, 8730, 8734, 8776, 9352, 9634, 9635, 9674,
					9788};

//                          0         1         2         3         4         5         6         7         8         9
std::string uniChars[UN] = {"\u0020", "\u002E", "\u002F", "\u0030", "\u0031", "\u0032", "\u0033", "\u0034", "\u0035", "\u0036",
   							"\u0037", "\u0038", "\u0039", "\u0060", "\u00A8", "\u00AB", "\u00AC", "\u00AF", "\u00B4", "\u00B6",
						   	"\u00B7", "\u00B8", "\u00BA", "\u00BB", "\u00F7", "\u00F8", "\u019B", "\u019C", "\u02C6", "\u02C7",
						   	"\u02D8", "\u02D9", "\u02DA", "\u02DB", "\u02DC", "\u02DD", "\u0352", "\u0357", "\u035B", "\u0361",
						   	"\u0362", "\u039E", "\u2013", "\u2018", "\u2019", "\u201A", "\u201C", "\u2020", "\u2021", "\u2022",
						   	"\u2026", "\u2039", "\u203A", "\u2206", "\u221A", "\u221E", "\u2248", "\u25A2", "\u25A3", "\u25CA",
						   	"\u263C"};


#endif /* COLORISE_HPP */
