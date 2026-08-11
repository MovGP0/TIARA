/* Ghidra address: 00526c50 */
/* Ghidra symbol: FUN_00526c50 */


double FUN_00526c50(double param_1)

{
  bool bVar1;
  char cVar2;
  double dVar3;
  double local_res8 [4];
  
  local_res8[0] = param_1;
  cVar2 = FUN_00458370(local_res8);
  if ((byte)(cVar2 - 4U) < 2) {
    dVar3 = local_res8[0];
    if (local_res8[0] < 0.0) {
      dVar3 = -local_res8[0];
    }
    if (dVar3 <= 23.0) {
      if (1.81458605194507e-05 <= dVar3) {
        if (0.34657359027997264 <= dVar3) {
          dVar3 = (double)FUN_0040af80(dVar3 * 2.0);
          dVar3 = 1.0 - 2.0 / (dVar3 + 1.0);
        }
        else {
          dVar3 = (double)FUN_0040b280(dVar3 * 2.0);
          dVar3 = dVar3 / (dVar3 + 2.0);
        }
      }
      else {
        dVar3 = dVar3 - dVar3 * dVar3 * dVar3 * 0.3333333333333333;
      }
    }
    else {
      dVar3 = 1.0;
    }
    bVar1 = local_res8[0] < 0.0;
    local_res8[0] = dVar3;
    if (bVar1) {
      local_res8[0] = -dVar3;
    }
  }
  return local_res8[0];
}

