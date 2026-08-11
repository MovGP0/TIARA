/* Ghidra address: 0107a0c0 */
/* Ghidra symbol: FUN_0107a0c0 */


undefined8 FUN_0107a0c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  if (*(longlong *)(param_1 + 0xb80) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0xb80));
  }
  uVar2 = FUN_010798b0(param_1,*(undefined8 *)(param_1 + 0xac8));
  *(undefined8 *)(param_1 + 0xb80) = uVar2;
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x550);
  FUN_006ded30(uVar2);
  uVar3 = FUN_006def00(uVar2,0,*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x10));
  *(undefined8 *)(param_1 + 0xc00) = uVar3;
  FUN_006dc990(uVar3,0);
  (**(code **)(*local_30 + 0x80))(local_30,0,*(undefined8 *)(param_1 + 0xc00));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xb80) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0xb80) + 0x18))
                (*(longlong **)(param_1 + 0xb80),&local_38,iVar5);
      FUN_00441920(&local_40,local_38);
      uVar3 = FUN_01079dd0(auStack_88,local_38);
      uVar3 = FUN_006dee40(uVar2,uVar3,local_40);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xb80) + 0x30))
                        (*(longlong **)(param_1 + 0xb80),iVar5);
      FUN_006dc990(uVar3,uVar4);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_006e2400(*(undefined8 *)(param_1 + 0x6d8));
  FUN_01079c90(*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x550),1);
  FUN_00410f20(local_30);
  FUN_00414560(&local_58,5);
  return local_60;
}

