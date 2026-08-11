/* Ghidra address: 018124c0 */
/* Ghidra symbol: FUN_018124c0 */


bool FUN_018124c0(longlong param_1)

{
  bool bVar1;
  double dVar2;
  double extraout_XMM0_Qa;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x100) == 0) {
    bVar1 = false;
  }
  else {
    dVar2 = (double)FUN_0058d490(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x100),
                                 *(undefined8 *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xb0) +
                                  (longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0xac) * 8));
    FUN_0040c850(*(double *)(param_1 + 0x38) - dVar2);
    bVar1 = extraout_XMM0_Qa < 1e-06;
  }
  return bVar1;
}

