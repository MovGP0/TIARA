/* Ghidra address: 0109e3d0 */
/* Ghidra symbol: FUN_0109e3d0 */


void FUN_0109e3d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00f7da90(*(undefined8 *)(*(longlong *)(param_1 + 0x1660) + 0x3548),local_res10[0]);
  iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x750));
  if (iVar1 == 1) {
    iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x770));
    if (iVar1 == 2) {
      FUN_0109d7c0(param_1,1);
    }
  }
  FUN_00414480(local_res10);
  return;
}

