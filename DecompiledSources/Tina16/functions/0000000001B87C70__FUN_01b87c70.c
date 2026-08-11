/* Ghidra address: 01b87c70 */
/* Ghidra symbol: FUN_01b87c70 */


longlong FUN_01b87c70(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_30;
  int iStack_2c;
  
  lVar3 = FUN_01cf1750(0,&PTR_FUN_01cf10a8);
  FUN_01d38290(lVar3,1);
  FUN_00414ad0(lVar3 + 0x98,*(undefined8 *)(param_2 + 8));
  uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + (longlong)param_4 * 8);
  local_30 = (int)uVar2;
  iStack_2c = (int)((ulonglong)uVar2 >> 0x20);
  iVar1 = *(int *)(param_1 + 0x37c);
  *(int *)(lVar3 + 0xc) = local_30 + *(int *)(param_1 + 0x378);
  *(int *)(lVar3 + 0x10) = iStack_2c + iVar1;
  *(int *)(lVar3 + 0xa4) = *(int *)(lVar3 + 0xa4) + -0x10;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x3b8),lVar3);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),lVar3);
  return lVar3;
}

