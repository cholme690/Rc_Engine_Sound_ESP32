const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 5589;
const signed char revSamples[] = {//0
0, 0, 0, 0, 1, 2, 3, 3, 4, 5, 5, 6, 6, 6, 6, 7, //16
8, 9, 10, 11, 12, 13, 13, 13, 13, 13, 14, 15, 17, 20, 22, 24, //32
25, 25, 24, 24, 23, 24, 25, 25, 28, 29, 28, 27, 25, 22, 19, 16, //48
15, 15, 15, 17, 19, 21, 24, 25, 28, 31, 33, 34, 35, 38, 39, 41, //64
43, 45, 47, 48, 49, 49, 48, 47, 45, 43, 42, 43, 45, 47, 50, 52, //80
55, 57, 58, 59, 62, 67, 71, 75, 79, 82, 84, 85, 86, 86, 87, 87, //96
87, 86, 85, 84, 82, 79, 75, 72, 70, 69, 68, 68, 69, 70, 72, 74, //112
75, 77, 77, 78, 78, 79, 80, 83, 86, 89, 91, 92, 93, 93, 93, 92, //128
92, 92, 91, 92, 93, 94, 96, 98, 102, 105, 107, 110, 113, 115, 119, 122, //144
124, 126, 127, 126, 124, 122, 118, 114, 111, 105, 102, 99, 95, 91, 88, 83, //160
80, 77, 76, 74, 74, 75, 77, 78, 79, 81, 85, 87, 89, 91, 92, 94, //176
95, 95, 94, 93, 92, 90, 88, 87, 86, 85, 85, 85, 86, 87, 89, 90, //192
91, 92, 93, 93, 94, 94, 94, 94, 93, 92, 91, 90, 89, 87, 85, 84, //208
83, 80, 77, 76, 75, 73, 72, 70, 68, 67, 66, 64, 63, 63, 62, 62, //224
62, 60, 58, 57, 57, 57, 57, 58, 59, 59, 58, 57, 56, 55, 55, 55, //240
56, 57, 57, 57, 55, 54, 53, 51, 49, 48, 47, 46, 46, 46, 45, 45, //256
43, 41, 39, 36, 33, 29, 27, 27, 27, 28, 27, 26, 24, 21, 20, 18, //272
19, 22, 25, 29, 33, 36, 38, 39, 39, 38, 38, 38, 39, 40, 41, 42, //288
44, 46, 46, 46, 46, 44, 41, 39, 38, 38, 39, 40, 41, 43, 44, 45, //304
45, 45, 41, 38, 35, 31, 28, 23, 20, 18, 16, 15, 13, 9, 6, 3, //320
-1, -4, -6, -7, -7, -6, -6, -5, -5, -4, -4, -3, -2, -1, 2, 3, //336
4, 4, 4, 4, 2, 2, 2, 2, 2, 4, 3, 3, 2, 0, -3, -6, //352
-8, -10, -11, -13, -16, -20, -22, -24, -26, -26, -25, -24, -23, -22, -22, -23, //368
-24, -25, -25, -24, -24, -23, -21, -20, -20, -20, -20, -20, -19, -17, -15, -12, //384
-9, -5, -3, -1, 1, 2, 2, 2, 2, 1, 0, -2, -5, -8, -11, -15, //400
-19, -24, -31, -35, -40, -45, -49, -52, -57, -59, -60, -60, -60, -58, -57, -57, //416
-58, -59, -61, -62, -62, -61, -60, -58, -56, -55, -55, -56, -57, -59, -60, -59, //432
-58, -55, -52, -48, -43, -40, -38, -37, -36, -36, -35, -34, -33, -32, -32, -33, //448
-34, -36, -38, -39, -42, -45, -46, -47, -48, -49, -50, -51, -51, -51, -50, -49, //464
-48, -46, -44, -43, -41, -41, -39, -39, -40, -40, -40, -43, -44, -46, -47, -48, //480
-49, -50, -50, -50, -51, -51, -51, -53, -53, -54, -54, -52, -51, -50, -49, -48, //496
-47, -47, -48, -49, -51, -53, -54, -56, -57, -57, -57, -56, -55, -55, -55, -56, //512
-56, -55, -54, -50, -48, -47, -45, -43, -43, -43, -42, -41, -39, -36, -33, -30, //528
-29, -29, -30, -31, -33, -35, -37, -39, -40, -41, -42, -42, -42, -42, -43, -44, //544
-46, -48, -49, -50, -51, -51, -52, -52, -53, -55, -57, -59, -60, -61, -61, -59, //560
-58, -58, -57, -57, -57, -57, -56, -56, -56, -55, -55, -55, -53, -51, -49, -48, //576
-46, -45, -44, -44, -44, -44, -44, -41, -40, -39, -37, -38, -39, -41, -43, -45, //592
-47, -50, -54, -57, -60, -63, -67, -71, -76, -78, -80, -81, -81, -80, -80, -79, //608
-79, -79, -79, -79, -79, -78, -77, -76, -74, -71, -69, -67, -66, -66, -65, -65, //624
-64, -63, -60, -57, -52, -48, -46, -43, -41, -39, -38, -37, -36, -35, -33, -31, //640
-30, -30, -29, -29, -30, -30, -30, -30, -31, -32, -33, -35, -38, -41, -45, -48, //656
-54, -58, -61, -63, -66, -69, -73, -76, -79, -82, -85, -87, -89, -88, -87, -85, //672
-82, -77, -74, -72, -68, -65, -62, -57, -53, -49, -45, -40, -37, -33, -30, -28, //688
-27, -25, -22, -21, -20, -19, -18, -18, -17, -17, -16, -15, -13, -12, -9, -8, //704
-7, -6, -6, -8, -10, -12, -15, -19, -22, -26, -28, -29, -30, -31, -31, -32, //720
-32, -33, -33, -32, -31, -29, -27, -23, -19, -15, -9, -5, -1, 3, 6, 9, //736
10, 11, 11, 12, 12, 12, 12, 12, 11, 10, 9, 7, 6, 5, 4, 4, //752
4, 4, 4, 5, 5, 5, 7, 7, 7, 6, 5, 4, 1, -1, -2, -2, //768
-2, -3, -3, -4, -5, -6, -8, -12, -14, -16, -19, -20, -21, -20, -18, -16, //784
-15, -12, -9, -7, -5, -4, -2, 1, 4, 7, 9, 10, 12, 12, 15, 17, //800
19, 20, 23, 27, 29, 31, 32, 33, 33, 33, 32, 31, 30, 28, 27, 25, //816
24, 23, 22, 21, 17, 13, 10, 5, 1, -2, -7, -10, -12, -14, -17, -20, //832
-26, -29, -31, -34, -36, -38, -39, -39, -38, -37, -36, -32, -29, -26, -22, -19, //848
-14, -7, -3, 2, 7, 12, 19, 23, 26, 29, 32, 34, 37, 39, 40, 40, //864
39, 38, 37, 35, 34, 33, 31, 29, 28, 26, 25, 24, 23, 23, 23, 23, //880
23, 22, 21, 20, 18, 17, 16, 15, 15, 15, 15, 15, 15, 15, 16, 17, //896
19, 20, 23, 28, 32, 35, 38, 42, 45, 48, 50, 51, 52, 53, 54, 55, //912
55, 54, 53, 52, 49, 46, 43, 41, 40, 39, 39, 39, 40, 40, 41, 42, //928
43, 44, 45, 46, 48, 50, 52, 53, 55, 55, 56, 56, 56, 56, 55, 54, //944
54, 51, 50, 49, 46, 45, 43, 42, 41, 40, 39, 39, 38, 37, 36, 35, //960
35, 34, 35, 35, 35, 36, 37, 37, 38, 38, 38, 38, 39, 40, 42, 44, //976
47, 51, 54, 58, 60, 62, 63, 63, 64, 66, 67, 68, 70, 71, 71, 70, //992
69, 69, 67, 65, 63, 61, 60, 58, 56, 51, 48, 44, 40, 36, 31, 27, //1008
24, 22, 19, 17, 15, 13, 12, 11, 10, 10, 10, 10, 10, 10, 11, 12, //1024
13, 15, 17, 18, 20, 22, 24, 25, 26, 29, 32, 36, 38, 40, 42, 43, //1040
44, 44, 44, 45, 46, 46, 46, 46, 45, 42, 39, 36, 32, 29, 27, 26, //1056
26, 26, 26, 26, 25, 24, 23, 22, 21, 20, 19, 19, 18, 18, 17, 16, //1072
16, 16, 16, 19, 20, 22, 23, 24, 25, 25, 26, 28, 29, 32, 35, 37, //1088
37, 36, 35, 33, 30, 29, 29, 30, 32, 34, 35, 36, 37, 37, 38, 38, //1104
37, 36, 35, 33, 31, 27, 25, 24, 22, 20, 17, 16, 14, 13, 12, 12, //1120
12, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 15, 15, //1136
15, 17, 17, 18, 19, 19, 21, 23, 25, 27, 28, 28, 28, 26, 24, 23, //1152
20, 18, 14, 11, 9, 6, 4, 1, -1, -2, -3, -3, -4, -5, -7, -8, //1168
-9, -10, -10, -10, -9, -8, -8, -9, -10, -12, -13, -14, -14, -13, -13, -12, //1184
-12, -13, -14, -16, -19, -22, -24, -25, -27, -27, -27, -26, -24, -23, -22, -21, //1200
-21, -22, -23, -24, -26, -29, -31, -33, -34, -36, -40, -42, -44, -45, -46, -48, //1216
-49, -50, -50, -50, -50, -50, -50, -50, -50, -51, -51, -52, -52, -53, -53, -54, //1232
-54, -55, -56, -57, -58, -59, -61, -64, -66, -68, -70, -71, -71, -70, -69, -68, //1248
-66, -64, -61, -60, -58, -57, -57, -55, -54, -53, -53, -53, -53, -54, -55, -56, //1264
-57, -58, -59, -61, -63, -65, -68, -72, -75, -78, -80, -81, -82, -82, -80, -78, //1280
-76, -75, -73, -73, -71, -71, -72, -73, -75, -77, -81, -83, -85, -88, -89, -92, //1296
-92, -92, -92, -90, -88, -86, -84, -83, -82, -80, -80, -77, -76, -75, -73, -73, //1312
-71, -71, -71, -71, -71, -72, -72, -72, -72, -71, -70, -69, -67, -65, -64, -62, //1328
-60, -57, -55, -53, -52, -51, -49, -48, -48, -47, -46, -45, -42, -39, -37, -36, //1344
-34, -34, -34, -35, -37, -38, -38, -38, -38, -37, -37, -37, -38, -39, -41, -42, //1360
-43, -43, -44, -44, -44, -45, -45, -45, -45, -42, -40, -38, -37, -36, -36, -37, //1376
-37, -37, -37, -35, -31, -27, -23, -19, -16, -14, -11, -10, -9, -9, -9, -8, //1392
-8, -9, -9, -9, -11, -13, -15, -16, -16, -16, -16, -14, -13, -12, -11, -11, //1408
-10, -10, -9, -6, -2, 1, 7, 11, 14, 17, 19, 21, 24, 26, 28, 29, //1424
31, 32, 33, 32, 32, 31, 31, 30, 29, 28, 27, 25, 22, 19, 17, 15, //1440
14, 14, 14, 14, 15, 15, 15, 16, 16, 17, 18, 19, 20, 23, 27, 31, //1456
35, 38, 41, 45, 46, 48, 50, 51, 54, 59, 62, 64, 65, 67, 68, 70, //1472
72, 74, 77, 81, 84, 86, 86, 86, 85, 83, 82, 81, 81, 80, 80, 77, //1488
76, 74, 73, 72, 72, 75, 78, 81, 85, 89, 93, 99, 101, 103, 105, 106, //1504
107, 109, 111, 112, 113, 113, 112, 110, 107, 105, 103, 100, 97, 95, 92, 90, //1520
88, 86, 86, 86, 87, 88, 88, 87, 84, 82, 80, 77, 75, 74, 73, 72, //1536
70, 67, 62, 58, 55, 52, 51, 50, 51, 51, 52, 52, 51, 51, 51, 52, //1552
54, 56, 59, 65, 69, 72, 74, 77, 78, 79, 79, 80, 81, 82, 82, 81, //1568
79, 75, 71, 66, 60, 57, 56, 56, 57, 58, 59, 59, 59, 59, 60, 61, //1584
63, 66, 68, 69, 71, 72, 72, 72, 71, 69, 69, 66, 65, 65, 65, 66, //1600
68, 72, 75, 78, 82, 85, 88, 90, 92, 92, 93, 93, 93, 93, 92, 92, //1616
92, 90, 88, 86, 84, 80, 77, 71, 68, 66, 63, 61, 60, 60, 60, 60, //1632
59, 58, 56, 53, 51, 50, 48, 46, 46, 45, 44, 44, 43, 41, 39, 38, //1648
37, 35, 35, 35, 35, 36, 36, 36, 36, 34, 33, 33, 33, 34, 36, 40, //1664
42, 44, 46, 47, 47, 47, 47, 47, 47, 48, 48, 47, 46, 45, 44, 44, //1680
45, 48, 50, 54, 57, 60, 62, 63, 62, 62, 62, 61, 61, 60, 59, 58, //1696
55, 51, 48, 43, 38, 35, 28, 24, 21, 17, 13, 10, 5, 2, 0, -3, //1712
-4, -5, -5, -6, -7, -10, -13, -18, -22, -25, -27, -27, -26, -26, -25, -25, //1728
-25, -25, -25, -25, -23, -21, -20, -18, -15, -15, -14, -14, -14, -14, -13, -11, //1744
-9, -8, -7, -6, -5, -5, -5, -4, -3, -2, -2, -1, -1, -2, -2, -3, //1760
-4, -5, -5, -5, -6, -7, -9, -11, -14, -17, -21, -23, -24, -25, -25, -25, //1776
-27, -29, -31, -34, -37, -40, -42, -43, -43, -44, -45, -46, -48, -49, -50, -52, //1792
-54, -54, -55, -55, -55, -56, -58, -60, -62, -63, -66, -68, -69, -70, -70, -70, //1808
-70, -71, -71, -72, -72, -72, -72, -71, -71, -70, -69, -68, -67, -66, -65, -63, //1824
-62, -61, -59, -56, -54, -53, -50, -48, -44, -42, -40, -38, -37, -36, -36, -35, //1840
-34, -33, -31, -31, -29, -29, -29, -29, -28, -28, -27, -26, -25, -25, -25, -25, //1856
-26, -28, -29, -30, -32, -36, -39, -41, -45, -49, -54, -59, -62, -67, -71, -74, //1872
-80, -83, -85, -88, -90, -92, -94, -95, -95, -95, -95, -94, -94, -94, -94, -94, //1888
-94, -93, -91, -90, -87, -84, -82, -76, -73, -71, -68, -65, -62, -60, -58, -57, //1904
-55, -54, -52, -51, -50, -49, -49, -46, -45, -43, -42, -42, -42, -42, -43, -44, //1920
-44, -45, -46, -47, -47, -48, -49, -49, -49, -49, -47, -46, -45, -43, -40, -39, //1936
-38, -38, -37, -37, -37, -37, -38, -38, -39, -40, -41, -41, -42, -42, -42, -43, //1952
-45, -47, -48, -51, -53, -56, -57, -57, -57, -57, -57, -57, -58, -58, -58, -59, //1968
-58, -58, -57, -56, -56, -54, -54, -53, -53, -53, -53, -50, -48, -46, -44, -41, //1984
-39, -37, -36, -36, -36, -35, -34, -33, -31, -30, -29, -28, -28, -29, -30, -31, //2000
-31, -32, -32, -32, -32, -32, -32, -32, -31, -30, -30, -29, -28, -27, -27, -26, //2016
-26, -25, -25, -25, -26, -27, -28, -29, -30, -31, -32, -32, -32, -32, -31, -31, //2032
-30, -29, -28, -27, -26, -26, -25, -25, -24, -24, -25, -26, -27, -28, -29, -32, //2048
-35, -37, -39, -42, -44, -47, -49, -51, -51, -51, -51, -50, -49, -48, -47, -46, //2064
-42, -39, -37, -33, -30, -28, -26, -26, -26, -27, -28, -29, -29, -28, -27, -26, //2080
-25, -24, -23, -22, -21, -20, -19, -15, -13, -11, -9, -7, -6, -6, -6, -7, //2096
-8, -10, -11, -11, -12, -13, -14, -15, -17, -18, -20, -21, -21, -21, -21, -21, //2112
-21, -21, -22, -22, -22, -22, -22, -22, -22, -23, -24, -25, -28, -31, -34, -37, //2128
-38, -39, -40, -40, -41, -41, -41, -40, -40, -38, -33, -31, -28, -26, -24, -21, //2144
-20, -18, -17, -14, -11, -7, -4, -3, -2, -2, -3, -3, -3, -2, -1, 1, //2160
5, 7, 9, 10, 10, 10, 8, 8, 8, 8, 9, 9, 9, 8, 6, 3, //2176
0, -3, -4, -4, -3, -1, 1, 2, 3, 3, 2, 2, 2, 5, 6, 7, //2192
9, 10, 10, 9, 9, 9, 9, 11, 14, 17, 19, 20, 22, 23, 23, 23, //2208
24, 24, 25, 28, 30, 32, 33, 33, 33, 31, 30, 30, 30, 30, 31, 32, //2224
33, 33, 33, 34, 34, 36, 38, 39, 41, 43, 44, 45, 45, 45, 44, 44, //2240
44, 43, 43, 43, 43, 44, 45, 47, 48, 49, 49, 50, 50, 51, 52, 53, //2256
54, 54, 54, 54, 55, 55, 56, 56, 56, 55, 55, 52, 49, 47, 45, 44, //2272
43, 42, 40, 38, 35, 32, 30, 27, 25, 25, 25, 25, 26, 27, 29, 31, //2288
33, 35, 38, 39, 40, 40, 40, 40, 40, 40, 39, 38, 37, 35, 31, 29, //2304
28, 26, 24, 23, 23, 23, 23, 24, 26, 31, 34, 36, 39, 41, 42, 43, //2320
44, 45, 46, 48, 49, 49, 48, 47, 46, 44, 41, 39, 38, 37, 35, 33, //2336
33, 33, 34, 35, 36, 35, 34, 33, 30, 29, 28, 28, 29, 30, 31, 32, //2352
32, 33, 33, 34, 35, 37, 40, 42, 43, 43, 43, 43, 40, 39, 38, 36, //2368
36, 36, 37, 37, 37, 37, 35, 32, 30, 29, 29, 30, 31, 36, 39, 41, //2384
44, 46, 47, 47, 48, 49, 50, 51, 52, 52, 51, 50, 48, 46, 43, 42, //2400
41, 41, 41, 40, 39, 37, 36, 33, 31, 29, 28, 29, 30, 31, 33, 36, //2416
38, 40, 41, 43, 46, 48, 50, 51, 51, 51, 47, 44, 41, 37, 34, 31, //2432
27, 25, 22, 21, 20, 17, 16, 15, 15, 15, 16, 19, 22, 24, 27, 30, //2448
33, 36, 38, 39, 40, 41, 42, 42, 42, 42, 41, 41, 41, 41, 42, 45, //2464
46, 48, 52, 54, 56, 59, 60, 63, 64, 66, 67, 67, 67, 66, 66, 65, //2480
63, 62, 60, 56, 53, 52, 49, 46, 43, 42, 41, 40, 40, 40, 39, 39, //2496
39, 38, 37, 36, 35, 33, 32, 31, 30, 29, 28, 27, 27, 26, 26, 27, //2512
28, 30, 31, 33, 34, 34, 34, 33, 32, 32, 30, 30, 29, 29, 29, 27, //2528
27, 26, 26, 25, 25, 24, 23, 21, 20, 19, 16, 13, 11, 9, 6, 5, //2544
3, 0, -2, -4, -5, -6, -9, -10, -12, -13, -14, -15, -16, -18, -20, -22, //2560
-23, -24, -26, -27, -28, -29, -30, -34, -36, -38, -41, -42, -44, -44, -44, -43, //2576
-42, -41, -40, -40, -40, -40, -39, -39, -38, -37, -36, -36, -36, -37, -38, -39, //2592
-41, -42, -43, -45, -47, -49, -51, -52, -54, -57, -59, -60, -61, -61, -62, -63, //2608
-64, -65, -66, -67, -68, -68, -67, -66, -65, -63, -62, -62, -62, -61, -61, -61, //2624
-59, -57, -54, -52, -50, -49, -47, -47, -48, -49, -50, -51, -52, -52, -52, -52, //2640
-51, -51, -51, -51, -51, -51, -51, -50, -49, -49, -49, -50, -51, -54, -57, -59, //2656
-63, -66, -70, -73, -75, -76, -76, -75, -74, -72, -71, -70, -68, -68, -67, -67, //2672
-66, -65, -64, -62, -61, -60, -60, -60, -61, -61, -62, -62, -61, -61, -61, -62, //2688
-62, -63, -64, -65, -66, -67, -68, -68, -68, -68, -68, -68, -68, -67, -66, -65, //2704
-64, -63, -62, -60, -59, -57, -57, -57, -58, -59, -59, -59, -59, -58, -58, -58, //2720
-58, -58, -59, -59, -58, -57, -53, -51, -49, -46, -46, -45, -46, -47, -47, -48, //2736
-48, -47, -46, -45, -44, -43, -43, -40, -40, -39, -39, -39, -39, -39, -39, -39, //2752
-39, -38, -38, -37, -37, -36, -36, -36, -35, -35, -35, -35, -35, -35, -34, -32, //2768
-31, -29, -27, -26, -27, -27, -28, -29, -28, -28, -26, -25, -24, -23, -22, -22, //2784
-21, -20, -18, -15, -11, -8, -6, -4, -2, 0, 0, 1, 2, 3, 4, 7, //2800
9, 11, 15, 18, 21, 25, 28, 30, 31, 33, 36, 37, 37, 37, 36, 36, //2816
35, 35, 35, 35, 36, 37, 37, 38, 37, 37, 37, 36, 37, 38, 39, 41, //2832
44, 48, 50, 52, 54, 55, 55, 55, 55, 55, 54, 53, 52, 51, 50, 49, //2848
48, 47, 46, 45, 43, 42, 40, 38, 36, 35, 35, 35, 34, 34, 33, 33, //2864
33, 33, 35, 38, 40, 42, 43, 43, 43, 41, 40, 39, 37, 37, 37, 37, //2880
39, 41, 42, 44, 48, 50, 52, 55, 58, 61, 66, 69, 71, 72, 74, 73, //2896
72, 71, 70, 68, 66, 62, 58, 53, 48, 42, 37, 29, 26, 23, 22, 22, //2912
24, 26, 28, 30, 34, 37, 42, 45, 48, 49, 51, 51, 51, 51, 50, 49, //2928
48, 47, 44, 42, 40, 37, 34, 29, 26, 24, 23, 23, 24, 26, 29, 31, //2944
33, 36, 39, 42, 44, 45, 47, 50, 52, 53, 54, 54, 53, 53, 52, 52, //2960
52, 53, 53, 54, 56, 58, 59, 62, 65, 69, 72, 75, 76, 77, 78, 79, //2976
80, 81, 82, 83, 85, 85, 85, 85, 85, 83, 82, 81, 80, 80, 80, 78, //2992
76, 75, 74, 71, 69, 66, 64, 63, 62, 61, 60, 60, 60, 60, 60, 60, //3008
59, 58, 56, 55, 52, 49, 45, 42, 41, 40, 40, 40, 41, 42, 43, 43, //3024
43, 41, 41, 40, 41, 42, 43, 45, 46, 46, 46, 45, 45, 45, 45, 45, //3040
45, 45, 42, 39, 37, 36, 36, 36, 40, 43, 46, 50, 53, 56, 59, 61, //3056
63, 64, 65, 66, 67, 67, 68, 68, 68, 67, 67, 66, 65, 65, 65, 63, //3072
62, 61, 58, 55, 48, 44, 42, 39, 38, 38, 38, 38, 37, 36, 33, 29, //3088
26, 24, 23, 20, 18, 15, 12, 10, 8, 5, 3, -1, -3, -4, -6, -8, //3104
-10, -11, -11, -11, -11, -11, -10, -8, -6, -2, 2, 6, 13, 16, 18, 19, //3120
19, 19, 19, 18, 18, 18, 16, 14, 12, 10, 9, 6, 4, 0, -3, -5, //3136
-8, -11, -17, -22, -26, -31, -35, -38, -41, -41, -40, -39, -38, -37, -37, -38, //3152
-40, -40, -40, -39, -37, -35, -31, -28, -25, -21, -20, -19, -19, -19, -20, -22, //3168
-24, -27, -29, -32, -37, -40, -42, -45, -49, -52, -56, -59, -61, -64, -66, -69, //3184
-72, -73, -74, -74, -74, -72, -71, -70, -70, -69, -69, -69, -69, -70, -71, -72, //3200
-74, -79, -82, -84, -87, -88, -87, -84, -81, -77, -71, -66, -58, -54, -51, -48, //3216
-45, -43, -40, -37, -35, -34, -32, -31, -31, -32, -34, -35, -37, -41, -44, -47, //3232
-50, -53, -58, -60, -61, -60, -59, -58, -54, -51, -49, -47, -44, -42, -40, -40, //3248
-41, -42, -43, -46, -47, -49, -50, -51, -53, -56, -58, -60, -63, -65, -67, -70, //3264
-72, -73, -73, -73, -70, -67, -64, -61, -58, -56, -54, -53, -53, -54, -54, -53, //3280
-53, -53, -53, -53, -53, -52, -51, -51, -50, -49, -49, -50, -51, -52, -53, -54, //3296
-54, -54, -54, -53, -52, -51, -47, -44, -42, -39, -36, -33, -31, -29, -28, -27, //3312
-26, -24, -22, -21, -20, -19, -19, -20, -20, -20, -21, -22, -22, -24, -25, -26, //3328
-29, -31, -33, -36, -38, -39, -40, -42, -43, -44, -46, -48, -49, -51, -53, -54, //3344
-55, -55, -55, -55, -54, -53, -52, -50, -47, -43, -39, -37, -33, -29, -26, -21, //3360
-19, -17, -15, -15, -13, -13, -13, -13, -14, -15, -17, -20, -22, -27, -31, -36, //3376
-42, -45, -47, -48, -50, -50, -50, -50, -49, -48, -48, -50, -51, -53, -55, -56, //3392
-56, -55, -54, -53, -51, -49, -48, -47, -45, -44, -41, -38, -34, -31, -29, -28, //3408
-25, -22, -18, -15, -12, -9, -8, -5, -5, -4, -4, -4, -4, -5, -7, -9, //3424
-12, -15, -18, -23, -26, -29, -33, -37, -43, -46, -49, -51, -52, -53, -53, -53, //3440
-53, -54, -54, -53, -53, -52, -51, -51, -49, -47, -45, -43, -40, -39, -36, -33, //3456
-32, -31, -28, -25, -22, -17, -14, -11, -9, -7, -6, -6, -6, -6, -6, -6, //3472
-5, -3, -1, 0, 3, 7, 12, 15, 17, 18, 20, 22, 22, 22, 21, 20, //3488
17, 12, 8, 5, 2, -1, -3, -6, -7, -8, -9, -9, -9, -9, -7, -6, //3504
-3, 0, 3, 5, 6, 6, 7, 7, 6, 6, 5, 4, 3, 2, 1, 1, //3520
1, 2, 3, 4, 4, 5, 6, 6, 7, 7, 6, 6, 5, 5, 4, 4, //3536
4, 3, 3, 3, 1, -1, -2, -3, -5, -6, -7, -7, -8, -8, -8, -10, //3552
-11, -12, -13, -15, -17, -20, -21, -21, -21, -20, -19, -17, -15, -13, -11, -8, //3568
-5, -2, 0, 1, 2, 3, 3, 2, 1, 0, -2, -4, -3, -2, -1, 1, //3584
4, 8, 10, 12, 14, 15, 16, 19, 21, 23, 24, 24, 23, 21, 19, 16, //3600
14, 11, 8, 6, 4, 3, 2, 0, -2, -3, -4, -5, -5, -6, -6, -6, //3616
-5, -4, -3, 0, 2, 4, 5, 7, 7, 10, 11, 12, 15, 17, 21, 23, //3632
25, 26, 27, 28, 29, 29, 29, 29, 28, 27, 26, 25, 24, 24, 24, 24, //3648
25, 26, 27, 28, 30, 31, 32, 33, 33, 33, 33, 34, 35, 36, 37, 38, //3664
38, 37, 36, 35, 33, 31, 28, 26, 25, 24, 22, 21, 21, 21, 22, 24, //3680
27, 30, 33, 35, 35, 36, 36, 34, 32, 30, 29, 26, 22, 20, 18, 15, //3696
14, 12, 10, 9, 8, 8, 9, 9, 13, 16, 19, 22, 24, 27, 28, 28, //3712
28, 27, 26, 25, 23, 21, 20, 19, 18, 18, 19, 19, 19, 19, 18, 17, //3728
17, 16, 16, 16, 16, 16, 16, 16, 16, 16, 15, 16, 16, 16, 16, 17, //3744
18, 20, 21, 22, 24, 27, 29, 31, 33, 37, 40, 44, 46, 48, 48, 47, //3760
47, 48, 49, 50, 51, 53, 54, 54, 55, 55, 56, 57, 59, 60, 60, 59, //3776
59, 56, 55, 54, 54, 54, 54, 54, 54, 55, 56, 59, 62, 68, 71, 75, //3792
78, 79, 81, 82, 82, 82, 82, 82, 80, 79, 78, 78, 79, 80, 81, 82, //3808
83, 82, 82, 82, 82, 83, 84, 85, 86, 87, 87, 87, 86, 85, 84, 83, //3824
82, 80, 77, 75, 71, 69, 67, 64, 63, 61, 57, 55, 54, 51, 50, 48, //3840
47, 46, 44, 43, 42, 43, 44, 45, 48, 51, 54, 57, 59, 61, 62, 63, //3856
66, 68, 69, 70, 71, 71, 71, 69, 68, 67, 65, 63, 63, 63, 64, 64, //3872
64, 63, 61, 59, 57, 54, 50, 47, 44, 41, 37, 32, 28, 21, 18, 14, //3888
11, 8, 4, 1, -1, -5, -8, -11, -14, -16, -17, -17, -17, -17, -15, -13, //3904
-12, -10, -8, -7, -6, -5, -4, -3, -1, 2, 4, 6, 7, 8, 10, 12, //3920
13, 14, 14, 13, 12, 10, 8, 5, 4, 4, 5, 6, 7, 8, 10, 10, //3936
12, 12, 12, 11, 10, 9, 7, 5, 4, 2, 0, -4, -7, -11, -15, -19, //3952
-22, -28, -31, -36, -40, -43, -48, -50, -51, -51, -51, -50, -50, -50, -51, -53, //3968
-54, -55, -56, -55, -55, -55, -55, -56, -57, -59, -61, -62, -64, -67, -69, -71, //3984
-72, -73, -74, -75, -76, -76, -77, -77, -77, -77, -77, -77, -77, -78, -79, -81, //4000
-84, -85, -86, -87, -86, -86, -86, -86, -87, -87, -88, -88, -87, -86, -86, -84, //4016
-83, -82, -81, -79, -76, -75, -73, -72, -72, -72, -72, -72, -71, -71, -71, -72, //4032
-73, -74, -75, -76, -78, -78, -78, -79, -80, -81, -84, -87, -89, -90, -91, -91, //4048
-91, -91, -91, -91, -91, -91, -90, -90, -89, -89, -88, -89, -89, -89, -90, -90, //4064
-90, -90, -91, -91, -92, -92, -92, -92, -92, -91, -91, -90, -90, -90, -90, -90, //4080
-90, -90, -90, -90, -89, -89, -89, -88, -85, -83, -81, -80, -78, -76, -73, -70, //4096
-68, -65, -61, -56, -48, -42, -36, -30, -24, -17, -13, -9, -5, -2, 0, 3, //4112
4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 0, -2, -4, -8, -11, -14, //4128
-21, -24, -29, -34, -38, -43, -46, -48, -51, -54, -56, -60, -62, -64, -65, -66, //4144
-66, -65, -64, -63, -62, -60, -56, -53, -50, -46, -42, -38, -32, -28, -24, -19, //4160
-15, -11, -5, -2, 1, 4, 7, 10, 12, 13, 14, 15, 15, 14, 13, 12, //4176
9, 6, 3, -1, -2, -3, -3, -3, -2, -1, 0, 1, 1, 2, 4, 6, //4192
8, 9, 11, 12, 12, 12, 12, 12, 13, 12, 11, 10, 8, 5, 2, -1, //4208
-3, -4, -3, -2, -1, 0, 2, 4, 5, 7, 9, 11, 13, 14, 15, 16, //4224
18, 20, 22, 25, 28, 30, 33, 35, 36, 36, 36, 36, 36, 36, 37, 38, //4240
39, 41, 43, 45, 47, 50, 53, 58, 61, 63, 65, 67, 69, 71, 72, 73, //4256
76, 77, 78, 78, 78, 77, 75, 71, 68, 66, 63, 60, 58, 56, 56, 57, //4272
59, 62, 65, 68, 71, 73, 74, 75, 77, 79, 81, 82, 83, 84, 83, 83, //4288
82, 81, 81, 79, 77, 75, 73, 72, 70, 70, 71, 72, 73, 76, 78, 82, //4304
84, 86, 88, 89, 91, 92, 92, 91, 90, 90, 88, 87, 85, 84, 84, 81, //4320
78, 76, 74, 73, 73, 73, 73, 74, 74, 74, 74, 74, 73, 73, 73, 71, //4336
69, 68, 66, 66, 66, 66, 66, 67, 68, 68, 69, 70, 70, 71, 72, 72, //4352
72, 72, 72, 73, 74, 75, 77, 77, 77, 77, 76, 75, 74, 74, 73, 72, //4368
71, 69, 69, 67, 66, 66, 65, 64, 63, 60, 58, 55, 54, 52, 50, 49, //4384
48, 47, 47, 45, 44, 43, 44, 44, 44, 44, 42, 41, 39, 39, 39, 40, //4400
41, 43, 45, 46, 48, 50, 51, 52, 52, 52, 52, 50, 49, 47, 44, 42, //4416
37, 34, 31, 27, 24, 19, 13, 10, 6, 2, 0, -3, -4, -5, -4, -4, //4432
-4, -1, 0, 1, 2, 3, 5, 6, 7, 7, 7, 7, 7, 8, 9, 10, //4448
12, 15, 18, 21, 23, 24, 27, 29, 33, 35, 37, 39, 40, 41, 41, 41, //4464
41, 41, 41, 39, 37, 35, 32, 29, 26, 21, 17, 13, 9, 6, 0, -4, //4480
-7, -9, -12, -13, -14, -15, -15, -15, -15, -14, -14, -13, -12, -11, -10, -7, //4496
-6, -5, -5, -5, -6, -9, -11, -13, -15, -16, -17, -17, -16, -16, -15, -13, //4512
-10, -7, -5, -4, -4, -4, -7, -9, -11, -12, -14, -17, -20, -22, -25, -28, //4528
-30, -33, -34, -34, -35, -35, -35, -34, -32, -30, -27, -23, -19, -13, -10, -8, //4544
-7, -7, -7, -7, -7, -8, -9, -10, -13, -15, -17, -18, -20, -23, -26, -29, //4560
-33, -37, -42, -47, -50, -52, -54, -56, -57, -59, -59, -60, -60, -60, -60, -61, //4576
-62, -63, -64, -66, -68, -69, -70, -70, -71, -72, -74, -75, -76, -77, -77, -77, //4592
-76, -74, -73, -70, -67, -62, -59, -55, -52, -49, -47, -44, -43, -42, -42, -42, //4608
-43, -43, -43, -43, -43, -43, -43, -43, -44, -44, -45, -45, -43, -42, -41, -39, //4624
-37, -35, -34, -33, -32, -32, -32, -33, -35, -37, -40, -43, -45, -48, -50, -51, //4640
-52, -53, -55, -56, -58, -60, -61, -62, -63, -63, -64, -64, -64, -64, -62, -61, //4656
-60, -59, -58, -58, -59, -60, -61, -62, -63, -63, -62, -60, -59, -58, -56, -54, //4672
-53, -53, -52, -51, -50, -49, -48, -47, -47, -45, -42, -39, -37, -34, -30, -28, //4688
-25, -25, -25, -25, -25, -24, -23, -22, -22, -21, -21, -23, -23, -24, -25, -25, //4704
-26, -27, -29, -31, -34, -35, -36, -35, -34, -33, -32, -31, -31, -32, -32, -32, //4720
-32, -32, -33, -34, -36, -37, -38, -40, -41, -41, -42, -42, -42, -44, -45, -46, //4736
-46, -46, -45, -44, -43, -42, -41, -39, -37, -34, -32, -30, -27, -27, -24, -23, //4752
-23, -23, -23, -24, -25, -27, -29, -31, -34, -38, -41, -43, -46, -49, -52, -55, //4768
-57, -59, -60, -60, -60, -60, -59, -56, -55, -52, -48, -46, -44, -41, -41, -39, //4784
-37, -36, -36, -36, -35, -35, -34, -33, -32, -30, -28, -24, -22, -21, -19, -17, //4800
-15, -14, -13, -12, -12, -12, -13, -14, -16, -18, -19, -21, -24, -26, -30, -34, //4816
-38, -41, -47, -50, -53, -55, -58, -62, -65, -67, -70, -72, -74, -77, -78, -80, //4832
-80, -80, -80, -79, -77, -75, -72, -69, -65, -61, -58, -57, -55, -53, -50, -48, //4848
-46, -44, -41, -37, -33, -30, -28, -24, -21, -15, -11, -7, -4, -1, 1, 2, //4864
2, 2, 1, 0, -4, -9, -13, -18, -24, -29, -38, -42, -45, -47, -48, -49, //4880
-49, -49, -48, -47, -45, -42, -39, -38, -37, -35, -35, -34, -33, -32, -31, -31, //4896
-31, -31, -31, -31, -31, -31, -28, -26, -24, -21, -19, -16, -12, -10, -9, -8, //4912
-8, -9, -10, -11, -12, -13, -14, -14, -13, -12, -11, -10, -8, -5, -4, -4, //4928
-4, -5, -7, -10, -12, -14, -15, -16, -17, -19, -20, -22, -22, -22, -22, -21, //4944
-20, -19, -17, -16, -11, -8, -3, 1, 6, 12, 15, 16, 17, 17, 17, 17, //4960
17, 18, 19, 20, 21, 24, 26, 29, 33, 36, 40, 41, 41, 40, 39, 36, //4976
33, 31, 29, 26, 23, 20, 15, 12, 8, 4, 1, -5, -9, -12, -15, -18, //4992
-21, -23, -25, -26, -26, -27, -29, -31, -33, -34, -36, -38, -40, -41, -40, -39, //5008
-37, -34, -29, -25, -19, -14, -8, 0, 6, 10, 15, 19, 23, 29, 33, 36, //5024
38, 41, 43, 45, 46, 46, 46, 46, 45, 45, 44, 43, 42, 42, 39, 38, //5040
38, 37, 36, 35, 32, 30, 28, 26, 24, 22, 22, 22, 22, 22, 22, 24, //5056
25, 27, 30, 33, 36, 41, 44, 46, 48, 50, 54, 56, 58, 59, 60, 60, //5072
59, 59, 58, 58, 59, 59, 60, 60, 61, 61, 61, 60, 60, 60, 60, 60, //5088
60, 60, 59, 59, 59, 59, 60, 61, 62, 63, 64, 66, 67, 68, 70, 71, //5104
72, 74, 77, 78, 79, 79, 78, 78, 75, 74, 73, 71, 70, 67, 65, 63, //5120
62, 62, 62, 64, 66, 68, 70, 71, 72, 72, 73, 74, 75, 75, 76, 75, //5136
74, 73, 71, 70, 68, 68, 68, 67, 67, 65, 64, 63, 63, 63, 63, 63, //5152
63, 63, 62, 61, 60, 57, 57, 56, 56, 56, 54, 52, 51, 50, 49, 49, //5168
48, 47, 46, 45, 44, 43, 40, 38, 37, 36, 34, 30, 28, 26, 25, 24, //5184
23, 24, 25, 27, 28, 31, 34, 39, 42, 45, 49, 51, 55, 57, 59, 61, //5200
64, 65, 69, 71, 73, 75, 76, 78, 79, 80, 79, 78, 78, 75, 73, 72, //5216
71, 69, 67, 65, 63, 61, 60, 57, 54, 51, 49, 46, 44, 42, 39, 38, //5232
38, 37, 37, 37, 35, 34, 32, 31, 29, 26, 23, 21, 19, 19, 19, 21, //5248
23, 25, 27, 29, 32, 35, 37, 39, 40, 41, 42, 44, 45, 46, 47, 49, //5264
51, 53, 53, 53, 53, 53, 50, 49, 48, 46, 44, 41, 38, 36, 34, 33, //5280
31, 27, 23, 20, 16, 12, 9, 5, 3, 2, 1, 2, 2, 4, 5, 6, //5296
8, 10, 13, 14, 14, 14, 14, 14, 14, 15, 16, 16, 16, 16, 15, 14, //5312
13, 12, 11, 10, 9, 8, 7, 6, 6, 4, 4, 3, 3, 3, 0, -1, //5328
-3, -5, -6, -8, -10, -11, -13, -14, -15, -16, -19, -20, -21, -23, -25, -27, //5344
-29, -30, -31, -32, -33, -34, -34, -35, -36, -36, -36, -38, -39, -41, -42, -44, //5360
-46, -48, -49, -49, -50, -50, -51, -52, -53, -54, -54, -54, -52, -50, -48, -47, //5376
-46, -43, -41, -39, -38, -36, -35, -35, -35, -36, -39, -40, -42, -43, -45, -46, //5392
-47, -50, -53, -56, -59, -60, -63, -65, -67, -69, -71, -72, -72, -72, -70, -69, //5408
-68, -66, -64, -62, -61, -61, -60, -59, -59, -59, -58, -58, -58, -59, -59, -60, //5424
-60, -61, -62, -63, -64, -64, -65, -66, -66, -66, -66, -66, -65, -65, -65, -66, //5440
-67, -68, -70, -71, -74, -77, -80, -83, -85, -87, -90, -93, -94, -95, -96, -97, //5456
-98, -100, -101, -102, -104, -105, -106, -107, -108, -110, -111, -112, -113, -113, -113, -113, //5472
-111, -109, -108, -106, -105, -102, -99, -95, -92, -89, -86, -83, -81, -77, -75, -73, //5488
-70, -68, -66, -66, -66, -65, -65, -64, -61, -59, -57, -55, -53, -51, -48, -45, //5504
-43, -42, -40, -39, -40, -41, -43, -44, -45, -47, -49, -50, -51, -53, -55, -58, //5520
-60, -62, -63, -65, -67, -69, -70, -71, -71, -69, -66, -63, -61, -58, -55, -52, //5536
-48, -45, -44, -41, -38, -34, -31, -29, -25, -22, -19, -15, -12, -10, -9, -9, //5552
-7, -6, -5, -4, -4, -4, -3, -3, -3, -2, -2, -2, -2, -2, -3, -3, //5568
-3, -3, -3, -3, -2, -2, -1, -1, 0, 1, 1, 2, 2, 2, 2, 2, //5584
2, 1, 1, 1, 0, };