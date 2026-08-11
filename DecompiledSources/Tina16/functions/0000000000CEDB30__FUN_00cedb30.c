/* Ghidra address: 00cedb30 */
/* Ghidra symbol: FUN_00cedb30 */


void FUN_00cedb30(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_00416ad0(param_1 + 0xe8,*(undefined8 *)(param_1 + 0xe0));
  local_a4 = param_2;
  if (*(int *)(param_1 + 0xdc) < param_2) {
    local_a4 = *(int *)(param_1 + 0xdc) + 1;
  }
  iVar4 = *(int *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  iVar5 = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0xe0) + -4);
  }
  iVar5 = iVar5 + 2;
  FUN_00416780(local_40,*(undefined2 *)(param_1 + 0x138));
  local_50 = &DAT_00cee268;
  local_48 = &DAT_00cee278;
  iVar3 = FUN_00874bb0(local_40[0],&local_50,1,0);
  if (iVar3 == 0) {
    for (; iVar4 < local_a4; iVar4 = iVar4 + 1) {
      if (*(char *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar4) == ' ') {
        FUN_00414b50(local_30,&DAT_00cee288);
      }
      else {
        cVar2 = FUN_00879350(*(undefined8 *)(param_1 + 0xd0),iVar4,*(undefined8 *)(param_1 + 200));
        if ((cVar2 == '\0') ||
           (cVar2 = FUN_00879350(*(undefined8 *)(param_1 + 0xd0),iVar4,
                                 *(undefined8 *)(param_1 + 0xc0)), cVar2 != '\0')) {
          FUN_0043fba0(&local_58,*(undefined1 *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar4),2)
          ;
          FUN_00416ba0(local_30,&DAT_00cee298,local_58);
        }
        else {
          FUN_00416780(local_30,CONCAT62((int6)(short)((uint)iVar4 >> 0x10),
                                         (ushort)*(byte *)(*(longlong *)(param_1 + 0xd0) +
                                                          (longlong)iVar4)));
        }
      }
      lVar1 = local_30[0];
      iVar3 = 0;
      if (local_30[0] != 0) {
        iVar3 = *(int *)(local_30[0] + -4);
      }
      if (0x4b < iVar5 + iVar3) {
        FUN_00416cd0(param_1 + 0xe8,5,*(undefined8 *)(param_1 + 0xe8),
                     *(undefined8 *)(param_1 + 0xb8),&DAT_00cee2a8,&DAT_00cee2bc,
                     *(undefined8 *)(param_1 + 0xe0));
        iVar5 = 0;
        if (*(longlong *)(param_1 + 0xe0) != 0) {
          iVar5 = *(int *)(*(longlong *)(param_1 + 0xe0) + -4);
        }
        iVar5 = iVar5 + 2;
      }
      FUN_00416ad0(param_1 + 0xe8,local_30[0]);
      iVar3 = 0;
      if (lVar1 != 0) {
        iVar3 = *(int *)(lVar1 + -4);
      }
      iVar5 = iVar5 + iVar3;
    }
  }
  else if (iVar3 == 1) {
    for (; iVar4 < local_a4; iVar4 = iVar4 + 3) {
      if (0x4b < iVar5 + 4) {
        FUN_00416cd0(param_1 + 0xe8,5,*(undefined8 *)(param_1 + 0xe8),
                     *(undefined8 *)(param_1 + 0xb8),&DAT_00cee2a8,&DAT_00cee2bc,
                     *(undefined8 *)(param_1 + 0xe0));
        iVar5 = 0;
        if (*(longlong *)(param_1 + 0xe0) != 0) {
          iVar5 = *(int *)(*(longlong *)(param_1 + 0xe0) + -4);
        }
        iVar5 = iVar5 + 2;
      }
      *(uint *)(param_1 + 0xb4) = (uint)*(byte *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar4);
      if (local_a4 - iVar4 == 1) {
        FUN_00416780(&local_60,(&DAT_01eb1a38)[(int)(*(uint *)(param_1 + 0xb4) >> 2)]);
        FUN_00416780(&local_68,(&DAT_01eb1a38)[(int)((*(uint *)(param_1 + 0xb4) & 3) << 4)]);
        FUN_00416cd0(param_1 + 0xe8,4,*(undefined8 *)(param_1 + 0xe8),local_60,local_68,
                     &LAB_00cee2cc);
      }
      else if (local_a4 - iVar4 == 2) {
        *(uint *)(param_1 + 0xb0) =
             (uint)*(byte *)(*(longlong *)(param_1 + 0xd0) + (longlong)(iVar4 + 1));
        FUN_00416780(&local_70,(&DAT_01eb1a38)[(int)(*(uint *)(param_1 + 0xb4) >> 2)]);
        FUN_00416780(&local_78,
                     (&DAT_01eb1a38)
                     [(int)((*(uint *)(param_1 + 0xb4) & 3) * 0x10 +
                           (*(uint *)(param_1 + 0xb0) >> 4))]);
        FUN_00416780(&local_80,(&DAT_01eb1a38)[(int)((*(uint *)(param_1 + 0xb0) & 0xf) * 4)]);
        FUN_00416cd0(param_1 + 0xe8,5,*(undefined8 *)(param_1 + 0xe8),local_70,local_78,local_80,
                     &DAT_00cee298);
      }
      else {
        *(uint *)(param_1 + 0xb0) =
             (uint)*(byte *)(*(longlong *)(param_1 + 0xd0) + (longlong)(iVar4 + 1));
        *(uint *)(param_1 + 0xac) =
             (uint)*(byte *)(*(longlong *)(param_1 + 0xd0) + (longlong)(iVar4 + 2));
        FUN_00416780(&local_88,(&DAT_01eb1a38)[(int)(*(uint *)(param_1 + 0xb4) >> 2)]);
        FUN_00416780(&local_90,
                     (&DAT_01eb1a38)
                     [(int)((*(uint *)(param_1 + 0xb4) & 3) * 0x10 +
                           (*(uint *)(param_1 + 0xb0) >> 4))]);
        FUN_00416780(&local_98,
                     (&DAT_01eb1a38)
                     [(int)((*(uint *)(param_1 + 0xb0) & 0xf) * 4 + (*(uint *)(param_1 + 0xac) >> 6)
                           )]);
        FUN_00416780(&local_a0,(&DAT_01eb1a38)[(int)(*(uint *)(param_1 + 0xac) & 0x3f)]);
        FUN_00416cd0(param_1 + 0xe8,5,*(undefined8 *)(param_1 + 0xe8),local_88,local_90,local_98,
                     local_a0);
      }
      iVar5 = iVar5 + 4;
    }
  }
  FUN_00416ad0(param_1 + 0xe8,*(undefined8 *)(param_1 + 0xb8));
  FUN_00414560(&local_a0,10);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}

