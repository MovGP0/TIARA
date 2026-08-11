/* Ghidra address: 010ef1a0 */
/* Ghidra symbol: FUN_010ef1a0 */


void FUN_010ef1a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_38 [24];
  
  (**(code **)(*param_2 + 0xb8))(param_2,param_1 + 0x48);
  piVar1 = (int *)(param_1 + 0x48);
  iVar2 = (*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x4c)) / 2;
  FUN_00498350(local_38,*piVar1,iVar2 + -2,*piVar1 + 6,iVar2 + 3);
  (**(code **)(*param_2 + 0xa8))(param_2,local_38);
  iVar2 = (*piVar1 + *(int *)(param_1 + 0x50)) / 2;
  FUN_00498350(local_38,iVar2 + -2,*(int *)(param_1 + 0x4c),iVar2 + 3,*(int *)(param_1 + 0x4c) + 6);
  (**(code **)(*param_2 + 0xa8))(param_2,local_38);
  iVar2 = (*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x4c)) / 2;
  FUN_00498350(local_38,*(int *)(param_1 + 0x50) + -6,iVar2 + -2,*(int *)(param_1 + 0x50),iVar2 + 3)
  ;
  (**(code **)(*param_2 + 0xa8))(param_2,local_38);
  iVar2 = (*piVar1 + *(int *)(param_1 + 0x50)) / 2;
  FUN_00498350(local_38,iVar2 + -2,*(int *)(param_1 + 0x54) + -6,iVar2 + 2,*(int *)(param_1 + 0x54))
  ;
  (**(code **)(*param_2 + 0xa8))(param_2,local_38);
  FUN_00498350(local_38,*piVar1,*(int *)(param_1 + 0x54) + -6,*piVar1 + 6,*(int *)(param_1 + 0x54));
  (**(code **)(*param_2 + 0xa8))(param_2,local_38);
  FUN_00498350(local_38,*piVar1,*(int *)(param_1 + 0x4c),*piVar1 + 6,*(int *)(param_1 + 0x4c) + 6);
  (**(code **)(*param_2 + 0xa8))(param_2,local_38);
  FUN_00498350(local_38,*(int *)(param_1 + 0x50) + -6,*(int *)(param_1 + 0x4c),
               *(int *)(param_1 + 0x50),*(int *)(param_1 + 0x4c) + 6);
  (**(code **)(*param_2 + 0xa8))(param_2,local_38);
  FUN_00498350(local_38,*(int *)(param_1 + 0x50) + -6,*(int *)(param_1 + 0x54) + -6,
               *(int *)(param_1 + 0x50),*(int *)(param_1 + 0x54));
  (**(code **)(*param_2 + 0xa8))(param_2,local_38);
  return;
}

