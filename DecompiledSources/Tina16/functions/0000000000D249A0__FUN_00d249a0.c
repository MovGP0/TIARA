/* Ghidra address: 00d249a0 */
/* Ghidra symbol: FUN_00d249a0 */


void FUN_00d249a0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_88 [40];
  char *local_60;
  longlong local_58;
  char local_49;
  byte local_3a [4];
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31 [8];
  byte local_29;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x40) + 0x7c);
  if (bVar1 < 8) {
    local_49 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8),1) <<
                (bVar1 & 0x1f) & 0xf0U) != 0;
  }
  else {
    local_49 = false;
  }
  local_58 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x68);
  local_60 = (char *)(local_58 + 0x200);
  FUN_0040d200(local_3a,0x12,0);
  iVar4 = *(int *)(param_1 + 0x50);
  if (8 < iVar4) {
    iVar4 = 8;
  }
  FUN_00409a70(*(undefined8 *)(param_1 + 0x48),local_3a,(longlong)iVar4);
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x40) + 0x7c);
  if (bVar1 < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8),1) <<
             (bVar1 & 0x1f) & 0x22U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    local_35 = local_3a[0] ^ local_3a[2] ^ 0x81;
    local_34 = local_3a[0] ^ local_3a[3] ^ local_36 ^ 0x42;
    local_33 = local_3a[1] ^ local_3a[2] ^ local_36 ^ 0x24;
    local_32 = local_3a[1] ^ local_3a[3] ^ 0x18;
    FUN_00409a70(local_3a,local_31,9);
  }
  else {
    if (*(int *)(param_1 + 0x50) < 9) {
      FUN_00409a70(local_3a,local_31,9);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x50) + -8;
      if (8 < iVar4) {
        iVar4 = 8;
      }
      FUN_00409a70(*(longlong *)(param_1 + 0x48) + 8,local_31,(longlong)iVar4);
    }
    iVar4 = 8;
    pbVar3 = local_3a;
    do {
      local_32 = local_32 ^ *pbVar3;
      local_29 = local_29 ^ pbVar3[9];
      pbVar3 = pbVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00409a70(local_31,local_60,8);
  local_60 = (char *)((longlong)local_60 + 8);
  iVar4 = 9;
  pbVar3 = local_3a;
  do {
    bVar1 = FUN_00d24980(auStack_88,*pbVar3);
    *pbVar3 = bVar1;
    pbVar3 = pbVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x78);
  iVar2 = 1;
  if (0 < iVar4) {
    do {
      iVar5 = 9;
      pbVar3 = local_3a;
      do {
        bVar1 = FUN_00d24990(auStack_88,*pbVar3);
        *pbVar3 = bVar1;
        bVar1 = FUN_00d24990(auStack_88,pbVar3[9]);
        pbVar3[9] = bVar1;
        pbVar3 = pbVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar5 = 0;
      pbVar3 = local_3a;
      do {
        if (local_49 == '\0') {
          *local_60 = *pbVar3 + *(char *)(local_58 +
                                         (ulonglong)*(byte *)(local_58 + (iVar2 * 0x12 + iVar5 + 1))
                                         );
        }
        else {
          *local_60 = local_3a[(iVar5 + iVar2 * 2 + -1) % 9] +
                      *(char *)(local_58 +
                               (ulonglong)*(byte *)(local_58 + (iVar2 * 0x12 + iVar5 + 1)));
        }
        local_60 = local_60 + 1;
        iVar5 = iVar5 + 1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != 8);
      iVar5 = 0;
      pbVar3 = local_31;
      do {
        if (local_49 == '\0') {
          *local_60 = *pbVar3 + *(char *)(local_58 +
                                         (ulonglong)
                                         *(byte *)(local_58 + (iVar2 * 0x12 + iVar5 + 10)));
        }
        else {
          *local_60 = local_31[(iVar5 + iVar2 * 2) % 9] +
                      *(char *)(local_58 +
                               (ulonglong)*(byte *)(local_58 + (iVar2 * 0x12 + iVar5 + 10)));
        }
        local_60 = local_60 + 1;
        iVar5 = iVar5 + 1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != 8);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0040d200(local_3a,0x12,0);
  return;
}

