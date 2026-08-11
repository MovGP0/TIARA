/* Ghidra address: 01cc35a0 */
/* Ghidra symbol: FUN_01cc35a0 */


longlong FUN_01cc35a0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                     undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  lVar3 = FUN_01cc1850(&PTR_FUN_01cb46a8,1);
  *(undefined1 *)(lVar3 + 8) = param_5;
  FUN_01cc09f0(lVar3,local_res10);
  FUN_00414ad0(lVar3 + 0x58,local_res18);
  iVar1 = (**(code **)(*param_4 + 0x28))();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar4 = FUN_01cc1630(&PTR_FUN_01cb4260,1);
      *(undefined1 *)(lVar4 + 8) = param_5;
      (**(code **)(*param_4 + 0x18))(param_4,local_40,iVar6);
      FUN_01cc09f0(lVar4,local_40[0]);
      uVar2 = (**(code **)(*param_4 + 0x30))(param_4,iVar6);
      *(undefined4 *)(lVar4 + 0x38) = uVar2;
      FUN_004ae7e0(*(undefined8 *)(lVar3 + 0x38),lVar4);
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar5 = FUN_01cb1860(&PTR_FUN_01cb0b88,1);
  FUN_01cb1830(uVar5,*(undefined4 *)(*(longlong *)(lVar3 + 0x38) + 0x10));
  uVar2 = (**(code **)(**(longlong **)(param_1[0x88] + 8) + 0x50))
                    (*(longlong **)(param_1[0x88] + 8),uVar5);
  *(undefined4 *)(lVar3 + 0x40) = uVar2;
  (**(code **)(*param_1 + 0x50))(param_1,lVar3);
  FUN_00414480(local_40);
  FUN_00414560(&local_res10,2);
  return lVar3;
}

