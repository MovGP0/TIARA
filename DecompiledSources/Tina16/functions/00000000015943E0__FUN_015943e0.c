/* Ghidra address: 015943e0 */
/* Ghidra symbol: FUN_015943e0 */


short * FUN_015943e0(byte param_1)

{
  short *psVar1;
  short *psVar2;
  
  psVar2 = (short *)0x0;
  if ((((param_1 < 9) && (psVar1 = (short *)(&DAT_0210eeb0)[param_1], psVar1 != (short *)0x0)) &&
      (psVar2 = (short *)0x0, *psVar1 == 0x3d7a)) && (*(uint *)(psVar1 + 0x12) == (uint)param_1)) {
    psVar2 = psVar1;
  }
  return psVar2;
}

