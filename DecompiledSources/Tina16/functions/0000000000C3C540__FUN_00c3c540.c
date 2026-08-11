/* Ghidra address: 00c3c540 */
/* Ghidra symbol: FUN_00c3c540 */


int FUN_00c3c540(uint param_1,uint param_2,byte param_3,char param_4)

{
  int iVar1;
  
  if (param_4 == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = (param_3 + 1) * (param_2 & 0xff) * (param_1 & 0xff);
  }
  return iVar1;
}

