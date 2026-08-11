/* Ghidra address: 00526ad0 */
/* Ghidra symbol: FUN_00526ad0 */


ulonglong FUN_00526ad0(float param_1)

{
  char cVar1;
  double dVar2;
  ulonglong uVar3;
  float local_res8 [8];
  
  local_res8[0] = param_1;
  cVar1 = FUN_00458160(local_res8);
  if ((byte)(cVar1 - 4U) < 2) {
    dVar2 = (double)local_res8[0];
    if (local_res8[0] < 0.0) {
      dVar2 = -dVar2;
    }
    if (dVar2 <= 23.0) {
      if (1.81458605194507e-05 <= dVar2) {
        if (0.34657359027997264 <= dVar2) {
          dVar2 = (double)FUN_0040af80(dVar2 * 2.0);
          dVar2 = 1.0 - 2.0 / (dVar2 + 1.0);
          uVar3 = CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2);
        }
        else {
          dVar2 = (double)FUN_0040b280(dVar2 * 2.0);
          dVar2 = dVar2 / (dVar2 + 2.0);
          uVar3 = CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2);
        }
      }
      else {
        dVar2 = dVar2 - dVar2 * dVar2 * dVar2 * 0.3333333333333333;
        uVar3 = CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2);
      }
    }
    else {
      uVar3 = 0x3f800000;
    }
    if (local_res8[0] < 0.0) {
      uVar3 = uVar3 ^ 0x8000000080000000;
    }
  }
  else {
    uVar3 = (ulonglong)(uint)local_res8[0];
  }
  return uVar3;
}

