/* Ghidra address: 00525b10 */
/* Ghidra symbol: FUN_00525b10 */


double FUN_00525b10(double param_1,uint param_2)

{
  uint uVar1;
  double dVar2;
  
  dVar2 = 1.0;
  for (uVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f); 0 < (int)uVar1;
      uVar1 = uVar1 - 1) {
    for (; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
      param_1 = param_1 * param_1;
    }
    dVar2 = dVar2 * param_1;
  }
  if ((int)param_2 < 0) {
    dVar2 = 1.0 / dVar2;
  }
  return dVar2;
}

