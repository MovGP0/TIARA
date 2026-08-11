/* Ghidra address: 00b0a8e0 */
/* Ghidra symbol: FUN_00b0a8e0 */


void FUN_00b0a8e0(longlong param_1,undefined8 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  int local_20;
  undefined4 local_1c;
  
  FUN_00846d00(param_1,param_2,param_3,param_4,param_5);
  FUN_00849eb0(param_1,param_4,param_5,&local_1c,&local_20);
  cVar1 = FUN_00b09b70(param_1,local_1c,local_20);
  if ((cVar1 != '\0') && (local_20 != *(int *)(param_1 + 0x4ac))) {
    FUN_00848a30(param_1,local_20);
  }
  return;
}

