/*
	This file is automatically generated by make_func.
	do not make any manual changes to this file.
*/


/* operators */

#define F_POP_VALUE                    1
#define F_PUSH                         2
#define F_EFUN0                        3
#define F_EFUN1                        4
#define F_EFUN2                        5
#define F_EFUN3                        6
#define F_EFUNV                        7
#define F_SHORT_INT                    8
#define F_NUMBER                       9
#define F_REAL                         10
#define F_BYTE                         11
#define F_NBYTE                        12
#define F_STRING                       13
#define F_SHORT_STRING                 14
#define F_CONST0                       15
#define F_CONST1                       16
#define F_AGGREGATE                    17
#define F_AGGREGATE_ASSOC              18
#define F_BRANCH_NE                    19
#define F_BRANCH_GE                    20
#define F_BRANCH_LE                    21
#define F_BRANCH_EQ                    22
#define F_BRANCH_WHEN_ZERO             23
#define F_BRANCH_WHEN_NON_ZERO         24
#define F_BRANCH                       25
#define F_BBRANCH_WHEN_ZERO            26
#define F_BBRANCH_WHEN_NON_ZERO        27
#define F_BBRANCH                      28
#define F_BBRANCH_LT                   29
#define F_FOREACH                      30
#define F_NEXT_FOREACH                 31
#define F_EXIT_FOREACH                 32
#define F_LOOP_COND_LOCAL              33
#define F_LOOP_COND_NUMBER             34
#define F_LOOP_INCR                    35
#define F_WHILE_DEC                    36
#define F_LOR                          37
#define F_LAND                         38
#define F_CATCH                        39
#define F_END_CATCH                    40
#define F_TIME_EXPRESSION              41
#define F_END_TIME_EXPRESSION          42
#define F_SWITCH                       43
#define F_CALL_FUNCTION_BY_ADDRESS     44
#define F_CALL_INHERITED               45
#define F_RETURN                       46
#define F_RETURN_ZERO                  47
#define F_EQ                           48
#define F_NE                           49
#define F_LE                           50
#define F_LT                           51
#define F_GE                           52
#define F_GT                           53
#define F_INC                          54
#define F_DEC                          55
#define F_PRE_INC                      56
#define F_POST_INC                     57
#define F_PRE_DEC                      58
#define F_POST_DEC                     59
#define F_TRANSFER_LOCAL               60
#define F_MAKE_REF                     61
#define F_KILL_REFS                    62
#define F_LOCAL                        63
#define F_LOCAL_LVALUE                 64
#define F_REF                          65
#define F_REF_LVALUE                   66
#define F_GLOBAL                       67
#define F_GLOBAL_LVALUE                68
#define F_MEMBER                       69
#define F_MEMBER_LVALUE                70
#define F_INDEX                        71
#define F_INDEX_LVALUE                 72
#define F_RINDEX                       73
#define F_RINDEX_LVALUE                74
#define F_NN_RANGE                     75
#define F_NN_RANGE_LVALUE              76
#define F_RN_RANGE                     77
#define F_RN_RANGE_LVALUE              78
#define F_RR_RANGE                     79
#define F_RR_RANGE_LVALUE              80
#define F_NR_RANGE                     81
#define F_NR_RANGE_LVALUE              82
#define F_NE_RANGE                     83
#define F_RE_RANGE                     84
#define F_ADD_EQ                       85
#define F_SUB_EQ                       86
#define F_AND_EQ                       87
#define F_OR_EQ                        88
#define F_XOR_EQ                       89
#define F_LSH_EQ                       90
#define F_RSH_EQ                       91
#define F_MULT_EQ                      92
#define F_DIV_EQ                       93
#define F_MOD_EQ                       94
#define F_ASSIGN                       95
#define F_VOID_ADD_EQ                  96
#define F_VOID_ASSIGN                  97
#define F_VOID_ASSIGN_LOCAL            98
#define F_ADD                          99
#define F_SUBTRACT                     100
#define F_MULTIPLY                     101
#define F_DIVIDE                       102
#define F_MOD                          103
#define F_AND                          104
#define F_OR                           105
#define F_XOR                          106
#define F_LSH                          107
#define F_RSH                          108
#define F_NOT                          109
#define F_NEGATE                       110
#define F_COMPL                        111
#define F_FUNCTION_CONSTRUCTOR         112
#define F_SIMUL_EFUN                   113
#define F_SSCANF                       114
#define F_PARSE_COMMAND                115
#define F_NEW_CLASS                    116
#define F_NEW_EMPTY_CLASS              117
#define F_EXPAND_VARARGS               118
#define F_TYPE_CHECK                   119

/* 1 arg efuns */
#define BASE 120

#define F__TO_INT                      120
#define F__TO_FLOAT                    121
#define F_THIS_PLAYER                  122
#define F_PREVIOUS_OBJECT              123
#define F_CALL_STACK                   124
#define F_SIZEOF                       125
#define F_DESTRUCT                     126
#define F_FILE_NAME                    127
#define F_CAPITALIZE                   128
#define F_RANDOM                       129
#define F_DEFER                        130
#define F_ALL_INVENTORY                131
#define F_FIRST_INVENTORY              132
#define F_NEXT_INVENTORY               133
#define F_MOVE_OBJECT                  134
#define F_COMMAND                      135
#define F_LIVING                       136
#define F_SET_LIVING_NAME              137
#define F_FIND_LIVING                  138
#define F_FIND_PLAYER                  139
#define F_NOTIFY_FAIL                  140
#define F_LOWER_CASE                   141
#define F_SAVE_VARIABLE                142
#define F_RESTORE_VARIABLE             143
#define F_WRITE                        144
#define F_SHOUT                        145
#define F_RECEIVE                      146
#define F_FIND_CALL_OUT                147
#define F_VALUES                       148
#define F_KEYS                         149
#define F_CLONEP                       150
#define F_INTP                         151
#define F_UNDEFINEDP                   152
#define F_FLOATP                       153
#define F_STRINGP                      154
#define F_VIRTUALP                     155
#define F_FUNCTIONP                    156
#define F_POINTERP                     157
#define F_OBJECTP                      158
#define F_CLASSP                       159
#define F_TYPEOF                       160
#define F_BUFFERP                      161
#define F_ALLOCATE_BUFFER              162
#define F_REPLACE_PROGRAM              163
#define F_CRC32                        164
#define F_FILE_SIZE                    165
#define F_MKDIR                        166
#define F_RM                           167
#define F_RMDIR                        168
#define F_LOCALTIME                    169
#define F_QUERY_IDLE                   170
#define F_QUERY_SNOOP                  171
#define F_QUERY_SNOOPING               172
#define F_SET_HEART_BEAT               173
#define F_QUERY_HEART_BEAT             174
#define F_SET_HIDE                     175
#define F_QUERY_SHADOWING              176
#define F_THROW                        177
#define F_DEEP_INHERIT_LIST            178
#define F_SHALLOW_INHERIT_LIST         179
#define F_MAPP                         180
#define F_INTERACTIVE                  181
#define F_HAS_MXP                      182
#define F_HAS_ZMP                      183
#define F_HAS_GMCP                     184
#define F_SEND_GMCP                    185
#define F_IN_EDIT                      186
#define F_IN_INPUT                     187
#define F_USERP                        188
#define F_GET_CONFIG                   189
#define F_QUERY_PRIVS                  190
#define F_CHILDREN                     191
#define F_RELOAD_OBJECT                192
#define F_ERROR                        193
#define F_ED_CMD                       194
#define F_MUD_STATUS                   195
#define F_SET_EVAL_LIMIT               196
#define F_FUNCTION_PROFILE             197
#define F_COS                          198
#define F_SIN                          199
#define F_TAN                          200
#define F_ASIN                         201
#define F_ACOS                         202
#define F_ATAN                         203
#define F_SQRT                         204
#define F_LOG                          205
#define F_LOG10                        206
#define F_LOG2                         207
#define F_EXP                          208
#define F_FLOOR                        209
#define F_CEIL                         210
#define F_ROUND                        211
#define F_NORM                         212
#define F_REFS                         213
#define F_PARSE_REMOVE                 214
#define F_REMOVE_SHADOW                215
#define F_COPY                         216
#define F_PLURALIZE                    217
#define F_FILE_LENGTH                  218
#define F_UPPER_CASE                   219
#define F_FETCH_VARIABLE               220
#define F_REMOVE_INTERACTIVE           221
#define F_DEBUG_MESSAGE                222
#define F_FUNCTION_OWNER               223
#define F_BASE_NAME                    224
#define F_NUM_CLASSES                  225
#define F_ASSEMBLE_CLASS               226
#define F_DISASSEMBLE_CLASS            227
#define F_SHUFFLE                      228
#define F_ELEMENT_OF                   229
#define F_ABS                          230
#define F_QUERY_CHARMODE               231
#define F_REMOVE_CHARMODE              232
#define F_REMOVE_GET_CHAR              233
#define F_SEND_NULLBYTE                234
#define F_SOCKET_CLOSE                 235
#define F_SOCKET_ERROR                 236
#define F_SET_AUTHOR                   237

/* efuns */
#define ONEARG_MAX 238

#define F__CALL_OTHER                  238
#define F__EVALUATE                    239
#define F__THIS_OBJECT                 240
#define F__NEW                         241
#define F_BIND                         242
#define F_EXPLODE                      243
#define F_IMPLODE                      244
#define F_CALL_OUT                     245
#define F_MEMBER_ARRAY                 246
#define F_INPUT_TO                     247
#define F_ENVIRONMENT                  248
#define F_DEEP_INVENTORY               249
#define F_SAY                          250
#define F_TELL_ROOM                    251
#define F_PRESENT                      252
#define F_ADD_ACTION                   253
#define F_QUERY_VERB                   254
#define F_REMOVE_ACTION                255
#define F_COMMANDS                     256
#define F_DISABLE_COMMANDS             257
#define F_ENABLE_COMMANDS              258
#define F_LIVINGS                      259
#define F_REPLACE_STRING               260
#define F_RESTORE_OBJECT               261
#define F_SAVE_OBJECT                  262
#define F_USERS                        263
#define F_GET_DIR                      264
#define F_STRSRCH                      265
#define F_TELL_OBJECT                  266
#define F_MESSAGE                      267
#define F_FIND_OBJECT                  268
#define F_ALLOCATE_MAPPING             269
#define F_MAP_DELETE                   270
#define F_MATCH_PATH                   271
#define F_INHERITS                     272
#define F_REGEXP                       273
#define F_REG_ASSOC                    274
#define F_ALLOCATE                     275
#define F_CALL_OUT_INFO                276
#define F_READ_BUFFER                  277
#define F_WRITE_BUFFER                 278
#define F_WRITE_FILE                   279
#define F_RENAME                       280
#define F_WRITE_BYTES                  281
#define F_READ_BYTES                   282
#define F_READ_FILE                    283
#define F_CP                           284
#define F_LINK                         285
#define F_CLEAR_BIT                    286
#define F_TEST_BIT                     287
#define F_SET_BIT                      288
#define F_NEXT_BIT                     289
#define F_CRYPT                        290
#define F_OLDCRYPT                     291
#define F_CTIME                        292
#define F_EXEC                         293
#define F_FUNCTION_EXISTS              294
#define F_OBJECTS                      295
#define F_QUERY_HOST_NAME              296
#define F_QUERY_IP_NAME                297
#define F_QUERY_IP_NUMBER              298
#define F_SNOOP                        299
#define F_REMOVE_CALL_OUT              300
#define F_SHADOW                       301
#define F_SORT_ARRAY                   302
#define F_TIME                         303
#define F_UNIQUE_ARRAY                 304
#define F_UNIQUE_MAPPING               305
#define F_PRINTF                       306
#define F_SPRINTF                      307
#define F_STAT                         308
#define F_SEND_ZMP                     309
#define F_MASTER                       310
#define F_MEMORY_INFO                  311
#define F_SET_PRIVS                    312
#define F_GET_CHAR                     313
#define F_UPTIME                       314
#define F_STRCMP                       315
#define F_RUSAGE                       316
#define F_FLUSH_MESSAGES               317
#define F_ED_START                     318
#define F_QUERY_ED_MODE                319
#define F_CACHE_STATS                  320
#define F_FILTER                       321
#define F_MAP                          322
#define F_MALLOC_STATUS                323
#define F_DUMPALLOBJ                   324
#define F_DUMP_FILE_DESCRIPTORS        325
#define F_QUERY_LOAD_AVERAGE           326
#define F_ORIGIN                       327
#define F_RECLAIM_OBJECTS              328
#define F_OPCPROF                      329
#define F_RESOLVE                      330
#define F_ACT_MXP                      331
#define F_REQUEST_TERM_TYPE            332
#define F_START_REQUEST_TERM_TYPE      333
#define F_REQUEST_TERM_SIZE            334
#define F_SHUTDOWN                     335
#define F_POW                          336
#define F_DOTPROD                      337
#define F_DISTANCE                     338
#define F_ANGLE                        339
#define F_DEBUG_INFO                   340
#define F_DUMP_PROG                    341
#define F_ID_MATRIX                    342
#define F_TRANSLATE                    343
#define F_SCALE                        344
#define F_ROTATE_X                     345
#define F_ROTATE_Y                     346
#define F_ROTATE_Z                     347
#define F_LOOKAT_ROTATE                348
#define F_PARSE_INIT                   349
#define F_PARSE_REFRESH                350
#define F_PARSE_SENTENCE               351
#define F_PARSE_ADD_RULE               352
#define F_PARSE_ADD_SYNONYM            353
#define F_PARSE_DUMP                   354
#define F_PARSE_MY_RULES               355
#define F_QUERY_NOTIFY_FAIL            356
#define F_NAMED_LIVINGS                357
#define F_FUNCTIONS                    358
#define F_VARIABLES                    359
#define F_HEART_BEATS                  360
#define F_TERMINAL_COLOUR              361
#define F_REPLACEABLE                  362
#define F_PROGRAM_INFO                 363
#define F_STORE_VARIABLE               364
#define F_QUERY_IP_PORT                365
#define F_ZONETIME                     366
#define F_IS_DAYLIGHT_SAVINGS_TIME     367
#define F_REPEAT_STRING                368
#define F_MEMORY_SUMMARY               369
#define F_QUERY_REPLACED_PROGRAM       370
#define F_NETWORK_STATS                371
#define F_REAL_TIME                    372
#define F_EVENT                        373
#define F_QUERY_NUM                    374
#define F_GET_GARBAGE                  375
#define F_FETCH_CLASS_MEMBER           376
#define F_STORE_CLASS_MEMBER           377
#define F_MAX                          378
#define F_MIN                          379
#define F_STRING_DIFFERENCE            380
#define F_RESTORE_FROM_STRING          381
#define F_CLASSES                      382
#define F_SOCKET_CREATE                383
#define F_SOCKET_BIND                  384
#define F_SOCKET_LISTEN                385
#define F_SOCKET_ACCEPT                386
#define F_SOCKET_CONNECT               387
#define F_SOCKET_WRITE                 388
#define F_SOCKET_RELEASE               389
#define F_SOCKET_ACQUIRE               390
#define F_SOCKET_ADDRESS               391
#define F_SOCKET_STATUS                392
#define F_DOMAIN_STATS                 393
#define F_AUTHOR_STATS                 394

/* efuns */
#define NUM_OPCODES 394

