/* Ghidra address: 0197b4f0 */
/* Ghidra symbol: FUN_0197b4f0 */


undefined8 FUN_0197b4f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (((((*(byte *)(param_1 + 0xa0) & 2) == 0) || (PTR_PTR_01fb7df8 == (undefined *)0x0)) ||
      (*(char *)(param_1 + 0xc0) != '\0')) || (*(longlong *)(param_1 + 0xa8) != 0)) {
    uVar1 = (**(code **)(PTR_PTR_01fb7df0 + -0x30))(PTR_PTR_01fb7df0);
    *(undefined8 *)(param_1 + 0x138) = uVar1;
  }
  else {
    uVar1 = (**(code **)(PTR_PTR_01fb7df8 + -0x30))(PTR_PTR_01fb7df8);
    *(undefined8 *)(param_1 + 0x138) = uVar1;
  }
  FUN_01979e40(*(undefined8 *)(param_1 + 0x138),0xff);
  return *(undefined8 *)(param_1 + 0x138);
}

