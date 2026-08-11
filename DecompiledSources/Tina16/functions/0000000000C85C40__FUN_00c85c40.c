/* Ghidra address: 00c85c40 */
/* Ghidra symbol: FUN_00c85c40 */


void FUN_00c85c40(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                 char param_9)

{
  longlong lVar1;
  
  FUN_00414610(param_8);
  if (param_9 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
  }
  if (lVar1 != 0) {
    FUN_00c7f060(lVar1,param_2,param_3,param_4,param_5,param_6,param_8,param_7);
  }
  FUN_00414480(&param_8);
  return;
}

