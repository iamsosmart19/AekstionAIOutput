#!/bin/python3
import re
import os

#           1         2         3         4         5         6         7         8         9         10
uniChars = ["\u0000", "\u0020", "\u002E", "\u002F", "\u0030", "\u0031", "\u0032", "\u0033", "\u0034", "\u0035",
            "\u0036", "\u0037", "\u0038", "\u0039", "\u0060", "\u00A8", "\u00AB", "\u00AC", "\u00AF", "\u00B4",
            "\u00B6", "\u00B7", "\u00B8", "\u00BA", "\u00BB", "\u00F7", "\u00F8", "\u019B", "\u019C", "\u02C6",
            "\u02C7", "\u02D8", "\u02D9", "\u02DA", "\u02DB", "\u02DC", "\u02DD", "\u0352", "\u0357", "\u035B",
            "\u0361", "\u0362", "\u039E", "\u2013", "\u2018", "\u2019", "\u201A", "\u201C", "\u2020", "\u2021",
            "\u2022", "\u2026", "\u2039", "\u203A", "\u2206", "\u221A", "\u221E", "\u2248", "\u25A2", "\u25A3",
            "\u25CA", "\u263C"]
output = open("hexdec.txt", "w")
raw = open("raw.txt", "r")
lCharNum = 0
isUni = True

for line in raw:
    #regex expression for a "date"
    #may change later
    if re.search("[1-3]{0,1}[0-9]\/[1]{0,1}[0-9]\/[0-9]{1,2}", line):
        output.write(line)
        isUni = True
        continue
    #"t     " is a string I appended in front of all the text in raw.txt to make life eaier for myself
    if line[0:6] == "t     ":
        output.write(line)
        continue
    #if it's a blank line, reset isUni to false
    if line == "\n":
        output.write(line)
        isUni = False
        continue
    if isUni:
        for l in line:
            if l == '\n':
                output.write("\n")
                break
            lCharNum = ord(l)
            output.write(str(lCharNum))
