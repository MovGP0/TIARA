/* Ghidra address: 00690520 */
/* Ghidra symbol: FUN_00690520 */


undefined8 * FUN_00690520(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  FUN_0068ffb0(param_1,param_2);
  iVar1 = FUN_004230a0(param_2);
  if (iVar1 < 1) {
    FUN_00423010(&local_58,0,0,0,0);
    *param_2 = local_58;
    param_2[1] = uStack_50;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,9);
    *(int *)((longlong)param_2 + 4) = *(int *)((longlong)param_2 + 0xc) - iVar1;
    FUN_0068ffb0(param_1,local_38);
    iVar1 = FUN_004230c0(local_38);
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1,9);
    if (iVar1 < iVar2 * 2) {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1,9);
      FUN_0068ffb0(param_1,local_48);
      iVar2 = FUN_004230c0(local_48);
      *(int *)((longlong)param_2 + 4) = *(int *)((longlong)param_2 + 4) + (iVar1 * 2 - iVar2) / 2;
    }
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,9);
    if (*(int *)((longlong)param_2 + 0xc) - *(int *)((longlong)param_2 + 4) < iVar1 / 2) {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1,9);
      *(int *)((longlong)param_2 + 4) = *(int *)((longlong)param_2 + 0xc) - iVar1 / 2;
    }
  }
  return param_2;
}

