/* Ghidra address: 017789f0 */
/* Ghidra symbol: FUN_017789f0 */


void FUN_017789f0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  bool bVar2;
  
  FUN_01d31630(*param_2,*(undefined8 *)(param_1 + 0x10));
  FUN_01d31630(*param_2,*(undefined8 *)(param_1 + 0x18));
  FUN_01d31630(*param_2,*(undefined8 *)(param_1 + 0x20));
  FUN_01d31630(*param_2,*(undefined8 *)(param_1 + 0x28));
  FUN_01d311c0(*param_2,param_1 + 8,4);
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x21U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0x30));
    FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0x38));
    FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0x40));
    FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0x48));
  }
  return;
}

