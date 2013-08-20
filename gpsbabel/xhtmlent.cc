const char* xhtml_entities =
  "<!-- Portions (C) International Organization for Standardization 1986\n"
  "     Permission to copy in any form is granted for use with\n"
  "     conforming SGML systems and applications as defined in\n"
  "     ISO 8879, provided this notice is included in all copies.\n"
  "-->\n"
  "<!-- Character entity set. Typical invocation:\n"
  "    <!ENTITY % HTMLlat1 PUBLIC\n"
  "       \"-//W3C//ENTITIES Latin 1 for XHTML//EN\"\n"
  "       \"http://www.w3.org/TR/xhtml1/DTD/xhtml-lat1.ent\">\n"
  "    %HTMLlat1;\n"
  "-->\n"
  "\n"
  "<!ENTITY nbsp   \"&#160;\"> <!-- no-break space = non-breaking space,\n"
  "                                  U+00A0 ISOnum -->\n"
  "<!ENTITY iexcl  \"&#161;\"> <!-- inverted exclamation mark, U+00A1 ISOnum -->\n"
  "<!ENTITY cent   \"&#162;\"> <!-- cent sign, U+00A2 ISOnum -->\n"
  "<!ENTITY pound  \"&#163;\"> <!-- pound sign, U+00A3 ISOnum -->\n"
  "<!ENTITY curren \"&#164;\"> <!-- currency sign, U+00A4 ISOnum -->\n"
  "<!ENTITY yen    \"&#165;\"> <!-- yen sign = yuan sign, U+00A5 ISOnum -->\n"
  "<!ENTITY brvbar \"&#166;\"> <!-- broken bar = broken vertical bar,\n"
  "                                  U+00A6 ISOnum -->\n"
  "<!ENTITY sect   \"&#167;\"> <!-- section sign, U+00A7 ISOnum -->\n"
  "<!ENTITY uml    \"&#168;\"> <!-- diaeresis = spacing diaeresis,\n"
  "                                  U+00A8 ISOdia -->\n"
  "<!ENTITY copy   \"&#169;\"> <!-- copyright sign, U+00A9 ISOnum -->\n"
  "<!ENTITY ordf   \"&#170;\"> <!-- feminine ordinal indicator, U+00AA ISOnum -->\n"
  "<!ENTITY laquo  \"&#171;\"> <!-- left-pointing double angle quotation mark\n"
  "                                  = left pointing guillemet, U+00AB ISOnum -->\n"
  "<!ENTITY not    \"&#172;\"> <!-- not sign = angled dash,\n"
  "                                  U+00AC ISOnum -->\n"
  "<!ENTITY shy    \"&#173;\"> <!-- soft hyphen = discretionary hyphen,\n"
  "                                  U+00AD ISOnum -->\n"
  "<!ENTITY reg    \"&#174;\"> <!-- registered sign = registered trade mark sign,\n"
  "                                  U+00AE ISOnum -->\n"
  "<!ENTITY macr   \"&#175;\"> <!-- macron = spacing macron = overline\n"
  "                                  = APL overbar, U+00AF ISOdia -->\n"
  "<!ENTITY deg    \"&#176;\"> <!-- degree sign, U+00B0 ISOnum -->\n"
  "<!ENTITY plusmn \"&#177;\"> <!-- plus-minus sign = plus-or-minus sign,\n"
  "                                  U+00B1 ISOnum -->\n"
  "<!ENTITY sup2   \"&#178;\"> <!-- superscript two = superscript digit two\n"
  "                                  = squared, U+00B2 ISOnum -->\n"
  "<!ENTITY sup3   \"&#179;\"> <!-- superscript three = superscript digit three\n"
  "                                  = cubed, U+00B3 ISOnum -->\n"
  "<!ENTITY acute  \"&#180;\"> <!-- acute accent = spacing acute,\n"
  "                                  U+00B4 ISOdia -->\n"
  "<!ENTITY micro  \"&#181;\"> <!-- micro sign, U+00B5 ISOnum -->\n"
  "<!ENTITY para   \"&#182;\"> <!-- pilcrow sign = paragraph sign,\n"
  "                                  U+00B6 ISOnum -->\n"
  "<!ENTITY middot \"&#183;\"> <!-- middle dot = Georgian comma\n"
  "                                  = Greek middle dot, U+00B7 ISOnum -->\n"
  "<!ENTITY cedil  \"&#184;\"> <!-- cedilla = spacing cedilla, U+00B8 ISOdia -->\n"
  "<!ENTITY sup1   \"&#185;\"> <!-- superscript one = superscript digit one,\n"
  "                                  U+00B9 ISOnum -->\n"
  "<!ENTITY ordm   \"&#186;\"> <!-- masculine ordinal indicator,\n"
  "                                  U+00BA ISOnum -->\n"
  "<!ENTITY raquo  \"&#187;\"> <!-- right-pointing double angle quotation mark\n"
  "                                  = right pointing guillemet, U+00BB ISOnum -->\n"
  "<!ENTITY frac14 \"&#188;\"> <!-- vulgar fraction one quarter\n"
  "                                  = fraction one quarter, U+00BC ISOnum -->\n"
  "<!ENTITY frac12 \"&#189;\"> <!-- vulgar fraction one half\n"
  "                                  = fraction one half, U+00BD ISOnum -->\n"
  "<!ENTITY frac34 \"&#190;\"> <!-- vulgar fraction three quarters\n"
  "                                  = fraction three quarters, U+00BE ISOnum -->\n"
  "<!ENTITY iquest \"&#191;\"> <!-- inverted question mark\n"
  "                                  = turned question mark, U+00BF ISOnum -->\n"
  "<!ENTITY Agrave \"&#192;\"> <!-- latin capital letter A with grave\n"
  "                                  = latin capital letter A grave,\n"
  "                                  U+00C0 ISOlat1 -->\n"
  "<!ENTITY Aacute \"&#193;\"> <!-- latin capital letter A with acute,\n"
  "                                  U+00C1 ISOlat1 -->\n"
  "<!ENTITY Acirc  \"&#194;\"> <!-- latin capital letter A with circumflex,\n"
  "                                  U+00C2 ISOlat1 -->\n"
  "<!ENTITY Atilde \"&#195;\"> <!-- latin capital letter A with tilde,\n"
  "                                  U+00C3 ISOlat1 -->\n"
  "<!ENTITY Auml   \"&#196;\"> <!-- latin capital letter A with diaeresis,\n"
  "                                  U+00C4 ISOlat1 -->\n"
  "<!ENTITY Aring  \"&#197;\"> <!-- latin capital letter A with ring above\n"
  "                                  = latin capital letter A ring,\n"
  "                                  U+00C5 ISOlat1 -->\n"
  "<!ENTITY AElig  \"&#198;\"> <!-- latin capital letter AE\n"
  "                                  = latin capital ligature AE,\n"
  "                                  U+00C6 ISOlat1 -->\n"
  "<!ENTITY Ccedil \"&#199;\"> <!-- latin capital letter C with cedilla,\n"
  "                                  U+00C7 ISOlat1 -->\n"
  "<!ENTITY Egrave \"&#200;\"> <!-- latin capital letter E with grave,\n"
  "                                  U+00C8 ISOlat1 -->\n"
  "<!ENTITY Eacute \"&#201;\"> <!-- latin capital letter E with acute,\n"
  "                                  U+00C9 ISOlat1 -->\n"
  "<!ENTITY Ecirc  \"&#202;\"> <!-- latin capital letter E with circumflex,\n"
  "                                  U+00CA ISOlat1 -->\n"
  "<!ENTITY Euml   \"&#203;\"> <!-- latin capital letter E with diaeresis,\n"
  "                                  U+00CB ISOlat1 -->\n"
  "<!ENTITY Igrave \"&#204;\"> <!-- latin capital letter I with grave,\n"
  "                                  U+00CC ISOlat1 -->\n"
  "<!ENTITY Iacute \"&#205;\"> <!-- latin capital letter I with acute,\n"
  "                                  U+00CD ISOlat1 -->\n"
  "<!ENTITY Icirc  \"&#206;\"> <!-- latin capital letter I with circumflex,\n"
  "                                  U+00CE ISOlat1 -->\n"
  "<!ENTITY Iuml   \"&#207;\"> <!-- latin capital letter I with diaeresis,\n"
  "                                  U+00CF ISOlat1 -->\n"
  "<!ENTITY ETH    \"&#208;\"> <!-- latin capital letter ETH, U+00D0 ISOlat1 -->\n"
  "<!ENTITY Ntilde \"&#209;\"> <!-- latin capital letter N with tilde,\n"
  "                                  U+00D1 ISOlat1 -->\n"
  "<!ENTITY Ograve \"&#210;\"> <!-- latin capital letter O with grave,\n"
  "                                  U+00D2 ISOlat1 -->\n"
  "<!ENTITY Oacute \"&#211;\"> <!-- latin capital letter O with acute,\n"
  "                                  U+00D3 ISOlat1 -->\n"
  "<!ENTITY Ocirc  \"&#212;\"> <!-- latin capital letter O with circumflex,\n"
  "                                  U+00D4 ISOlat1 -->\n"
  "<!ENTITY Otilde \"&#213;\"> <!-- latin capital letter O with tilde,\n"
  "                                  U+00D5 ISOlat1 -->\n"
  "<!ENTITY Ouml   \"&#214;\"> <!-- latin capital letter O with diaeresis,\n"
  "                                  U+00D6 ISOlat1 -->\n"
  "<!ENTITY times  \"&#215;\"> <!-- multiplication sign, U+00D7 ISOnum -->\n"
  "<!ENTITY Oslash \"&#216;\"> <!-- latin capital letter O with stroke\n"
  "                                  = latin capital letter O slash,\n"
  "                                  U+00D8 ISOlat1 -->\n"
  "<!ENTITY Ugrave \"&#217;\"> <!-- latin capital letter U with grave,\n"
  "                                  U+00D9 ISOlat1 -->\n"
  "<!ENTITY Uacute \"&#218;\"> <!-- latin capital letter U with acute,\n"
  "                                  U+00DA ISOlat1 -->\n"
  "<!ENTITY Ucirc  \"&#219;\"> <!-- latin capital letter U with circumflex,\n"
  "                                  U+00DB ISOlat1 -->\n"
  "<!ENTITY Uuml   \"&#220;\"> <!-- latin capital letter U with diaeresis,\n"
  "                                  U+00DC ISOlat1 -->\n"
  "<!ENTITY Yacute \"&#221;\"> <!-- latin capital letter Y with acute,\n"
  "                                  U+00DD ISOlat1 -->\n"
  "<!ENTITY THORN  \"&#222;\"> <!-- latin capital letter THORN,\n"
  "                                  U+00DE ISOlat1 -->\n"
  "<!ENTITY szlig  \"&#223;\"> <!-- latin small letter sharp s = ess-zed,\n"
  "                                  U+00DF ISOlat1 -->\n"
  "<!ENTITY agrave \"&#224;\"> <!-- latin small letter a with grave\n"
  "                                  = latin small letter a grave,\n"
  "                                  U+00E0 ISOlat1 -->\n"
  "<!ENTITY aacute \"&#225;\"> <!-- latin small letter a with acute,\n"
  "                                  U+00E1 ISOlat1 -->\n"
  "<!ENTITY acirc  \"&#226;\"> <!-- latin small letter a with circumflex,\n"
  "                                  U+00E2 ISOlat1 -->\n"
  "<!ENTITY atilde \"&#227;\"> <!-- latin small letter a with tilde,\n"
  "                                  U+00E3 ISOlat1 -->\n"
  "<!ENTITY auml   \"&#228;\"> <!-- latin small letter a with diaeresis,\n"
  "                                  U+00E4 ISOlat1 -->\n"
  "<!ENTITY aring  \"&#229;\"> <!-- latin small letter a with ring above\n"
  "                                  = latin small letter a ring,\n"
  "                                  U+00E5 ISOlat1 -->\n"
  "<!ENTITY aelig  \"&#230;\"> <!-- latin small letter ae\n"
  "                                  = latin small ligature ae, U+00E6 ISOlat1 -->\n"
  "<!ENTITY ccedil \"&#231;\"> <!-- latin small letter c with cedilla,\n"
  "                                  U+00E7 ISOlat1 -->\n"
  "<!ENTITY egrave \"&#232;\"> <!-- latin small letter e with grave,\n"
  "                                  U+00E8 ISOlat1 -->\n"
  "<!ENTITY eacute \"&#233;\"> <!-- latin small letter e with acute,\n"
  "                                  U+00E9 ISOlat1 -->\n"
  "<!ENTITY ecirc  \"&#234;\"> <!-- latin small letter e with circumflex,\n"
  "                                  U+00EA ISOlat1 -->\n"
  "<!ENTITY euml   \"&#235;\"> <!-- latin small letter e with diaeresis,\n"
  "                                  U+00EB ISOlat1 -->\n"
  "<!ENTITY igrave \"&#236;\"> <!-- latin small letter i with grave,\n"
  "                                  U+00EC ISOlat1 -->\n"
  "<!ENTITY iacute \"&#237;\"> <!-- latin small letter i with acute,\n"
  "                                  U+00ED ISOlat1 -->\n"
  "<!ENTITY icirc  \"&#238;\"> <!-- latin small letter i with circumflex,\n"
  "                                  U+00EE ISOlat1 -->\n"
  "<!ENTITY iuml   \"&#239;\"> <!-- latin small letter i with diaeresis,\n"
  "                                  U+00EF ISOlat1 -->\n"
  "<!ENTITY eth    \"&#240;\"> <!-- latin small letter eth, U+00F0 ISOlat1 -->\n"
  "<!ENTITY ntilde \"&#241;\"> <!-- latin small letter n with tilde,\n"
  "                                  U+00F1 ISOlat1 -->\n"
  "<!ENTITY ograve \"&#242;\"> <!-- latin small letter o with grave,\n"
  "                                  U+00F2 ISOlat1 -->\n"
  "<!ENTITY oacute \"&#243;\"> <!-- latin small letter o with acute,\n"
  "                                  U+00F3 ISOlat1 -->\n"
  "<!ENTITY ocirc  \"&#244;\"> <!-- latin small letter o with circumflex,\n"
  "                                  U+00F4 ISOlat1 -->\n"
  "<!ENTITY otilde \"&#245;\"> <!-- latin small letter o with tilde,\n"
  "                                  U+00F5 ISOlat1 -->\n"
  "<!ENTITY ouml   \"&#246;\"> <!-- latin small letter o with diaeresis,\n"
  "                                  U+00F6 ISOlat1 -->\n"
  "<!ENTITY divide \"&#247;\"> <!-- division sign, U+00F7 ISOnum -->\n"
  "<!ENTITY oslash \"&#248;\"> <!-- latin small letter o with stroke,\n"
  "                                  = latin small letter o slash,\n"
  "                                  U+00F8 ISOlat1 -->\n"
  "<!ENTITY ugrave \"&#249;\"> <!-- latin small letter u with grave,\n"
  "                                  U+00F9 ISOlat1 -->\n"
  "<!ENTITY uacute \"&#250;\"> <!-- latin small letter u with acute,\n"
  "                                  U+00FA ISOlat1 -->\n"
  "<!ENTITY ucirc  \"&#251;\"> <!-- latin small letter u with circumflex,\n"
  "                                  U+00FB ISOlat1 -->\n"
  "<!ENTITY uuml   \"&#252;\"> <!-- latin small letter u with diaeresis,\n"
  "                                  U+00FC ISOlat1 -->\n"
  "<!ENTITY yacute \"&#253;\"> <!-- latin small letter y with acute,\n"
  "                                  U+00FD ISOlat1 -->\n"
  "<!ENTITY thorn  \"&#254;\"> <!-- latin small letter thorn,\n"
  "                                  U+00FE ISOlat1 -->\n"
  "<!ENTITY yuml   \"&#255;\"> <!-- latin small letter y with diaeresis,\n"
  "                                  U+00FF ISOlat1 -->\n"
  "<!-- Special characters for XHTML -->\n"
  "\n"
  "<!-- Character entity set. Typical invocation:\n"
  "     <!ENTITY % HTMLspecial PUBLIC\n"
  "        \"-//W3C//ENTITIES Special for XHTML//EN\"\n"
  "        \"http://www.w3.org/TR/xhtml1/DTD/xhtml-special.ent\">\n"
  "     %HTMLspecial;\n"
  "-->\n"
  "\n"
  "<!-- Portions (C) International Organization for Standardization 1986:\n"
  "     Permission to copy in any form is granted for use with\n"
  "     conforming SGML systems and applications as defined in\n"
  "     ISO 8879, provided this notice is included in all copies.\n"
  "-->\n"
  "\n"
  "<!-- Relevant ISO entity set is given unless names are newly introduced.\n"
  "     New names (i.e., not in ISO 8879 list) do not clash with any\n"
  "     existing ISO 8879 entity names. ISO 10646 character numbers\n"
  "     are given for each character, in hex. values are decimal\n"
  "     conversions of the ISO 10646 values and refer to the document\n"
  "     character set. Names are Unicode names. \n"
  "-->\n"
  "\n"
  "<!-- C0 Controls and Basic Latin -->\n"
  "<!ENTITY quot    \"&#34;\"> <!--  quotation mark, U+0022 ISOnum -->\n"
  "<!ENTITY amp     \"&#38;#38;\"> <!--  ampersand, U+0026 ISOnum -->\n"
  "<!ENTITY lt      \"&#38;#60;\"> <!--  less-than sign, U+003C ISOnum -->\n"
  "<!ENTITY gt      \"&#62;\"> <!--  greater-than sign, U+003E ISOnum -->\n"
  "<!ENTITY apos	 \"&#39;\"> <!--  apostrophe = APL quote, U+0027 ISOnum -->\n"
  "\n"
  "<!-- Latin Extended-A -->\n"
  "<!ENTITY OElig   \"&#338;\"> <!--  latin capital ligature OE,\n"
  "                                    U+0152 ISOlat2 -->\n"
  "<!ENTITY oelig   \"&#339;\"> <!--  latin small ligature oe, U+0153 ISOlat2 -->\n"
  "<!-- ligature is a misnomer, this is a separate character in some languages -->\n"
  "<!ENTITY Scaron  \"&#352;\"> <!--  latin capital letter S with caron,\n"
  "                                    U+0160 ISOlat2 -->\n"
  "<!ENTITY scaron  \"&#353;\"> <!--  latin small letter s with caron,\n"
  "                                    U+0161 ISOlat2 -->\n"
  "<!ENTITY Yuml    \"&#376;\"> <!--  latin capital letter Y with diaeresis,\n"
  "                                    U+0178 ISOlat2 -->\n"
  "\n"
  "<!-- Spacing Modifier Letters -->\n"
  "<!ENTITY circ    \"&#710;\"> <!--  modifier letter circumflex accent,\n"
  "                                    U+02C6 ISOpub -->\n"
  "<!ENTITY tilde   \"&#732;\"> <!--  small tilde, U+02DC ISOdia -->\n"
  "\n"
  "<!-- General Punctuation -->\n"
  "<!ENTITY ensp    \"&#8194;\"> <!-- en space, U+2002 ISOpub -->\n"
  "<!ENTITY emsp    \"&#8195;\"> <!-- em space, U+2003 ISOpub -->\n"
  "<!ENTITY thinsp  \"&#8201;\"> <!-- thin space, U+2009 ISOpub -->\n"
  "<!ENTITY zwnj    \"&#8204;\"> <!-- zero width non-joiner,\n"
  "                                    U+200C NEW RFC 2070 -->\n"
  "<!ENTITY zwj     \"&#8205;\"> <!-- zero width joiner, U+200D NEW RFC 2070 -->\n"
  "<!ENTITY lrm     \"&#8206;\"> <!-- left-to-right mark, U+200E NEW RFC 2070 -->\n"
  "<!ENTITY rlm     \"&#8207;\"> <!-- right-to-left mark, U+200F NEW RFC 2070 -->\n"
  "<!ENTITY ndash   \"&#8211;\"> <!-- en dash, U+2013 ISOpub -->\n"
  "<!ENTITY mdash   \"&#8212;\"> <!-- em dash, U+2014 ISOpub -->\n"
  "<!ENTITY lsquo   \"&#8216;\"> <!-- left single quotation mark,\n"
  "                                    U+2018 ISOnum -->\n"
  "<!ENTITY rsquo   \"&#8217;\"> <!-- right single quotation mark,\n"
  "                                    U+2019 ISOnum -->\n"
  "<!ENTITY sbquo   \"&#8218;\"> <!-- single low-9 quotation mark, U+201A NEW -->\n"
  "<!ENTITY ldquo   \"&#8220;\"> <!-- left double quotation mark,\n"
  "                                    U+201C ISOnum -->\n"
  "<!ENTITY rdquo   \"&#8221;\"> <!-- right double quotation mark,\n"
  "                                    U+201D ISOnum -->\n"
  "<!ENTITY bdquo   \"&#8222;\"> <!-- double low-9 quotation mark, U+201E NEW -->\n"
  "<!ENTITY dagger  \"&#8224;\"> <!-- dagger, U+2020 ISOpub -->\n"
  "<!ENTITY Dagger  \"&#8225;\"> <!-- double dagger, U+2021 ISOpub -->\n"
  "<!ENTITY permil  \"&#8240;\"> <!-- per mille sign, U+2030 ISOtech -->\n"
  "<!ENTITY lsaquo  \"&#8249;\"> <!-- single left-pointing angle quotation mark,\n"
  "                                    U+2039 ISO proposed -->\n"
  "<!-- lsaquo is proposed but not yet ISO standardized -->\n"
  "<!ENTITY rsaquo  \"&#8250;\"> <!-- single right-pointing angle quotation mark,\n"
  "                                    U+203A ISO proposed -->\n"
  "<!-- rsaquo is proposed but not yet ISO standardized -->\n"
  "\n"
  "<!-- Currency Symbols -->\n"
  "<!ENTITY euro   \"&#8364;\"> <!--  euro sign, U+20AC NEW -->\n"
  "<!-- Mathematical, Greek and Symbolic characters for XHTML -->\n"
  "\n"
  "<!-- Character entity set. Typical invocation:\n"
  "     <!ENTITY % HTMLsymbol PUBLIC\n"
  "        \"-//W3C//ENTITIES Symbols for XHTML//EN\"\n"
  "        \"http://www.w3.org/TR/xhtml1/DTD/xhtml-symbol.ent\">\n"
  "     %HTMLsymbol;\n"
  "-->\n"
  "\n"
  "<!-- Portions (C) International Organization for Standardization 1986:\n"
  "     Permission to copy in any form is granted for use with\n"
  "     conforming SGML systems and applications as defined in\n"
  "     ISO 8879, provided this notice is included in all copies.\n"
  "-->\n"
  "\n"
  "<!-- Relevant ISO entity set is given unless names are newly introduced.\n"
  "     New names (i.e., not in ISO 8879 list) do not clash with any\n"
  "     existing ISO 8879 entity names. ISO 10646 character numbers\n"
  "     are given for each character, in hex. values are decimal\n"
  "     conversions of the ISO 10646 values and refer to the document\n"
  "     character set. Names are Unicode names. \n"
  "-->\n"
  "\n"
  "<!-- Latin Extended-B -->\n"
  "<!ENTITY fnof     \"&#402;\"> <!-- latin small letter f with hook = function\n"
  "                                    = florin, U+0192 ISOtech -->\n"
  "\n"
  "<!-- Greek -->\n"
  "<!ENTITY Alpha    \"&#913;\"> <!-- greek capital letter alpha, U+0391 -->\n"
  "<!ENTITY Beta     \"&#914;\"> <!-- greek capital letter beta, U+0392 -->\n"
  "<!ENTITY Gamma    \"&#915;\"> <!-- greek capital letter gamma,\n"
  "                                    U+0393 ISOgrk3 -->\n"
  "<!ENTITY Delta    \"&#916;\"> <!-- greek capital letter delta,\n"
  "                                    U+0394 ISOgrk3 -->\n"
  "<!ENTITY Epsilon  \"&#917;\"> <!-- greek capital letter epsilon, U+0395 -->\n"
  "<!ENTITY Zeta     \"&#918;\"> <!-- greek capital letter zeta, U+0396 -->\n"
  "<!ENTITY Eta      \"&#919;\"> <!-- greek capital letter eta, U+0397 -->\n"
  "<!ENTITY Theta    \"&#920;\"> <!-- greek capital letter theta,\n"
  "                                    U+0398 ISOgrk3 -->\n"
  "<!ENTITY Iota     \"&#921;\"> <!-- greek capital letter iota, U+0399 -->\n"
  "<!ENTITY Kappa    \"&#922;\"> <!-- greek capital letter kappa, U+039A -->\n"
  "<!ENTITY Lambda   \"&#923;\"> <!-- greek capital letter lamda,\n"
  "                                    U+039B ISOgrk3 -->\n"
  "<!ENTITY Mu       \"&#924;\"> <!-- greek capital letter mu, U+039C -->\n"
  "<!ENTITY Nu       \"&#925;\"> <!-- greek capital letter nu, U+039D -->\n"
  "<!ENTITY Xi       \"&#926;\"> <!-- greek capital letter xi, U+039E ISOgrk3 -->\n"
  "<!ENTITY Omicron  \"&#927;\"> <!-- greek capital letter omicron, U+039F -->\n"
  "<!ENTITY Pi       \"&#928;\"> <!-- greek capital letter pi, U+03A0 ISOgrk3 -->\n"
  "<!ENTITY Rho      \"&#929;\"> <!-- greek capital letter rho, U+03A1 -->\n"
  "<!-- there is no Sigmaf, and no U+03A2 character either -->\n"
  "<!ENTITY Sigma    \"&#931;\"> <!-- greek capital letter sigma,\n"
  "                                    U+03A3 ISOgrk3 -->\n"
  "<!ENTITY Tau      \"&#932;\"> <!-- greek capital letter tau, U+03A4 -->\n"
  "<!ENTITY Upsilon  \"&#933;\"> <!-- greek capital letter upsilon,\n"
  "                                    U+03A5 ISOgrk3 -->\n"
  "<!ENTITY Phi      \"&#934;\"> <!-- greek capital letter phi,\n"
  "                                    U+03A6 ISOgrk3 -->\n"
  "<!ENTITY Chi      \"&#935;\"> <!-- greek capital letter chi, U+03A7 -->\n"
  "<!ENTITY Psi      \"&#936;\"> <!-- greek capital letter psi,\n"
  "                                    U+03A8 ISOgrk3 -->\n"
  "<!ENTITY Omega    \"&#937;\"> <!-- greek capital letter omega,\n"
  "                                    U+03A9 ISOgrk3 -->\n"
  "\n"
  "<!ENTITY alpha    \"&#945;\"> <!-- greek small letter alpha,\n"
  "                                    U+03B1 ISOgrk3 -->\n"
  "<!ENTITY beta     \"&#946;\"> <!-- greek small letter beta, U+03B2 ISOgrk3 -->\n"
  "<!ENTITY gamma    \"&#947;\"> <!-- greek small letter gamma,\n"
  "                                    U+03B3 ISOgrk3 -->\n"
  "<!ENTITY delta    \"&#948;\"> <!-- greek small letter delta,\n"
  "                                    U+03B4 ISOgrk3 -->\n"
  "<!ENTITY epsilon  \"&#949;\"> <!-- greek small letter epsilon,\n"
  "                                    U+03B5 ISOgrk3 -->\n"
  "<!ENTITY zeta     \"&#950;\"> <!-- greek small letter zeta, U+03B6 ISOgrk3 -->\n"
  "<!ENTITY eta      \"&#951;\"> <!-- greek small letter eta, U+03B7 ISOgrk3 -->\n"
  "<!ENTITY theta    \"&#952;\"> <!-- greek small letter theta,\n"
  "                                    U+03B8 ISOgrk3 -->\n"
  "<!ENTITY iota     \"&#953;\"> <!-- greek small letter iota, U+03B9 ISOgrk3 -->\n"
  "<!ENTITY kappa    \"&#954;\"> <!-- greek small letter kappa,\n"
  "                                    U+03BA ISOgrk3 -->\n"
  "<!ENTITY lambda   \"&#955;\"> <!-- greek small letter lamda,\n"
  "                                    U+03BB ISOgrk3 -->\n"
  "<!ENTITY mu       \"&#956;\"> <!-- greek small letter mu, U+03BC ISOgrk3 -->\n"
  "<!ENTITY nu       \"&#957;\"> <!-- greek small letter nu, U+03BD ISOgrk3 -->\n"
  "<!ENTITY xi       \"&#958;\"> <!-- greek small letter xi, U+03BE ISOgrk3 -->\n"
  "<!ENTITY omicron  \"&#959;\"> <!-- greek small letter omicron, U+03BF NEW -->\n"
  "<!ENTITY pi       \"&#960;\"> <!-- greek small letter pi, U+03C0 ISOgrk3 -->\n"
  "<!ENTITY rho      \"&#961;\"> <!-- greek small letter rho, U+03C1 ISOgrk3 -->\n"
  "<!ENTITY sigmaf   \"&#962;\"> <!-- greek small letter final sigma,\n"
  "                                    U+03C2 ISOgrk3 -->\n"
  "<!ENTITY sigma    \"&#963;\"> <!-- greek small letter sigma,\n"
  "                                    U+03C3 ISOgrk3 -->\n"
  "<!ENTITY tau      \"&#964;\"> <!-- greek small letter tau, U+03C4 ISOgrk3 -->\n"
  "<!ENTITY upsilon  \"&#965;\"> <!-- greek small letter upsilon,\n"
  "                                    U+03C5 ISOgrk3 -->\n"
  "<!ENTITY phi      \"&#966;\"> <!-- greek small letter phi, U+03C6 ISOgrk3 -->\n"
  "<!ENTITY chi      \"&#967;\"> <!-- greek small letter chi, U+03C7 ISOgrk3 -->\n"
  "<!ENTITY psi      \"&#968;\"> <!-- greek small letter psi, U+03C8 ISOgrk3 -->\n"
  "<!ENTITY omega    \"&#969;\"> <!-- greek small letter omega,\n"
  "                                    U+03C9 ISOgrk3 -->\n"
  "<!ENTITY thetasym \"&#977;\"> <!-- greek theta symbol,\n"
  "                                    U+03D1 NEW -->\n"
  "<!ENTITY upsih    \"&#978;\"> <!-- greek upsilon with hook symbol,\n"
  "                                    U+03D2 NEW -->\n"
  "<!ENTITY piv      \"&#982;\"> <!-- greek pi symbol, U+03D6 ISOgrk3 -->\n"
  "\n"
  "<!-- General Punctuation -->\n"
  "<!ENTITY bull     \"&#8226;\"> <!-- bullet = black small circle,\n"
  "                                     U+2022 ISOpub  -->\n"
  "<!-- bullet is NOT the same as bullet operator, U+2219 -->\n"
  "<!ENTITY hellip   \"&#8230;\"> <!-- horizontal ellipsis = three dot leader,\n"
  "                                     U+2026 ISOpub  -->\n"
  "<!ENTITY prime    \"&#8242;\"> <!-- prime = minutes = feet, U+2032 ISOtech -->\n"
  "<!ENTITY Prime    \"&#8243;\"> <!-- double prime = seconds = inches,\n"
  "                                     U+2033 ISOtech -->\n"
  "<!ENTITY oline    \"&#8254;\"> <!-- overline = spacing overscore,\n"
  "                                     U+203E NEW -->\n"
  "<!ENTITY frasl    \"&#8260;\"> <!-- fraction slash, U+2044 NEW -->\n"
  "\n"
  "<!-- Letterlike Symbols -->\n"
  "<!ENTITY weierp   \"&#8472;\"> <!-- script capital P = power set\n"
  "                                     = Weierstrass p, U+2118 ISOamso -->\n"
  "<!ENTITY image    \"&#8465;\"> <!-- black-letter capital I = imaginary part,\n"
  "                                     U+2111 ISOamso -->\n"
  "<!ENTITY real     \"&#8476;\"> <!-- black-letter capital R = real part symbol,\n"
  "                                     U+211C ISOamso -->\n"
  "<!ENTITY trade    \"&#8482;\"> <!-- trade mark sign, U+2122 ISOnum -->\n"
  "<!ENTITY alefsym  \"&#8501;\"> <!-- alef symbol = first transfinite cardinal,\n"
  "                                     U+2135 NEW -->\n"
  "<!-- alef symbol is NOT the same as hebrew letter alef,\n"
  "     U+05D0 although the same glyph could be used to depict both characters -->\n"
  "\n"
  "<!-- Arrows -->\n"
  "<!ENTITY larr     \"&#8592;\"> <!-- leftwards arrow, U+2190 ISOnum -->\n"
  "<!ENTITY uarr     \"&#8593;\"> <!-- upwards arrow, U+2191 ISOnum-->\n"
  "<!ENTITY rarr     \"&#8594;\"> <!-- rightwards arrow, U+2192 ISOnum -->\n"
  "<!ENTITY darr     \"&#8595;\"> <!-- downwards arrow, U+2193 ISOnum -->\n"
  "<!ENTITY harr     \"&#8596;\"> <!-- left right arrow, U+2194 ISOamsa -->\n"
  "<!ENTITY crarr    \"&#8629;\"> <!-- downwards arrow with corner leftwards\n"
  "                                     = carriage return, U+21B5 NEW -->\n"
  "<!ENTITY lArr     \"&#8656;\"> <!-- leftwards double arrow, U+21D0 ISOtech -->\n"
  "<!-- Unicode does not say that lArr is the same as the 'is implied by' arrow\n"
  "    but also does not have any other character for that function. So lArr can\n"
  "    be used for 'is implied by' as ISOtech suggests -->\n"
  "<!ENTITY uArr     \"&#8657;\"> <!-- upwards double arrow, U+21D1 ISOamsa -->\n"
  "<!ENTITY rArr     \"&#8658;\"> <!-- rightwards double arrow,\n"
  "                                     U+21D2 ISOtech -->\n"
  "<!-- Unicode does not say this is the 'implies' character but does not have \n"
  "     another character with this function so rArr can be used for 'implies'\n"
  "     as ISOtech suggests -->\n"
  "<!ENTITY dArr     \"&#8659;\"> <!-- downwards double arrow, U+21D3 ISOamsa -->\n"
  "<!ENTITY hArr     \"&#8660;\"> <!-- left right double arrow,\n"
  "                                     U+21D4 ISOamsa -->\n"
  "\n"
  "<!-- Mathematical Operators -->\n"
  "<!ENTITY forall   \"&#8704;\"> <!-- for all, U+2200 ISOtech -->\n"
  "<!ENTITY part     \"&#8706;\"> <!-- partial differential, U+2202 ISOtech  -->\n"
  "<!ENTITY exist    \"&#8707;\"> <!-- there exists, U+2203 ISOtech -->\n"
  "<!ENTITY empty    \"&#8709;\"> <!-- empty set = null set, U+2205 ISOamso -->\n"
  "<!ENTITY nabla    \"&#8711;\"> <!-- nabla = backward difference,\n"
  "                                     U+2207 ISOtech -->\n"
  "<!ENTITY isin     \"&#8712;\"> <!-- element of, U+2208 ISOtech -->\n"
  "<!ENTITY notin    \"&#8713;\"> <!-- not an element of, U+2209 ISOtech -->\n"
  "<!ENTITY ni       \"&#8715;\"> <!-- contains as member, U+220B ISOtech -->\n"
  "<!ENTITY prod     \"&#8719;\"> <!-- n-ary product = product sign,\n"
  "                                     U+220F ISOamsb -->\n"
  "<!-- prod is NOT the same character as U+03A0 'greek capital letter pi' though\n"
  "     the same glyph might be used for both -->\n"
  "<!ENTITY sum      \"&#8721;\"> <!-- n-ary summation, U+2211 ISOamsb -->\n"
  "<!-- sum is NOT the same character as U+03A3 'greek capital letter sigma'\n"
  "     though the same glyph might be used for both -->\n"
  "<!ENTITY minus    \"&#8722;\"> <!-- minus sign, U+2212 ISOtech -->\n"
  "<!ENTITY lowast   \"&#8727;\"> <!-- asterisk operator, U+2217 ISOtech -->\n"
  "<!ENTITY radic    \"&#8730;\"> <!-- square root = radical sign,\n"
  "                                     U+221A ISOtech -->\n"
  "<!ENTITY prop     \"&#8733;\"> <!-- proportional to, U+221D ISOtech -->\n"
  "<!ENTITY infin    \"&#8734;\"> <!-- infinity, U+221E ISOtech -->\n"
  "<!ENTITY ang      \"&#8736;\"> <!-- angle, U+2220 ISOamso -->\n"
  "<!ENTITY and      \"&#8743;\"> <!-- logical and = wedge, U+2227 ISOtech -->\n"
  "<!ENTITY or       \"&#8744;\"> <!-- logical or = vee, U+2228 ISOtech -->\n"
  "<!ENTITY cap      \"&#8745;\"> <!-- intersection = cap, U+2229 ISOtech -->\n"
  "<!ENTITY cup      \"&#8746;\"> <!-- union = cup, U+222A ISOtech -->\n"
  "<!ENTITY int      \"&#8747;\"> <!-- integral, U+222B ISOtech -->\n"
  "<!ENTITY there4   \"&#8756;\"> <!-- therefore, U+2234 ISOtech -->\n"
  "<!ENTITY sim      \"&#8764;\"> <!-- tilde operator = varies with = similar to,\n"
  "                                     U+223C ISOtech -->\n"
  "<!-- tilde operator is NOT the same character as the tilde, U+007E,\n"
  "     although the same glyph might be used to represent both  -->\n"
  "<!ENTITY cong     \"&#8773;\"> <!-- approximately equal to, U+2245 ISOtech -->\n"
  "<!ENTITY asymp    \"&#8776;\"> <!-- almost equal to = asymptotic to,\n"
  "                                     U+2248 ISOamsr -->\n"
  "<!ENTITY ne       \"&#8800;\"> <!-- not equal to, U+2260 ISOtech -->\n"
  "<!ENTITY equiv    \"&#8801;\"> <!-- identical to, U+2261 ISOtech -->\n"
  "<!ENTITY le       \"&#8804;\"> <!-- less-than or equal to, U+2264 ISOtech -->\n"
  "<!ENTITY ge       \"&#8805;\"> <!-- greater-than or equal to,\n"
  "                                     U+2265 ISOtech -->\n"
  "<!ENTITY sub      \"&#8834;\"> <!-- subset of, U+2282 ISOtech -->\n"
  "<!ENTITY sup      \"&#8835;\"> <!-- superset of, U+2283 ISOtech -->\n"
  "<!ENTITY nsub     \"&#8836;\"> <!-- not a subset of, U+2284 ISOamsn -->\n"
  "<!ENTITY sube     \"&#8838;\"> <!-- subset of or equal to, U+2286 ISOtech -->\n"
  "<!ENTITY supe     \"&#8839;\"> <!-- superset of or equal to,\n"
  "                                     U+2287 ISOtech -->\n"
  "<!ENTITY oplus    \"&#8853;\"> <!-- circled plus = direct sum,\n"
  "                                     U+2295 ISOamsb -->\n"
  "<!ENTITY otimes   \"&#8855;\"> <!-- circled times = vector product,\n"
  "                                     U+2297 ISOamsb -->\n"
  "<!ENTITY perp     \"&#8869;\"> <!-- up tack = orthogonal to = perpendicular,\n"
  "                                     U+22A5 ISOtech -->\n"
  "<!ENTITY sdot     \"&#8901;\"> <!-- dot operator, U+22C5 ISOamsb -->\n"
  "<!-- dot operator is NOT the same character as U+00B7 middle dot -->\n"
  "\n"
  "<!-- Miscellaneous Technical -->\n"
  "<!ENTITY lceil    \"&#8968;\"> <!-- left ceiling = APL upstile,\n"
  "                                     U+2308 ISOamsc  -->\n"
  "<!ENTITY rceil    \"&#8969;\"> <!-- right ceiling, U+2309 ISOamsc  -->\n"
  "<!ENTITY lfloor   \"&#8970;\"> <!-- left floor = APL downstile,\n"
  "                                     U+230A ISOamsc  -->\n"
  "<!ENTITY rfloor   \"&#8971;\"> <!-- right floor, U+230B ISOamsc  -->\n"
  "<!ENTITY lang     \"&#9001;\"> <!-- left-pointing angle bracket = bra,\n"
  "                                     U+2329 ISOtech -->\n"
  "<!-- lang is NOT the same character as U+003C 'less than sign' \n"
  "     or U+2039 'single left-pointing angle quotation mark' -->\n"
  "<!ENTITY rang     \"&#9002;\"> <!-- right-pointing angle bracket = ket,\n"
  "                                     U+232A ISOtech -->\n"
  "<!-- rang is NOT the same character as U+003E 'greater than sign' \n"
  "     or U+203A 'single right-pointing angle quotation mark' -->\n"
  "\n"
  "<!-- Geometric Shapes -->\n"
  "<!ENTITY loz      \"&#9674;\"> <!-- lozenge, U+25CA ISOpub -->\n"
  "\n"
  "<!-- Miscellaneous Symbols -->\n"
  "<!ENTITY spades   \"&#9824;\"> <!-- black spade suit, U+2660 ISOpub -->\n"
  "<!-- black here seems to mean filled as opposed to hollow -->\n"
  "<!ENTITY clubs    \"&#9827;\"> <!-- black club suit = shamrock,\n"
  "                                     U+2663 ISOpub -->\n"
  "<!ENTITY hearts   \"&#9829;\"> <!-- black heart suit = valentine,\n"
  "                                     U+2665 ISOpub -->\n"
  "<!ENTITY diams    \"&#9830;\"> <!-- black diamond suit, U+2666 ISOpub -->\n"
  ;
