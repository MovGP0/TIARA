/* Ghidra address: 00c85e90 */
/* Ghidra symbol: FUN_00c85e90 */


undefined8 FUN_00c85e90(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  
  if (param_4 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
  }
  if (lVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00c7f3b0(lVar1,param_2);
  }
  return param_2;
}

