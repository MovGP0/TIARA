/* Ghidra address: 00834e60 */
/* Ghidra symbol: FUN_00834e60 */


void FUN_00834e60(longlong param_1,short *param_2,ushort param_3)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x500) == '\0') {
    FUN_006598b0(param_1,param_2,param_3);
  }
  cVar1 = FUN_008355d0(param_1);
  if ((((cVar1 != '\0') && (*param_2 != 0)) && ((*param_2 == 0x25 || (*param_2 == 0x27)))) &&
     ((param_3 & 4) != 0)) {
    FUN_00835cc0(param_1);
  }
  return;
}

