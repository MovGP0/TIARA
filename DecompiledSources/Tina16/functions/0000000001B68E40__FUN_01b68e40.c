/* Ghidra address: 01b68e40 */
/* Ghidra symbol: FUN_01b68e40 */


void FUN_01b68e40(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xcb0) + 0x260))(*(longlong **)(param_1 + 0xcb0));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xda0) + 8);
  uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar2 + 1);
  lVar4 = FUN_004113f0(uVar3,&PTR_FUN_011061a0);
  *(undefined8 *)(lVar4 + 0x118) = *(undefined8 *)(param_1 + 0xd88);
  FUN_01b655a0(param_1,1);
  FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),0);
  return;
}

