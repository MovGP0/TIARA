/* Ghidra address: 00609f10 */
/* Ghidra symbol: FUN_00609f10 */


int FUN_00609f10(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0x48);
  uVar2 = (int)uVar1 >> 0x1f;
  return (uVar1 ^ uVar2) - uVar2;
}

