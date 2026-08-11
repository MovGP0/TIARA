/* Ghidra address: 012b6020 */
/* Ghidra symbol: FUN_012b6020 */


void FUN_012b6020(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(*(longlong *)(param_1 + 0x6b0) + 0x9c);
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x748) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x740) = uVar3;
  FUN_004b67b0(uVar3,1);
  lVar1 = *(longlong *)(param_1 + 0x6d8);
  FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_020049a0,&LAB_012b6164,
               *(undefined8 *)(lVar1 + 0x100));
  FUN_00724380(lVar1,local_20[0]);
  uVar2 = FUN_00848220(*(undefined8 *)(param_1 + 0x6d0),1);
  *(undefined4 *)(param_1 + 0x72c) = uVar2;
  FUN_00414480(local_20);
  return;
}

