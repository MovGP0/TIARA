/* Ghidra address: 00b95930 */
/* Ghidra symbol: FUN_00b95930 */


int FUN_00b95930(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
  uVar2 = (int)uVar1 >> 0x1f;
  return (uVar1 ^ uVar2) - uVar2;
}

