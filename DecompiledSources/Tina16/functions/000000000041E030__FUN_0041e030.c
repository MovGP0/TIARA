/* Ghidra address: 0041e030 */
/* Ghidra symbol: FUN_0041e030 */


undefined8
FUN_0041e030(undefined8 param_1,longlong param_2,int param_3,uint param_4,undefined1 param_5)

{
  if (param_3 + 1 < (int)(param_4 + 0x10)) {
    FUN_0041e070(param_1);
  }
  else {
    FUN_0041df80(param_1,param_2 + (ulonglong)param_4,param_5);
  }
  return param_1;
}

