/* Ghidra address: 0132def0 */
/* Ghidra symbol: FUN_0132def0 */


short * FUN_0132def0(short param_1,short param_2)

{
  short *psVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    FUN_0132c0e0(L"matrix dimension n1 must be positive integer",4,0);
  }
  else if (param_2 == 0) {
    FUN_0132c0e0(L"matrix dimension n2 must be positive integer",4,0);
  }
  psVar1 = (short *)FUN_00409570(0x20);
  if (psVar1 == (short *)0x0) {
    FUN_0132c0e0(L"failed to allocate space for matrix struct",8,0);
  }
  lVar2 = FUN_0132c150(param_1 * param_2);
  if (lVar2 == 0) {
    FUN_004095f0(psVar1);
    psVar1 = (short *)0x0;
    FUN_0132c0e0(L"failed to allocate space for block",8,0);
  }
  *(undefined8 *)(psVar1 + 4) = *(undefined8 *)(lVar2 + 8);
  *psVar1 = param_1;
  psVar1[1] = param_2;
  psVar1[2] = param_2;
  *(longlong *)(psVar1 + 8) = lVar2;
  psVar1[0xc] = 1;
  psVar1[0xd] = 0;
  return psVar1;
}

