/* Ghidra address: 013f8d10 */
/* Ghidra symbol: FUN_013f8d10 */


void FUN_013f8d10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x6e0);
  FUN_008483b0(uVar1,0);
  FUN_00848a30(uVar1,1);
  uVar1 = *(undefined8 *)(param_1 + 0x6e0);
  uVar2 = *(undefined8 *)(param_1 + 0x750);
  FUN_00b95290(uVar2);
  FUN_00b0ae40(uVar1);
  FUN_00848a70(uVar1,*(undefined4 *)(param_1 + 0x778));
  FUN_01d3aad0(uVar2,0,0);
  FUN_013f76a0(param_1);
  FUN_013f7aa0(param_1);
  return;
}

