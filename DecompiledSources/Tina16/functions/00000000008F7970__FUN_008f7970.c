/* Ghidra address: 008f7970 */
/* Ghidra symbol: FUN_008f7970 */


void FUN_008f7970(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  iVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_1 + 0x48))(param_1,iVar1 + iVar2);
  iVar1 = (**(code **)(*param_2 + 0x18))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x28))(param_2,local_30,iVar2);
      (**(code **)(*param_2 + 0x38))(param_2,&local_38,iVar2);
      uVar3 = (**(code **)(*param_2 + 0x30))(param_2,iVar2);
      (**(code **)(*param_1 + 0x58))(param_1,local_30[0],local_38,uVar3);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004145c0(&local_38,2);
  return;
}

