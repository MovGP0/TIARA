/* Ghidra address: 0162ea80 */
/* Ghidra symbol: FUN_0162ea80 */


int FUN_0162ea80(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c);
  uVar2 = (int)uVar1 >> 0x1f;
  return ((uVar1 ^ uVar2) - uVar2) + 1;
}

