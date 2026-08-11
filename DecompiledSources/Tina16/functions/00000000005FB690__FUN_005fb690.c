/* Ghidra address: 005fb690 */
/* Ghidra symbol: FUN_005fb690 */


ushort FUN_005fb690(byte *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (param_2 - 1U < 0x80000000) {
    do {
      uVar1 = (uVar1 >> 0xb | uVar1 << 5) ^ (ushort)*param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar1;
}

