/* Ghidra address: 00c1c120 */
/* Ghidra symbol: FUN_00c1c120 */


char FUN_00c1c120(undefined8 param_1,uint param_2,uint param_3,byte param_4,char *param_5,
                 char *param_6,char *param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  *param_5 = (char)((ulonglong)((param_2 & 0xff) + 3) / 0x33);
  *param_6 = (char)((ulonglong)((param_3 & 0xff) + 3) / 0x33);
  *param_7 = (char)((ulonglong)(param_4 + 3) / 0x33);
  cVar1 = *param_6;
  cVar2 = *param_7;
  cVar3 = *param_5;
  *param_5 = *param_5 * '3';
  *param_6 = *param_6 * '3';
  *param_7 = *param_7 * '3';
  return cVar2 + cVar1 * '\x06' + cVar3 * '$';
}

