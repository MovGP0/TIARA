/* Ghidra address: 00f6ff90 */
/* Ghidra symbol: FUN_00f6ff90 */


void FUN_00f6ff90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f6f870(param_2);
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  *(undefined4 *)(param_1 + 0x110) = param_3;
  FUN_00f70120(param_1,param_1 + 0x20);
  FUN_00f6f040(param_1);
  uVar1 = FUN_00f70210(param_1,*(undefined4 *)(param_1 + 0x110));
  FUN_00f70250(param_1,uVar1);
  return;
}

