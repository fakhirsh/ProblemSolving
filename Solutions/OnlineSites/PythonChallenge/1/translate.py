myString = "g fmnc wms bgblr rpylqjyrc gr zw fylb. rfyrq ufyr amknsrcpq ypc dmp. bmgle gr gl zw fylb gq glcddgagclr ylb rfyr'q ufw rfgq rcvr gq qm jmle. sqgle qrpgle.kyicrpylq() gq pcamkkclbcb. lmu ynnjw ml rfc spj."

inTab =  "yzabcdefghijklmnopqrstuvwx"
outTab = "abcdefghijklmnopqrstuvwxyz"
transTab = str.maketrans(inTab, outTab)

outString = myString.translate(transTab)

print(outString)

urlStr = "map"

outUrl = urlStr.translate(transTab)

print(outUrl)
