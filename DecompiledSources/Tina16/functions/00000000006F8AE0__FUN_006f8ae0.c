/* Ghidra address: 006f8ae0 */
/* Ghidra symbol: FUN_006f8ae0 */


void FUN_006f8ae0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  if (param_1[0xe4] == 0) {
    FUN_00652140(param_1,param_2);
  }
  else {
    lVar4 = FUN_006f7390(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x30),
                         *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x34));
    if (lVar4 != 0) {
      lVar1 = *(longlong *)(param_2 + 0x10);
      FUN_00414b50(&local_40,*(undefined8 *)(lVar4 + 0x30));
      (**(code **)(*param_1 + 0x2f0))(param_1,lVar4,&local_40);
      FUN_006ef7e0(lVar4,&local_38,0);
      local_38 = FUN_0064d1f0(param_1,&local_38);
      local_30[0] = FUN_0064d1f0(param_1,local_30);
      *(undefined8 *)(lVar1 + 0x20) = local_38;
      *(undefined8 *)(lVar1 + 0x28) = local_30[0];
      FUN_00414ad0(lVar1 + 0x40,local_40);
      iVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,0xe);
      *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x24) + iVar2;
      iVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,0xd);
      *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x20) + iVar2;
      uVar3 = FUN_0064d0b0(param_1);
      *(undefined4 *)(lVar1 + 0x18) = uVar3;
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
  }
  FUN_00414480(&local_40);
  return;
}

