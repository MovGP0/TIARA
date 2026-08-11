/* Ghidra address: 00c8c100 */
/* Ghidra symbol: FUN_00c8c100 */


void FUN_00c8c100(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = FUN_00876b00(param_2,param_3,param_4);
  if (iVar1 != 0) {
    iVar2 = FUN_008764c0(param_5,0);
    FUN_00c8aa90(param_1,iVar1,iVar2);
    if (*(int *)(param_1 + 0x30) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (param_5 < 0) {
        FUN_00878280(&local_20,param_2,iVar1,param_4);
        FUN_004194b0(param_1 + 8,local_20,&DAT_0086e978);
        *(int *)(param_1 + 0x30) = iVar1;
      }
      else {
        *(int *)(param_1 + 0x30) = param_5 + iVar1;
        FUN_00419260(param_1 + 8,&DAT_0086e978,1,(longlong)(param_5 + iVar1));
        FUN_00874e50(param_2,param_4,param_1 + 8,param_5,iVar1);
      }
    }
    else if (param_5 < 0) {
      FUN_00c8b450(param_1,0);
      iVar2 = FUN_00c8ba00(param_1);
      if ((iVar2 - *(int *)(param_1 + 0x30)) - *(int *)(param_1 + 0x1c) < iVar1) {
        FUN_00419260(param_1 + 8,&DAT_0086e978,1,
                     (longlong)(*(int *)(param_1 + 0x30) + iVar1 + *(int *)(param_1 + 0x18)));
      }
      FUN_00874e50(param_2,param_4,param_1 + 8,*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x30),
                   iVar1);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
    }
    else {
      FUN_00874e50(param_2,param_4,param_1 + 8,iVar2,iVar1);
      if (*(int *)(param_1 + 0x30) <= iVar2) {
        *(int *)(param_1 + 0x30) = iVar2 + iVar1;
      }
    }
  }
  FUN_00419430(&local_20,&DAT_0086e978);
  return;
}

