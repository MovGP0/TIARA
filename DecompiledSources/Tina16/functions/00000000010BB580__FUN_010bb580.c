/* Ghidra address: 010bb580 */
/* Ghidra symbol: FUN_010bb580 */


void FUN_010bb580(longlong param_1,longlong *param_2)

{
  byte bVar1;
  bool bVar2;
  
  FUN_01cf0710(param_1,param_2);
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_01d325e0(*param_2,*(undefined8 *)(param_1 + 0x30));
    FUN_01d325e0(*param_2,*(undefined8 *)(param_1 + 0x28));
  }
  else {
    FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 0x30));
    FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 0x28));
  }
  FUN_01d311c0(*param_2,param_1 + 0x38,1);
  return;
}

