/* Ghidra address: 00690a90 */
/* Ghidra symbol: FUN_00690a90 */


int * FUN_00690a90(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  FUN_00690650(param_1,param_2);
  iVar1 = FUN_004230c0(param_2);
  if (iVar1 < 1) {
    FUN_00423010(&local_58,0,0,0,0);
    *(undefined8 *)param_2 = local_58;
    *(undefined8 *)(param_2 + 2) = uStack_50;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,10);
    param_2[2] = *param_2 + iVar1;
    FUN_00690650(param_1,local_38);
    iVar1 = FUN_004230a0(local_38);
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1,10);
    if (iVar1 < iVar2 * 2) {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1,10);
      FUN_00690650(param_1,local_48);
      iVar2 = FUN_004230a0(local_48);
      param_2[2] = param_2[2] - (iVar1 * 2 - iVar2) / 2;
    }
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,10);
    if (param_2[2] - *param_2 < iVar1 / 2) {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1,10);
      param_2[2] = *param_2 + iVar1 / 2;
    }
  }
  return param_2;
}

