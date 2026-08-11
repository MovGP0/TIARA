/* Ghidra address: 00690a00 */
/* Ghidra symbol: FUN_00690a00 */


int * FUN_00690a00(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_00690650(param_1,param_2);
  iVar1 = FUN_004230a0(param_2);
  if (iVar1 < 1) {
    FUN_00423010(&local_38,0,0,0,0);
    *(undefined8 *)param_2 = local_38;
    *(undefined8 *)(param_2 + 2) = uStack_30;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,10);
    *param_2 = *param_2 + iVar1;
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,10);
    param_2[2] = param_2[2] - iVar1;
  }
  return param_2;
}

