/* Ghidra address: 00f0ca60 */
/* Ghidra symbol: FUN_00f0ca60 */


void FUN_00f0ca60(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x710));
  dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x718));
  if (dVar4 < dVar3) {
    uVar5 = FUN_00b90090(*(undefined8 *)(param_1 + 0x710));
    FUN_00b90440(*(undefined8 *)(param_1 + 0x718),uVar5);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  uVar1 = FUN_01a8dc20(1);
  if (uVar2 == uVar1) {
    FUN_00b90090(*(undefined8 *)(param_1 + 0x718));
    uVar5 = FUN_00c43d30();
    *(undefined8 *)(param_1 + 0x7a8) = uVar5;
  }
  else {
    uVar5 = FUN_00b90090(*(undefined8 *)(param_1 + 0x718));
    *(undefined8 *)(param_1 + 0x7a8) = uVar5;
  }
  return;
}

