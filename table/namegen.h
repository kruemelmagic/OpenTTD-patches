#include "../stdafx.h"
#include "../ttd.h"

static const char *name_original_english_1[] = {
	"Great ",
	"Little ",
	"New ",
	"Fort ",
};

static const char *name_original_english_2[] = {
	"Wr",
	"B",
	"C",
	"Ch",
	"Br",
	"D",
	"Dr",
	"F",
	"Fr",
	"Fl",
	"G",
	"Gr",
	"H",
	"L",
	"M",
	"N",
	"P",
	"Pr",
	"Pl",
	"R",
	"S",
	"S",
	"Sl",
	"T",
	"Tr",
	"W"
};

static const char *name_original_english_3[] = {
	"ar",
	"a",
	"e",
	"in",
	"on",
	"u",
	"un",
	"en"
};

static const char *name_original_english_4[] = {
	"n",
	"ning",
	"ding",
	"d",
	"",
	"t"
	"fing"
};

static const char *name_original_english_5[] = {
	"ville",
	"ham",
	"field",
	"ton",
	"town",
	"bridge",
	"bury",
	"wood",
	"ford",
	"hall",
	"ston",
	"way",
	"stone",
	"borough",
	"ley",
	"head",
	"bourne",
	"pool",
	"worth",
	"hill",
	"well",
	"hattan",
	"burg",
};

static const char *name_original_english_6[] = {
	"-on-sea",
	" Bay",
	" Market",
	" Cross",
	" Bridge",
	" Falls",
	" City",
	" Ridge",
	" Springs"
};

static const char *name_additional_english_prefix[] = {
	"Great ",
	"Little ",
	"New ",
	"Fort ",
	"St. ",
	"Old "
};

static const char *name_additional_english_1a[] = {
	"Pen",
	"Lough",
	"Stam",
	"Aber",
	"Acc",
	"Ex",
	"Ax",
	"Bre",
	"Cum",
	"Dun",
	"Fin",
	"Inver",
	"Kin",
	"Mon",
	"Nan",
	"Nant",
	"Pit",
	"Pol",
	"Pont",
	"Strath",
	"Tre",
	"Tilly",
	"Beck",
	"Canter",
	"Bath",
	"Liver",
	"Mal",
	"Ox",
	"Bletch",
	"Maccles",
	"Grim",
	"Wind",
	"Sher",
	"Gates",
	"Orp",
	"Brom",
	"Lewis",
	"Whit",
	"White",
	"Worm",
	"Tyne",
	"Avon",
	"Stan"
};

static const char *name_additional_english_1b1[] = {
	"Wr",
	"B",
	"C",
	"Ch",
	"Br",
	"D",
	"Dr",
	"F",
	"Fr",
	"Fl",
	"G",
	"Gr",
	"H",
	"L",
	"M",
	"N",
	"P",
	"Pr",
	"Pl",
	"R",
	"S",
	"S",
	"Sl",
	"T",
	"Tr",
	"W"
};

static const char *name_additional_english_1b2[] = {
	"ar",
	"a",
	"e",
	"in",
	"on",
	"u",
	"o",
	"ee",
	"es",
	"ea",
	"un",
	"en"
};

static const char *name_additional_english_1b3a[] = {
	"n",
	"d",
	"",
	"t",
	"",
	""
};

static const char *name_additional_english_1b3b[] = {
	"ning",
	"ding",
	"fing"
};

static const char *name_additional_english_2[] = {
	"ville",
	"ham",
	"field",
	"ton",
	"town",
	"borough",
	"bridge",
	"bury",
	"wood",
	"ditch",
	"ford",
	"hall",
	"dean",
	"leigh",
	"dore",
	"ston",
	"stow",
	"church",
	"wich",
	"low",
	"way",
	"stone",
	"minster",
	"ley",
	"head",
	"bourne",
	"pool",
	"worth",
	"hill",
	"well",
	"hattan",
	"burg",
	"berg",
	"burgh",
	"port",
	"stoke",
	"haven",
	"stable",
	"stock",
	"side",
	"brook",
	"don",
	"den",
	"down",
	"nor",
	"grove",
	"combe",
	"by",
	"say",
	"ney",
	"chester",
	"dale",
	"ness",
	"shaw",
	"thwaite"
};

static const char *name_additional_english_3[] = {
	"-on-sea",
	" Bay",
	" Market",
	" Beeches",
	" Common",
	" Park",
	" Heath",
	" Marsh",
	" Green",
	" Castle",
	" End",
	" Rivers",
	" Cross",
	" Bridge",
	" Falls",
	" City",
	" Ridge",
	" Springs"
};

static const char *name_austrian_a1[] = {
	"Bad ",
	"Deutsch ",
	"Gross ",
	"Klein ",
	"Markt ",
	"Maria "
};

static const char *name_austrian_a2[] = {
	"Aus",
	"Alten",
	"Braun",
	"V�sl",
	"Mittern",
	"Nuss",
	"Neu",
	"Walters",
	"Breiten",
	"Eisen",
	"Feld",
	"Mittern",
	"Gall",
	"Obern",
	"Grat",
	"Heiligen",
	"Hof",
	"Holla",
	"Stein",
	"Eber",
	"Eggen",
	"Enzers",
	"Frauen",
	"Herren",
	"Hof",
	"H�tt",
	"Kaisers",
	"K�nigs",
	"Knittel",
	"Lang",
	"Ober",
	"Ollers",
	"Pfaffen",
	"Potten",
	"Salz",
	"Schwarz",
	"Stocker",
	"Unter",
	"Utten",
	"V�sen",
	"Vill",
	"Weissen"
};

static const char *name_austrian_a3[] = {
	"see",
	"bach",
	"dorf",
	"ach",
	"stein",
	"hofen",
	"au",
	"ach",
	"kirch",
	"kirchen",
	"kreuz",
	"brunn",
	"siedl",
	"markt",
	"wang",
	"haag"
};

static const char *name_austrian_a4[] = {
	"Bruck",
	"Brunn",
	"Gams",
	"Grein",
	"Ried",
	"Faak",
	"Zell",
	"Spital",
	"Kirchberg",
	"Saal",
	"Taferl",
	"Wald"
};

static const char *name_austrian_a5[] = {
	"St. ",
	"Sankt "
};

static const char *name_austrian_a6[] = {
	"Aegyd",
	"Andr�",
	"Georgen",
	"Jakob",
	"Johann",
	"Leonhard",
	"Marein",
	"Lorenzen",
	"Margarethen",
	"Martin",
	"Michael",
	"Nikolai",
	"Oswald",
	"Peter",
	"P�lten",
	"Stefan",
	"Stephan",
	"Thomas",
	"Veit",
	"Wolfgang"
};

static const char *name_austrian_f1[] = {
	" an der ",
	" ob der "
};

static const char *name_austrian_f2[] = {
	"Donau",
	"Steyr",
	"Lafnitz",
	"Leitha",
	"Thaya",
	"Gail",
	"Drau",
	"Salzach",
	"Ybbs",
	"Traisen",
	"Enns",
	"Mur",
	"Ill"
};

static const char *name_austrian_b1[] = {
	" am "
};

static const char *name_austrian_b2[] = {
	"Brenner",
	"Dachstein",
	"Gebirge",
	"Grossglockner",
	"Hausruck",
	"Semmering",
	"Wagram",
	"Wechsel",
	"Wilden Kaiser",
	"Ziller"
};

static const char *name_german_hardcoded[] = {
	"Berlin",
	"Bonn",
	"Bremen",
	"Cottbus",
	"Chemnitz",
	"Dortmund",
	"Dresden",
	"Erfurt",
	"Erlangen",
	"Essen",
	"Fulda",
	"Gera",
	"Kassel",
	"Kiel",
	"K�ln",
	"L�beck",
	"Magdeburg",
	"M�nchen",
	"Potsdam",
	"Stuttgart",
	"Wiesbaden"
};

static const char *name_german_pre[] = {
	"Bad ",
	"Klein ",
	"Neu "
};

static const char *name_german_1[] = {
	"Alb",
	"Als",
	"Ander",
	"Arns",
	"Bruns",
	"Bam",
	"Biele",
	"Cloppen",
	"Co",
	"Duis",
	"D�ssel",
	"Dannen",
	"Elb",
	"Els",
	"Elster",
	"Eichen",
	"Ems",
	"Fahr",
	"Falken",
	"Flens",
	"Frank",
	"Frei",
	"Freuden",
	"Fried",
	"F�rsten",
	"Hahn",
	"Ham",
	"Harz",
	"Heidel",
	"Hers",
	"Herz",
	"Holz",
	"Hildes",
	"Inns",
	"Ilsen",
	"Ingols",
	"Kel",
	"Kies",
	"Korn",
	"Kor",
	"Kreuz",
	"Kulm",
	"Langen",
	"Lim",
	"Lohr",
	"L�ne",
	"Mel",
	"Michels",
	"M�hl",
	"Naum",
	"Nest",
	"Nord",
	"Nort",
	"Nien",
	"Nidda",
	"Nieder",
	"N�rn",
	"Ober",
	"Offen",
	"Osna",
	"Olden",
	"Ols",
	"Oranien",
	"Pader",
	"Quedlin",
	"Quer",
	"Ravens",
	"Regens",
	"Rott",
	"Ros",
	"R�ssels",
	"Saal",
	"Saar",
	"Salz",
	"Sch�ne",
	"Schwein",
	"Sonder",
	"Sonnen",
	"Stein",
	"Strals",
	"Straus",
	"S�d",
	"Ton",
	"Unter",
	"Ur",
	"Vor",
	"Wald",
	"War",
	"Wert",
	"Wester",
	"Witten",
	"Wolfs",
	"W�rz"
};

static const char *name_german_2[] = {
	"bach",
	"berg",
	"br�ck",
	"br�cken",
	"burg",
	"dorf",
	"feld",
	"furt",
	"hausen",
	"haven",
	"heim",
	"horst",
	"mund",
	"m�nster",
	"stadt",
	"wald"
};

static const char *name_german_3_an_der[] = {
	" an der "
};

static const char *name_german_3_am[] = {
	" am "
};

static const char *name_german_4_an_der[] = {
	"Oder",
	"Spree",
	"Donau",
	"Saale",
	"Elbe"
};

static const char *name_german_4_am[] = {
	"Main"
};

static const char *name_spanish_1[] = {
	"Caracas",
	"Maracay",
	"Maracaibo",
	"Velencia",
	"El Dorado",
	"Morrocoy",
	"Cata",
	"Cataito",
	"Ciudad Bolivar",
	"Barquisimeto",
	"Merida",
	"Puerto Ordaz",
	"Santa Elena",
	"San Juan",
	"San Luis",
	"San Rafael",
	"Santiago",
	"Barcelona",
	"Barinas",
	"San Cristobal",
	"San Fransisco",
	"San Martin",
	"Guayana",
	"San Carlos",
	"El Limon",
	"Coro",
	"Corocoro",
	"Puerto Ayacucho",
	"Elorza",
	"Arismendi",
	"Trujillo",
	"Carupano",
	"Anaco",
	"Lima",
	"Cuzco",
	"Iquitos",
	"Callao",
	"Huacho",
	"Camana",
	"Puerto Chala",
	"Santa Cruz",
	"Quito",
	"Cuenca",
	"Huacho",
	"Tulcan",
	"Esmereldas",
	"Ibarra",
	"San Lorenzo",
	"Macas",
	"Morana",
	"Machala",
	"Zamora",
	"Latacunga",
	"Tena",
	"Cochabamba",
	"Ascencion",
	"Magdalena",
	"Santa Ana",
	"Manoa",
	"Sucre",
	"Oruro",
	"Uyuni",
	"Potosi",
	"Tupiza",
	"La Quiaca",
	"Yacuiba",
	"San Borja",
	"Fuerte Olimpio",
	"Fortin Esteros",
	"Campo Grande",
	"Bogota",
	"El Banco",
	"Zaragosa",
	"Neiva",
	"Mariano",
	"Cali",
	"La Palma",
	"Andoas",
	"Barranca",
	"Montevideo",
	"Valdivia",
	"Arica",
	"Temuco",
	"Tocopilla",
	"Mendoza",
	"Santa Rosa"
};

static const char *name_french_1[] = {
	"Agincourt",
	"Lille",
	"Dinan",
	"Aubusson",
	"Rodez",
	"Bergerac",
	"Bordeaux",
	"Bayonne",
	"Montpellier",
	"Montelimar",
	"Valence",
	"Digne",
	"Nice",
	"Cannes",
	"St. Tropez",
	"Marseilles",
	"Narbonne",
	"S�te",
	"Aurillac",
	"Gueret",
	"Le Creusot",
	"Nevers",
	"Auxerre",
	"Versailles",
	"Meaux",
	"Ch�lons",
	"Compi�gne",
	"Metz",
	"Chaumont",
	"Langres",
	"Bourg",
	"Lyons",
	"Vienne",
	"Grenoble",
	"Toulon",
	"Rennes",
	"Le Mans",
	"Angers",
	"Nantes",
	"Ch�teauroux",
	"Orl�ans",
	"Lisieux",
	"Cherbourg",
	"Morlaix",
	"Cognac",
	"Agen",
	"Tulle",
	"Blois",
	"Troyes",
	"Charolles",
	"Grenoble",
	"Chamb�ry",
	"Tours",
	"St. Brieuc",
	"St. Malo",
	"La Rochelle",
	"St. Flour",
	"Le Puy",
	"Vichy",
	"St. Valery",
	"Beaujolais",
	"Narbonne",
	"Albi",
	"St. Valery",
	"Biarritz",
	"B�ziers",
	"N�mes",
	"Chamonix",
	"Angoul�me",
	"Alen�on"
};

static const char *name_silly_1[] = {
	"Binky",
	"Blubber",
	"Bumble",
	"Crinkle",
	"Crusty",
	"Dangle",
	"Dribble",
	"Flippety",
	"Google",
	"Muffin",
	"Nosey",
	"Pinker",
	"Quack",
	"Rumble",
	"Sleepy",
	"Sliggles",
	"Snooze",
	"Teddy",
	"Tinkle",
	"Twister",
	"Pinker",
	"Hippo",
	"Itchy",
	"Jelly",
	"Jingle",
	"Jolly",
	"Kipper",
	"Lazy",
	"Frogs",
	"Mouse",
	"Quack",
	"Cheeky",
	"Lumpy",
	"Grumpy",
	"Mangle",
	"Fiddle",
	"Slugs",
	"Noodles",
	"Poodles",
	"Shiver",
	"Rumble",
	"Pixie",
	"Puddle",
	"Riddle",
	"Rattle",
	"Rickety",
	"Waffle",
	"Sagging",
	"Sausage",
	"Egg",
	"Sleepy",
	"Scatter",
	"Scramble",
	"Silly",
	"Simple",
	"Trickle",
	"Slippery",
	"Slimey",
	"Slumber",
	"Soggy",
	"Sliggles",
	"Splutter",
	"Sulky",
	"Swindle",
	"Swivel",
	"Tasty",
	"Tangle",
	"Toggle",
	"Trotting",
	"Tumble",
	"Snooze",
	"Water",
	"Windy",
	"Amble",
	"Bubble",
	"Cheery",
	"Cheese",
	"Cockle",
	"Cracker",
	"Crumple",
	"Teddy",
	"Evil",
	"Fairy",
	"Falling",
	"Fishy",
	"Fizzle",
	"Frosty",
	"Griddle"
};

static const char *name_silly_2[] = {
	"ton",
	"bury",
	"bottom",
	"ville",
	"well",
	"weed",
	"worth",
	"wig",
	"wick",
	"wood",
	"pool",
	"head",
	"burg",
	"gate",
	"bridge"
};

static const char *name_swedish_1[] = {
	"Gamla ",
	"Lilla ",
	"Nya ",
	"Stora "
};

static const char *name_swedish_2[] = {
	"Boll",
	"Bor",
	"Ed",
	"En",
	"Erik",
	"Es",
	"Fin",
	"Fisk",
	"Gr�n",
	"Hag",
	"Halm",
	"Karl",
	"Kram",
	"Kung",
	"Land",
	"Lid",
	"Lin",
	"Mal",
	"Malm",
	"Marie",
	"Ner",
	"Norr",
	"Oskar",
	"Sand",
	"Skog",
	"Stock",
	"Stor",
	"Str�m",
	"Sund",
	"S�der",
	"Tall",
	"Tratt",
	"Troll",
	"Upp",
	"Var",
	"V�ster",
	"�ngel",
	"�ster"
};

static const char *name_swedish_2a[] = {
	"B",
	"Br",
	"D",
	"Dr",
	"Dv",
	"F",
	"Fj",
	"Fl",
	"Fr",
	"G",
	"Gl",
	"Gn",
	"Gr",
	"H",
	"J",
	"K",
	"Kl",
	"Kn",
	"Kr",
	"Kv",
	"L",
	"M",
	"N",
	"P",
	"Pl",
	"Pr",
	"R",
	"S",
	"Sk",
	"Skr",
	"Sl",
	"Sn",
	"Sp",
	"Spr",
	"St",
	"Str",
	"Sv",
	"T",
	"Tr",
	"Tv",
	"V",
	"Vr"
};

static const char *name_swedish_2b[] = {
	"a",
	"e",
	"i",
	"o",
	"u",
	"y",
	"�",
	"�",
	"�"
};

static const char *name_swedish_2c[] = {
	"ck",
	"d",
	"dd",
	"g",
	"gg",
	"l",
	"ld",
	"m",
	"n",
	"nd",
	"ng",
	"nn",
	"p",
	"pp",
	"r",
	"rd",
	"rk",
	"rp",
	"rr",
	"rt",
	"s",
	"sk",
	"st",
	"t",
	"tt",
	"v"
};

static const char *name_swedish_3[] = {
	"arp",
	"berg",
	"boda",
	"borg",
	"bro",
	"bukten",
	"by",
	"byn",
	"fors",
	"hammar",
	"hamn",
	"holm",
	"hus",
	"h�ttan",
	"kulle",
	"k�ping",
	"lund",
	"l�v",
	"sala",
	"skrona",
	"sl�tt",
	"sp�ng",
	"stad",
	"sund",
	"svall",
	"svik",
	"s�ker",
	"udde",
	"valla",
	"viken",
	"�lv",
	"�s"
};

static const char *name_dutch_1[] = {
	"Nieuw ",
	"Oud ",
	"Groot ",
	"Zuid ",
	"Noord ",
	"Oost ",
	"West ",
	"Klein "
};

static const char *name_dutch_2[] = {
	"Hoog",
	"Laag",
	"Zuider",
	"Zuid",
	"Ooster",
	"Oost",
	"Wester",
	"West",
	"Hoofd",
	"Midden",
	"Eind",
	"Amster",
	"Amstel",
	"Dord",
	"Rotter",
	"Haar",
	"Til",
	"Enk",
	"Dok",
	"Veen",
	"Leidsch",
	"Lely",
	"En",
	"Kaats",
	"U",
	"Maas",
	"Mar",
	"Bla",
	"Al",
	"Alk",
	"Eer",
	"Drie",
	"Ter",
	"Groes",
	"Goes",
	"Soest",
	"Coe",
	"Uit",
	"Zwaag",
	"Hellen",
	"Slie",
	"IJ",
	"Grubben",
	"Groen",
	"Lek",
	"Ridder",
	"Schie",
	"Olde",
	"Roose",
	"Haar",
	"Til",
	"Loos",
	"Hil"
};

static const char *name_dutch_3[] = {
	"Drog",
	"Nat",
	"Valk",
	"Bob",
	"Dedem",
	"Kollum",
	"Best",
	"Hoend",
	"Leeuw",
	"Graaf",
	"Uithuis",
	"Purm",
	"Hard",
	"Hell",
	"Werk",
	"Spijk",
	"Vink",
	"Wams",
	"Heerhug",
	"Koning"
};

static const char *name_dutch_4[] = {
	"e",
	"er",
	"el",
	"en",
	"o",
	"s"
};

static const char *name_dutch_5[] = {
	"stad",
	"vorst",
	"dorp",
	"dam",
	"beek",
	"doorn",
	"zijl",
	"zijlen",
	"lo",
	"muiden",
	"meden",
	"vliet",
	"nisse",
	"daal",
	"vorden",
	"vaart",
	"mond",
	"zaal",
	"water",
	"duinen",
	"heuvel",
	"geest",
	"kerk",
	"meer",
	"maar",
	"hoorn",
	"rade",
	"wijk",
	"berg",
	"heim",
	"sum",
	"richt",
	"burg",
	"recht",
	"drecht",
	"trecht",
	"tricht",
	"dricht",
	"lum",
	"rum",
	"halen",
	"oever",
	"wolde",
	"veen",
	"hoven",
	"gast",
	"kum",
	"hage",
	"dijk",
	"zwaag",
	"pomp",
	"huizen",
	"bergen",
	"schede",
	"mere",
	"end"
};

static const char *name_finnish_1[] = {
	"Aijala",
	"Kisko",
	"Espoo",
	"Helsinki",
	"Tapiola",
	"J�rvel�",
	"Lahti",
	"Kotka",
	"Hamina",
	"Loviisa",
	"Kouvola",
	"Tampere",
	"Kokkola",
	"Oulu",
	"Salo",
	"Malmi",
	"Pelto",
	"Koski",
	"Iisalmi",
	"Raisio",
	"Taavetti",
	"Joensuu",
	"Imatra",
	"Tapanila",
	"Pasila"
};

static const char *name_finnish_2a[] = {
	"Hiekka",
	"Haapa",
	"Mylly",
	"Kivi",
	"Lappeen",
	"Lohjan",
	"Savon",
	"Sauna",
	"Keri",
	"Uusi",
	"Vanha",
	"Lapin",
	"Kes�",
	"Kuusi",
	"Pelto",
	"Tuomi",
	"Pit�j�n",
	"Terva",
	"Olki",
	"Hein�",
	"Kuusan",
	"Sein�",
	"Kemi",
	"Rova",
	"Martin",
	"Koivu"
};

static const char *name_finnish_2b[] = {
	"harju",
	"linna",
	"j�rvi",
	"kallio",
	"m�ki",
	"nummi",
	"joki",
	"kyl�",
	"lampi",
	"lahti",
	"mets�",
	"suo",
	"laakso",
	"niitty",
	"luoto",
	"hovi",
	"ranta",
	"koski"
};

static const char *name_polish_1_m[] = {
	"Wielki ",
	"Maly ",
	"Zly ",
	"Dobry ",
	"Nowy ",
	"Stary ",
	"Zloty ",
	"Zielony ",
	"Bialy ",
	"Modry ",
	"Debowy "
};

static const char *name_polish_1_f[] = {
	"Wielka ",
	"Mala ",
	"Zla ",
	"Dobra ",
	"Nowa ",
	"Stara ",
	"Zlota ",
	"Zielona ",
	"Biala ",
	"Modra ",
	"Debowa "
};

static const char *name_polish_1_n[] = {
	"Wielkie ",
	"Male ",
	"Zle ",
	"Dobre ",
	"Nowe ",
	"Stare ",
	"Zlote ",
	"Zielone ",
	"Biale ",
	"Modre ",
	"Debowe "
};

static const char *name_polish_2_o[] = {
	"Frombork",
	"Gniezno",
	"Olsztyn",
	"Torun",
	"Bydgoszcz",
	"Terespol",
	"Krakow",
	"Poznan",
	"Wroclaw",
	"Katowice",
	"Cieszyn",
	"Bytom",
	"Frombork",
	"Hel",
	"Konin",
	"Lublin",
	"Malbork",
	"Sopot",
	"Sosnowiec",
	"Gdansk",
	"Gdynia",
	"Sieradz",
	"Sandomierz",
	"Szczyrk",
	"Szczytno",
	"Szczecin",
	"Zakopane",
	"Szklarska Poreba",
	"Bochnia",
	"Golub-Dobrzyn",
	"Chojnice",
	"Ostrowiec",
	"Otwock",
	"Wolsztyn"
};

static const char *name_polish_2_m[] = {
	"Jarocin",
	"Gogolin",
	"Tomaszow",
	"Piotrkow",
	"Lidzbark",
	"Rypin",
	"Radzymin",
	"Wolomin",
	"Pruszkow",
	"Olsztynek",
	"Rypin",
	"Cisek",
	"Krotoszyn",
	"Stoczek",
	"Lubin",
	"Lubicz",
	"Milicz",
	"Targ",
	"Ostrow",
	"Ozimek",
	"Puck",
	"Rzepin",
	"Siewierz",
	"Stargard",
	"Starogard",
	"Turek",
	"Tymbark",
	"Wolsztyn",
	"Strzepcz",
	"Strzebielin",
	"Sochaczew",
	"Grebocin",
	"Gniew",
	"Lubliniec",
	"Lubasz",
	"Lutomiersk",
	"Niemodlin",
	"Przeworsk",
	"Ursus",
	"Tyczyn",
	"Sztum",
	"Szczebrzeszyn",
	"Wolin",
	"Wrzeszcz",
	"Zgierz",
	"Zieleniec",
	"Drobin",
	"Garwolin"
};

static const char *name_polish_2_f[] = {
	"Szprotawa",
	"Pogorzelica",
	"Motlawa",
	"Lubawa",
	"Nidzica",
	"Kruszwica",
	"Bierawa",
	"Brodnica",
	"Chojna",
	"Krzepica",
	"Ruda",
	"Rumia",
	"Tuchola",
	"Trzebinia",
	"Ustka",
	"Warszawa",
	"Bobowa",
	"Dukla",
	"Krynica",
	"Murowana",
	"Niemcza",
	"Zaspa",
	"Zawoja",
	"Wola",
	"Limanowa",
	"Rabka",
	"Skawina",
	"Pilawa"
};

static const char *name_polish_2_n[] = {
	"Lipsko",
	"Pilzno",
	"Przodkowo",
	"Strzelno",
	"Susz",
	"Jaworzno",
	"Choszczno",
	"Mogilno",
	"Luzino",
	"Miasto",
	"Dziadowo",
	"Kowalewo",
	"Legionowo",
	"Miastko",
	"Zabrze",
	"Zawiercie",
	"Kochanowo",
	"Miechucino",
	"Mirachowo",
	"Robakowo",
	"Kosakowo",
	"Borne",
	"Braniewo",
	"Sulinowo",
	"Chmielno",
	"Jastrzebie",
	"Gryfino",
	"Koronowo",
	"Lubichowo",
	"Opoczno"
};

static const char *name_polish_3_m[] = {
	" Wybudowanie",
	" Swietokrzyski",
	" Gorski",
	" Morski",
	" Zdroj",
	" Wody",
	" Bajoro",
	" Krajenski",
	" Slaski",
	" Mazowiecki",
	" Pomorski",
	" Wielki",
	" Maly",
	" Warminski",
	" Mazurski",
	" Mniejszy",
	" Wiekszy",
	" Gorny",
	" Dolny",
	" Wielki",
	" Stary",
	" Nowy",
	" Wielkopolski",
	" Wzgorze",
	" Mosty",
	" Kujawski",
	" Malopolski",
	" Podlaski",
	" Lesny"
};

static const char *name_polish_3_f[] = {
	" Wybudowanie",
	" Swietokrzyska",
	" Gorska",
	" Morska",
	" Zdroj",
	" Woda",
	" Bajoro",
	" Krajenska",
	" Slaska",
	" Mazowiecka",
	" Pomorska",
	" Wielka",
	" Mala",
	" Warminska",
	" Mazurska",
	" Mniejsza",
	" Wieksza",
	" Gorna",
	" Dolna",
	" Wielka",
	" Stara",
	" Nowa",
	" Wielkopolska",
	" Wzgorza",
	" Mosty",
	" Kujawska",
	" Malopolska",
	" Podlaska",
	" Lesna"
};

static const char *name_polish_3_n[] = {
	" Wybudowanie",
	" Swietokrzyskie",
	" Gorskie",
	" Morskie",
	" Zdroj",
	" Wody",
	" Bajoro",
	" Krajenskie",
	" Slaskie",
	" Mazowieckie",
	" Pomorskie",
	" Wielkie",
	" Male",
	" Warminskie ",
	" Mazurskie ",
	" Mniejsze",
	" Wieksze",
	" Gorne",
	" Dolne",
	" Wielkie",
	" Stare",
	" Nowe",
	" Wielkopolskie",
	" Wzgorze",
	" Mosty",
	" Kujawskie",
	" Malopolskie",
	" Podlaskie",
	" Lesne"
};

static const char *name_czech_1[] = {
	"As",
	"Benesov",
	"Beroun",
	"Bezdruzice",
	"Blansko",
	"Breclav",
	"Brno",
	"Brunt�l",
	"Cesk� L�pa",
	"Cesk� Budejovice",
	"Cesk� Krumlov",
	"Dec�n",
	"Domazlice",
	"Dub�",
	"Fr�dek-M�stek",
	"Havl�ckuv Brod",
	"Hodon�n",
	"Hradec Kr�lov�",
	"Humpolec",
	"Cheb",
	"Chomutov",
	"Chrudim",
	"Jablonec nad Nisou",
	"Jesen�k",
	"Jic�n",
	"Jihlava",
	"Jindrichuv Hradec",
	"Karlovy Vary",
	"Karvin�",
	"Kladno",
	"Klatovy",
	"Kol�n",
	"Kosmonosy",
	"Kromer�z",
	"Kutn� Hora",
	"Liberec",
	"Litomerice",
	"Louny",
	"Manet�n",
	"Meln�k",
	"Mlad� Boleslav",
	"Most",
	"N�chod",
	"Nov� Jic�n",
	"Nymburk",
	"Olomouc",
	"Opava",
	"Or�cov",
	"Ostrava",
	"Pardubice",
	"Pelhrimov",
	"Polzice",
	"P�sek",
	"Plzen",
	"Praha",
	"Prachatice",
	"Prerov",
	"Pr�bram",
	"Prostejov",
	"Rakovn�k",
	"Rokycany",
	"Rudn�",
	"Rychnov nad Kneznou",
	"Semily",
	"Sokolov",
	"Strakonice",
	"Stredokluky",
	"Sumperk",
	"Svitavy",
	"T�bor",
	"Tachov",
	"Teplice",
	"Treb�c",
	"Trutnov",
	"Uhersk� Hradiste",
	"�st� nad Labem",
	"�st� nad Orlic�",
	"Vset�n",
	"Vyskov",
	"Zd�r nad S�zavou",
	"Zl�n",
	"Znojmo"
};

static const char *name_romanian_1[]= {
	"Adjud",
	"Alba Iulia",
	"Alexandria",
	"Babadag",
	"Bac�u",
	"Baia Mare",
	"B�ile Herculane",
	"B�ilesti",
	"B�rlad",
	"Bicaz",
	"Bistrita",
	"Blaj",
	"Borsec",
	"Botosani",
	"Br�ila",
	"Brasov",
	"Bucuresti",
	"Buftea",
	"Buz�u",
	"C�l�rasi",
	"Caransebes",
	"Cernavod�",
	"Cluj-Napoca",
	"Constanta",
	"Covasna",
	"Craiova",
	"Dej",
	"Deva",
	"Dorohoi",
	"Dr.-Tr. Severin",
	"Dr�g�sani",
	"F�g�ras",
	"F�lticeni",
	"Fetesti",
	"Focsani",
	"Galati",
	"Gheorgheni",
	"Giurgiu",
	"H�rsova",
	"Hunedoara",
	"Husi",
	"Iasi",
	"Isaccea",
	"Lugoj",
	"M�cin",
	"Mangalia",
	"Medgidia",
	"Medias",
	"Miercurea Ciuc",
	"Mizil",
	"Motru",
	"N�s�ud",
	"N�vodari",
	"Odobesti",
	"Oltenita",
	"Onesti",
	"Oradea",
	"Orsova",
	"Petrosani",
	"Piatra Neamt",
	"Pitesti",
	"Ploiesti",
	"Predeal",
	"R�mnicu V�lcea",
	"Reghin",
	"Resita",
	"Roman",
	"Rosiorii de Vede",
	"Satu Mare",
	"Sebes",
	"Sf�ntu Gheorghe",
	"Sibiu",
	"Sighisoara",
	"Sinaia",
	"Slatina",
	"Slobozia",
	"Sovata",
	"Suceava",
	"Sulina",
	"T�nd�rei",
	"T�rgoviste",
	"T�rgu Jiu",
	"T�rgu Mures",
	"Tecuci",
	"Timisoara",
	"Tulcea",
	"Turda",
	"Turnu M�gurele",
	"Urziceni",
	"Vaslui",
	"Vatra Dornei",
	"Victoria",
	"Videle",
	"Zal�u"
};

static const char *name_slovakish_1[] = {
	"Bratislava",
	"Banovce nad Bebravou",
	"Banska Bystrica",
	"Banska Stiavnica",
	"Bardejov",
	"Brezno",
	"Brezova pod Bradlom",
	"Bytca",
	"Cadca",
	"Cierna nad Tisou",
	"Detva",
	"Detva",
	"Dolny Kubin",
	"Dolny Kubin",
	"Dunajska Streda",
	"Gabcikovo",
	"Galanta",
	"Gbely",
	"Gelnica",
	"Handlova",
	"Hlohovec",
	"Holic",
	"Humenne",
	"Hurbanovo",
	"Kezmarok",
	"Komarno",
	"Kosice",
	"Kremnica",
	"Krompachy",
	"Kuty",
	"Leopoldov",
	"Levoca",
	"Liptovsky Mikulas",
	"Lucenec",
	"Malacky",
	"Martin",
	"Medzilaborce",
	"Michalovce",
	"Modra",
	"Myjava",
	"Namestovo",
	"Nitra",
	"Nova Bana",
	"Nove Mesto nad Vahom",
	"Nove Zamky",
	"Partizanske",
	"Pezinok",
	"Piestany",
	"Poltar",
	"Poprad",
	"Povazska Bystrica",
	"Prievidza",
	"Puchov",
	"Revuca",
	"Rimavska Sobota",
	"Roznava",
	"Ruzomberok",
	"Sabinov",
	"Sala",
	"Senec",
	"Senica",
	"Sered",
	"Skalica",
	"Sladkovicovo",
	"Smolenice",
	"Snina",
	"Stara Lubovna",
	"Stara Tura",
	"Strazske",
	"Stropkov",
	"Stupava",
	"Sturovo",
	"Sulekovo",
	"Topolcany",
	"Trebisov",
	"Trencin",
	"Trnava",
	"Turcianske Teplice",
	"Tvrdosin",
	"Vrable",
	"Vranov nad Toplov",
	"Zahorska Bystrica",
	"Zdiar",
	"Ziar nad Hronom",
	"Zilina",
	"Zlate Moravce",
	"Zvolen"
};

static const char *name_hungarian_1[] = {
	"Nagy-",
	"Kis-",
	"Fels�-",
	"Als�-",
	"�j-"
};

static const char *name_hungarian_2[] = {
	"Bodrog",
	"Dr�va",
	"Duna",
	"Hej�",
	"Hern�d",
	"R�ba",
	"Saj�",
	"Szamos",
	"Tisza",
	"Zala",
	"Balaton",
	"Fert�",
	"Bakony",
	"Cserh�t",
	"Bihar",
	"Hajd�",
	"J�sz",
	"Kun",
	"Magyar",
	"N�gr�d",
	"Ny�r",
	"Somogy",
	"Sz�kely",
	"Buda",
	"Gy�r",
	"Pest",
	"Feh�r",
	"Cser�p",
	"Erd�",
	"Hegy",
	"Homok",
	"Mez�",
	"Puszta",
	"S�r",
	"Cs�sz�r",
	"Herceg",
	"Kir�ly",
	"Nemes",
	"P�sp�k",
	"Szent",
	"Alm�s",
	"Szilv�s",
	"Agg",
	"Aranyos",
	"B�k�s",
	"Egyh�zas",
	"Gagy",
	"Heves",
	"Kapos",
	"T�pi�",
	"Torna",
	"Vas",
	"V�mos",
	"V�s�ros"
};

static const char *name_hungarian_3[] = {
	"ap�ti",
	"b�ba",
	"bikk",
	"dob",
	"fa",
	"f�ld",
	"hegyes",
	"kak",
	"kereszt",
	"k�rt",
	"lad�ny",
	"m�rges",
	"szalonta",
	"telek",
	"vas",
	"v�lgy"
};

static const char *name_hungarian_4[] = {
	"alja",
	"egyh�za",
	"h�za",
	"�r",
	"v�r"
};

static const char *name_hungarian_real[] = {
	"Ajka",
	"Asz�d",
	"Badacsony",
	"Baja",
	"Budapest",
	"Debrecen",
	"Eger",
	"Fony�d",
	"G�d�ll�",
	"Gy�r",
	"Gyula",
	"Karcag",
	"Kecskem�t",
	"Keszthely",
	"Kisk�re",
	"Kocsord",
	"Kom�rom",
	"K�szeg",
	"Mak�",
	"Moh�cs",
	"Miskolc",
	"�zd",
	"Paks",
	"P�pa",
	"P�cs",
	"Polg�r",
	"Sarkad",
	"Si�fok",
	"Szeged",
	"Szentes",
	"Szolnok",
	"Tihany",
	"Tokaj",
	"V�c",
	"Z�hony",
	"Zirc"
};
