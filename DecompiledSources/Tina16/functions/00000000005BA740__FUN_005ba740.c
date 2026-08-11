/* Ghidra address: 005ba740 */
/* Ghidra symbol: FUN_005ba740 */


double FUN_005ba740(longlong *param_1)

{
  double dVar1;
  
  dVar1 = (double)*param_1 * 0.0001;
  if (dVar1 <= 922337203685477.0) {
    if (dVar1 < -922337203685477.0) {
      dVar1 = -922337203685477.0;
    }
  }
  else {
    dVar1 = 922337203685477.0;
  }
  return dVar1;
}

