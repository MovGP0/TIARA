/* Ghidra address: 00537480 */
/* Ghidra symbol: FUN_00537480 */


undefined8 FUN_00537480(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_005360d0(param_1);
  if ((cVar1 == '\0') &&
     ((lVar2 = FUN_00536180(param_1), lVar2 == 0 ||
      (pbVar3 = (byte *)FUN_00536180(param_1),
      0x1f < *pbVar3 || (1 << (*pbVar3 & 0x1f) & 0x1020eU) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

