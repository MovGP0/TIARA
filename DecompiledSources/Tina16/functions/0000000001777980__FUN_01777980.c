/* Ghidra address: 01777980 */
/* Ghidra symbol: FUN_01777980 */


void FUN_01777980(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  char local_19;
  
  FUN_01769700(param_1,param_2);
  iVar2 = FUN_01d31a40(*param_2);
  if (iVar2 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x62) != '\0') {
    bVar1 = *(byte *)(*param_2 + 0x78);
    if (bVar1 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      local_19 = '\0';
      goto LAB_017779dd;
    }
  }
  local_19 = '\x01';
LAB_017779dd:
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_01d311c0(*param_2,&local_19,1);
  }
  if (local_19 != '\0') {
    FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0xb0));
    FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0xe8));
    FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0xf0));
    FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0xf8));
  }
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 0x100));
  }
  return;
}

