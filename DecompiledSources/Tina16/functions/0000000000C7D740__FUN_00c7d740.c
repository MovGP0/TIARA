/* Ghidra address: 00c7d740 */
/* Ghidra symbol: FUN_00c7d740 */


ulonglong FUN_00c7d740(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 unaff_RDI;
  
  piVar1 = (int *)(param_1 + 0x1c + (longlong)param_2 * 4);
  *piVar1 = *piVar1 + 1;
  if ((((*(int *)(param_1 + 0x1c + (longlong)param_2 * 4) < 2) &&
       (*(char *)(param_1 + 0x1b) != '\0')) && (param_2 != 0)) &&
     ((DAT_01ea8138 == '\0' && (DAT_01ea8139 == '\0')))) {
    FUN_00c7d6a0(param_1,0,0,param_2,0x7f);
    FUN_00c7d6d0(param_1,0,0,param_2,0x7f);
    if (0x3b < param_2) {
      FUN_00c7d6a0(param_1,0,0,0x5a,0x7f);
      FUN_00c7d6d0(param_1,0,0,0x5a,0x7f);
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1) & 0xffffffff;
}

