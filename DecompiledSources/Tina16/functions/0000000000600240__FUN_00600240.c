/* Ghidra address: 00600240 */
/* Ghidra symbol: FUN_00600240 */


int FUN_00600240(short param_1)

{
  int iVar1;
  
  if (((param_1 == 1) || (param_1 == 4)) || (param_1 == 8)) {
    iVar1 = 1 << ((byte)param_1 & 0x1f);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

