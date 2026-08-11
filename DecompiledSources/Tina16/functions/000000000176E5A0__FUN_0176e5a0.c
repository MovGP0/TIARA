/* Ghidra address: 0176e5a0 */
/* Ghidra symbol: FUN_0176e5a0 */


void FUN_0176e5a0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  char local_11;
  longlong local_10;
  
  local_10 = 0;
  FUN_01769700(param_1,param_2);
  iVar2 = FUN_01d31a40(*param_2);
  if (iVar2 != 0) goto code_r0x0176e803;
  if (*(char *)(param_1 + 0x62) == '\0') {
LAB_0176e612:
    local_11 = '\x01';
  }
  else {
    bVar1 = *(byte *)(*param_2 + 0x78);
    if (bVar1 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) goto LAB_0176e612;
    local_11 = '\0';
  }
  FUN_01d311c0(*param_2,&local_11,1);
  if (local_11 != '\0') {
    bVar1 = *(byte *)(*param_2 + 0x78);
    if (bVar1 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0xb8));
    }
    else {
      FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 0xb8));
    }
    FUN_01d311c0(*param_2,param_1 + 0x115,1);
  }
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x3dU) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x100));
  }
  else {
    FUN_00414b50(&local_10,*(undefined8 *)(param_1 + 0x100));
    if (local_10 != 0) {
      iVar2 = FUN_004170c0(&DAT_0176e848,local_10,1);
      if (0 < iVar2) {
        uVar3 = FUN_004170c0(&DAT_0176e848,local_10,1);
        FUN_00416e20(&local_10,1,uVar3);
      }
    }
    FUN_01d313e0(*param_2,local_10);
  }
  FUN_01d311c0(*param_2,param_1 + 0x110,1);
  FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 0xc0));
  FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 200));
  FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x108));
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x21U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_01d311c0(*param_2,param_1 + 0xa8,8);
  }
code_r0x0176e803:
  FUN_00414480(&local_10);
  return;
}

