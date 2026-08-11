/* Ghidra address: 00deac50 */
/* Ghidra symbol: FUN_00deac50 */


ulonglong FUN_00deac50(undefined1 *param_1,undefined8 param_2,longlong param_3,double *param_4)

{
  undefined8 unaff_RDI;
  
  if (*(char *)(param_3 + 0x328) == '\0') {
    FUN_016ddcd0(param_2,param_3,*(ushort *)(param_1 + 4) + 1,*(ushort *)(param_1 + 4) + 2,param_4,1
                );
  }
  else {
    FUN_016de220(param_2,param_3,*param_1,param_1[1],param_4,1);
    if (*(char *)(param_3 + 0xed6) != '\0') {
      *param_4 = *param_4 * 2.0;
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1) & 0xffffffff;
}

