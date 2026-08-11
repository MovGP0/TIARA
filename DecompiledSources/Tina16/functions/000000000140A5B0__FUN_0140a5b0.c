/* Ghidra address: 0140a5b0 */
/* Ghidra symbol: FUN_0140a5b0 */


int FUN_0140a5b0(uint param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (1 < param_1) {
    iVar1 = 1 << ((byte)param_1 & 0x1f);
  }
  return iVar1;
}

