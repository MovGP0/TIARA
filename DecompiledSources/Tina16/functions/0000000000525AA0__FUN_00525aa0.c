/* Ghidra address: 00525aa0 */
/* Ghidra symbol: FUN_00525aa0 */


undefined8 FUN_00525aa0(float param_1,uint param_2)

{
  uint uVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar4 = (double)param_1;
  uVar3 = 0x3f800000;
  for (uVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f); 0 < (int)uVar1;
      uVar1 = uVar1 - 1) {
    for (; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
      dVar4 = dVar4 * dVar4;
    }
    dVar2 = (double)(float)uVar3 * dVar4;
    uVar3 = CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2);
  }
  if ((int)param_2 < 0) {
    dVar4 = (double)(float)uVar3;
    uVar3 = CONCAT44((int)((ulonglong)dVar4 >> 0x20),(float)(1.0 / dVar4));
  }
  return uVar3;
}

