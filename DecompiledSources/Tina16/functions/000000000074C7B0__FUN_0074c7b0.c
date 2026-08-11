/* Ghidra address: 0074c7b0 */
/* Ghidra symbol: FUN_0074c7b0 */


void FUN_0074c7b0(ulonglong param_1,int param_2,int param_3,uint *param_4,int *param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 in_R11;
  bool bVar5;
  
  bVar1 = *(byte *)(param_1 + 0xad);
  if (bVar1 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)in_R11 >> 8),1) << (bVar1 & 0x1f) & 0x18U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    *param_5 = param_2 - *(int *)(param_1 + 0x338);
  }
  else {
    *param_5 = param_3 - *(int *)(param_1 + 0x33c);
  }
  uVar3 = 0;
  if (bVar1 == 1) {
    uVar3 = *(int *)(*(longlong *)(param_1 + 0x330) + 0x9c) + *param_5;
  }
  else if (bVar1 == 2) {
    uVar3 = *(int *)(*(longlong *)(param_1 + 0x330) + 0x9c) - *param_5;
  }
  else if (bVar1 == 3) {
    uVar3 = *(int *)(*(longlong *)(param_1 + 0x330) + 0x98) + *param_5;
  }
  else if (bVar1 == 4) {
    uVar3 = *(int *)(*(longlong *)(param_1 + 0x330) + 0x98) - *param_5;
  }
  *param_4 = uVar3;
  if ((int)uVar3 < (int)*(uint *)(param_1 + 0x34c)) {
    *param_4 = *(uint *)(param_1 + 0x34c);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x350);
    param_1 = (ulonglong)uVar2;
    if ((int)uVar2 < (int)uVar3) {
      *param_4 = uVar2;
    }
  }
  if (uVar3 != *param_4) {
    if (bVar1 < 8) {
      bVar5 = ((int)CONCAT71((int7)(param_1 >> 8),1) << (bVar1 & 0x1f) & 0x14U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      iVar4 = uVar3 - *param_4;
    }
    else {
      iVar4 = *param_4 - uVar3;
    }
    *param_5 = *param_5 + iVar4;
  }
  return;
}

