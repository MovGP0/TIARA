/* Ghidra address: 0149af80 */
/* Ghidra symbol: FUN_0149af80 */


bool FUN_0149af80(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  bool local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_10,param_2,param_3);
  FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_18,param_2,param_4);
  if (param_5 == 1) {
    iVar1 = FUN_0043e6d0(local_10,local_18);
    local_19 = -1 < iVar1;
  }
  else {
    iVar1 = FUN_0043e6d0(local_10,local_18);
    local_19 = iVar1 < 0;
  }
  FUN_00414560(&local_18,2);
  return local_19;
}

