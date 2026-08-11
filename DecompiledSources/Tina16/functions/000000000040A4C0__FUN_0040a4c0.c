/* Ghidra address: 0040a4c0 */
/* Ghidra symbol: FUN_0040a4c0 */


double FUN_0040a4c0(longlong *param_1)

{
  longlong lVar1;
  ushort uVar2;
  double dVar3;
  
  uVar2 = FUN_0040a3f0(param_1,4);
  lVar1 = *param_1;
  if ((uVar2 & 0x7fff) == 0x7fff) {
    if (lVar1 == -0x8000000000000000) {
      dVar3 = INFINITY;
    }
    else {
      dVar3 = -NAN;
    }
  }
  else {
    dVar3 = (double)lVar1;
    if (lVar1 < 0) {
      dVar3 = dVar3 + 1.8446744073709552e+19;
    }
    dVar3 = dVar3 / 9.223372036854776e+18;
  }
  return dVar3;
}

