/* Ghidra address: 01107250 */
/* Ghidra symbol: FUN_01107250 */


void FUN_01107250(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  return;
}

