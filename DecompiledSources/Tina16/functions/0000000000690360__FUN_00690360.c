/* Ghidra address: 00690360 */
/* Ghidra symbol: FUN_00690360 */


undefined8 * FUN_00690360(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_0068ffb0(param_1,param_2);
  iVar1 = FUN_004230a0(param_2);
  if (iVar1 < 1) {
    FUN_00423010(&local_38,0,0,0,0);
    *param_2 = local_38;
    param_2[1] = uStack_30;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,9);
    *(int *)((longlong)param_2 + 4) = *(int *)((longlong)param_2 + 4) + iVar1;
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,9);
    *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) - iVar1;
  }
  return param_2;
}

