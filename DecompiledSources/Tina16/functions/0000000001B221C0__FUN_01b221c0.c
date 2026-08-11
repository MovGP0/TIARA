/* Ghidra address: 01b221c0 */
/* Ghidra symbol: FUN_01b221c0 */


void FUN_01b221c0(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (iVar1 + -1 < param_2) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    iVar1 = (param_2 - iVar1) + 1;
    if (0 < iVar1) {
      do {
        (**(code **)(*param_1 + 0x78))(param_1,0);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  (**(code **)(*param_1 + 0x40))(param_1,param_2,local_res18[0]);
  FUN_00414480(local_res18);
  return;
}

