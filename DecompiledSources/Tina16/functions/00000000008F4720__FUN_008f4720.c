/* Ghidra address: 008f4720 */
/* Ghidra symbol: FUN_008f4720 */


void FUN_008f4720(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  plVar2 = (longlong *)FUN_008e5de0(&PTR_FUN_008d2398,param_2);
  if (plVar2 == (longlong *)0x0) {
    FUN_0041ddd0(local_30,PTR_PTR_02003338);
    uVar3 = FUN_0044d490(&PTR_FUN_008f2308,1,local_30[0]);
    FUN_004134c0(uVar3);
  }
  FUN_008e6b70(plVar2,*(undefined1 *)(*(longlong *)(param_1 + 0x40) + 8));
  FUN_008e6b60(plVar2,*(undefined2 *)(*(longlong *)(param_1 + 0x40) + 10));
  (**(code **)(*plVar2 + 8))(plVar2,*(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0xc));
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0xd));
  FUN_008e6ba0(plVar2,*(longlong *)(param_1 + 0x40) + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x40);
  plVar2[4] = *(longlong *)(lVar1 + 0x20);
  plVar2[5] = *(longlong *)(lVar1 + 0x28);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  *(longlong **)(param_1 + 0x40) = plVar2;
  FUN_00414480(local_30);
  return;
}

