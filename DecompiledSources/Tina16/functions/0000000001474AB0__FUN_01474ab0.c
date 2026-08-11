/* Ghidra address: 01474ab0 */
/* Ghidra symbol: FUN_01474ab0 */


void FUN_01474ab0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (*(char *)(*param_2 + 0x78) == '\0') {
    FUN_01d325e0(*param_2,*(undefined8 *)(param_1 + 0x18));
    FUN_01d325e0(*param_2,*(undefined8 *)(param_1 + 8));
  }
  else {
    FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 0x18));
    FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 8));
  }
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_01d31630(*param_2,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x20));
  }
  FUN_01d311c0(*param_2,param_1 + 0x28,1);
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x21U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_01d325e0(*param_2,*(undefined8 *)(param_1 + 0x10));
  }
  if (*(char *)(*param_2 + 0x78) == '\0') {
    FUN_01d31630(*param_2,*(undefined8 *)(param_1 + 0x50));
  }
  return;
}

