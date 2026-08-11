/* Ghidra address: 00c3c520 */
/* Ghidra symbol: FUN_00c3c520 */


int FUN_00c3c520(uint param_1,byte param_2,char param_3)

{
  int iVar1;
  
  if (param_3 == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = (uint)param_2 * (param_1 & 0xff);
  }
  return iVar1;
}

