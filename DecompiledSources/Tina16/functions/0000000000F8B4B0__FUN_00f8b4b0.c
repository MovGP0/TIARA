/* Ghidra address: 00f8b4b0 */
/* Ghidra symbol: FUN_00f8b4b0 */


undefined1 FUN_00f8b4b0(longlong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  undefined1 local_9;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_9 = 0;
  *param_4 = 0;
  iVar1 = FUN_00f90b00(param_1);
  if (iVar1 != 1) {
    iVar1 = FUN_00f90b00(param_1);
    if (iVar1 == 4) {
      local_9 = FUN_00f7d480(*(undefined8 *)(param_1 + 0x3548),local_res10[0],param_3);
    }
    else {
      lVar2 = FUN_00f8b910(param_1,*(undefined4 *)(param_1 + 0x345c));
      *param_4 = *(undefined4 *)(*(longlong *)(lVar2 + 0x58) + (longlong)param_3 * 8);
      local_9 = *(undefined1 *)(*(longlong *)(lVar2 + 0x58) + 4 + (longlong)param_3 * 8);
    }
  }
  FUN_00414480(local_res10);
  return local_9;
}

