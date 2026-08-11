/* Ghidra address: 01cc57d0 */
/* Ghidra symbol: FUN_01cc57d0 */


double FUN_01cc57d0(longlong param_1)

{
  double dVar1;
  
  dVar1 = (double)(**(code **)(**(longlong **)(param_1 + 0x58) + 0x60))
                            (*(longlong **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x2c));
  return *(double *)(param_1 + 0x60) - dVar1;
}

