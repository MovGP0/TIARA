/* Ghidra address: 0065bc10 */
/* Ghidra symbol: FUN_0065bc10 */


undefined8 FUN_0065bc10(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_004aeba0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x360),param_1);
  }
  return uVar1;
}

