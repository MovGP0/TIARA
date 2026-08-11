/* Ghidra address: 0044c0a0 */
/* Ghidra symbol: FUN_0044c0a0 */


undefined8 * FUN_0044c0a0(undefined8 *param_1)

{
  short *psVar1;
  
  FUN_00414ad0(param_1);
  psVar1 = (short *)FUN_00416740(*param_1);
  while( true ) {
    if (*psVar1 == 0) {
      return param_1;
    }
    if (*psVar1 == 0x5f) break;
    psVar1 = psVar1 + 1;
  }
  *psVar1 = 0x2d;
  return param_1;
}

