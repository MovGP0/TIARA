/* Ghidra address: 01702430 */
/* Ghidra symbol: FUN_01702430 */


void FUN_01702430(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  FUN_00414480(param_1 + 0x768);
  FUN_0064cf60(param_1,1);
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x738) = uVar1;
  uVar1 = FUN_017105e0(0);
  *(undefined8 *)(param_1 + 0x760) = uVar1;
  return;
}

