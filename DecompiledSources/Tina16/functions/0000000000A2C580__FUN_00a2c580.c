/* Ghidra address: 00a2c580 */
/* Ghidra symbol: FUN_00a2c580 */


void FUN_00a2c580(byte *param_1,undefined8 *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int *param_9,int *param_10,int *param_11,int *param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  iVar4 = *(int *)(param_1 + 4);
  bVar3 = *param_1;
  if (bVar3 < 4) {
    if ((bVar3 == 3) || (bVar3 == 0)) {
      iVar4 = 0;
    }
    else if (bVar3 == 1) {
      iVar4 = (param_5 - param_7) / 2;
    }
    else {
      if (bVar3 == 2) goto LAB_00a2c621;
LAB_00a2c640:
      iVar4 = 0;
    }
  }
  else if (bVar3 == 4) {
LAB_00a2c621:
    iVar4 = param_5 - param_7;
  }
  else if (bVar3 == 5) {
    iVar4 = ((param_5 - param_7) * iVar4) / 100;
  }
  else if (bVar3 != 6) goto LAB_00a2c640;
  *param_9 = iVar4 - param_3;
  local_20 = (int)uVar2;
  local_28 = (int)uVar1;
  if (param_1[8] == 0) {
    *param_11 = *param_9;
    if ((local_28 < *param_9 + param_7) && (*param_9 < local_20)) {
      *param_11 = *param_11 + 1;
    }
  }
  else {
    iVar4 = local_28 - *param_9;
    if (iVar4 < param_7) {
      if (iVar4 < 0) {
        *param_9 = local_28 - (param_7 - -iVar4 % param_7);
      }
    }
    else {
      *param_9 = local_28 - iVar4 % param_7;
    }
    *param_11 = local_20;
  }
  bVar3 = param_1[0xc];
  iVar4 = *(int *)(param_1 + 0x10);
  if (bVar3 < 4) {
    if ((bVar3 == 3) || (bVar3 == 0)) {
      iVar4 = 0;
      goto LAB_00a2c759;
    }
    if (bVar3 == 1) {
      iVar4 = (param_6 - param_8) / 2;
      goto LAB_00a2c759;
    }
    if (bVar3 != 2) goto LAB_00a2c757;
  }
  else if (bVar3 != 4) {
    if (bVar3 == 5) {
      iVar4 = ((param_6 - param_8) * iVar4) / 100;
      goto LAB_00a2c759;
    }
    if (bVar3 == 6) goto LAB_00a2c759;
LAB_00a2c757:
    iVar4 = 0;
    goto LAB_00a2c759;
  }
  iVar4 = param_6 - param_8;
LAB_00a2c759:
  *param_10 = iVar4 - param_4;
  local_24 = (int)((ulonglong)uVar1 >> 0x20);
  local_1c = (int)((ulonglong)uVar2 >> 0x20);
  if (param_1[0x14] == 0) {
    *param_12 = *param_10;
    if ((local_24 < *param_10 + param_8) && (*param_10 < local_1c)) {
      *param_12 = *param_12 + 1;
    }
  }
  else {
    iVar4 = local_24 - *param_10;
    if (iVar4 < param_8) {
      if (iVar4 < 0) {
        *param_10 = local_24 - (param_8 - -iVar4 % param_8);
      }
    }
    else {
      *param_10 = local_24 - iVar4 % param_8;
    }
    *param_12 = local_1c;
  }
  return;
}

