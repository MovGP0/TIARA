/* Ghidra address: 01407220 */
/* Ghidra symbol: FUN_01407220 */


void FUN_01407220(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  DAT_021084b2 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x6d8);
  FUN_008483b0(uVar1,0);
  FUN_00848a30(uVar1,1);
  uVar1 = *(undefined8 *)(param_1 + 0x6d8);
  uVar2 = *(undefined8 *)(param_1 + 0x7a8);
  FUN_00b95290(uVar2);
  FUN_00b0ae40(uVar1);
  FUN_00848a70(uVar1,*(undefined4 *)(param_1 + 0x7c0));
  FUN_01d3c230(uVar2,0x3bc79ca10c924223,0x3ff0000000000000,0);
  FUN_01404f30(param_1);
  FUN_01405a00(param_1);
  return;
}

