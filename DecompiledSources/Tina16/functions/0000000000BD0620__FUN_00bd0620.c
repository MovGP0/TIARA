/* Ghidra address: 00bd0620 */
/* Ghidra symbol: FUN_00bd0620 */


void FUN_00bd0620(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (param_2 < iVar1) {
    FUN_0041ddd0(&local_10,&LAB_00bcee88);
    FUN_0044d490(&PTR_FUN_004347c0,1,local_10);
  }
  FUN_00409620(param_1 + 7,(longlong)(param_2 * 0x28));
  *(int *)((longlong)param_1 + 0x44) = param_2;
  FUN_00414480(&local_10);
  return;
}

