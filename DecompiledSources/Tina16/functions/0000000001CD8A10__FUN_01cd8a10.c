/* Ghidra address: 01cd8a10 */
/* Ghidra symbol: FUN_01cd8a10 */


int FUN_01cd8a10(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = FUN_01d31bf0(*(undefined8 *)(param_1 + 0x98));
  iVar2 = FUN_01d31bf0(*(undefined8 *)(param_1 + 0xa0));
  FUN_004168e0(local_20,*(undefined8 *)(param_1 + 0xd8));
  iVar3 = FUN_01d31290(local_20[0]);
  iVar4 = FUN_01d31350(*(undefined8 *)(param_1 + 0xe0));
  uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_005dcf20(*(undefined8 *)(param_1 + 0x110),uVar6);
  iVar5 = FUN_01d31f80(uVar6);
  FUN_00410f20(uVar6);
  FUN_00414520(local_20);
  return iVar1 + iVar2 + iVar3 + iVar4 + 0x41 + iVar5;
}

