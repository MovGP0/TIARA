/* Ghidra address: 0040c660 */
/* Ghidra symbol: FUN_0040c660 */


double FUN_0040c660(double param_1)

{
  byte bVar1;
  double dVar2;
  double local_res8 [4];
  
  local_res8[0] = param_1;
  bVar1 = FUN_0040a2e0(local_res8);
  if (1 < bVar1) {
    if (bVar1 == 6) {
      param_1 = 1.5707963267948966;
    }
    else if (bVar1 == 7) {
      param_1 = -1.5707963267948966;
    }
    else if ((bVar1 != 8) && (local_res8[0] != 0.0)) {
      dVar2 = (double)FUN_0040c850(local_res8[0]);
      if (dVar2 <= 1.0) {
        param_1 = (double)FUN_0040c5c0();
      }
      else {
        param_1 = (double)FUN_0040c5c0(1.0 / dVar2);
        param_1 = 1.5707963267948966 - param_1;
      }
      if (local_res8[0] < 0.0) {
        param_1 = -param_1;
      }
    }
  }
  return param_1;
}

