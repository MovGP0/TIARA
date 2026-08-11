/* Ghidra address: 00abfd20 */
/* Ghidra symbol: FUN_00abfd20 */


longlong FUN_00abfd20(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
                     longlong param_5)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong local_res8;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_38;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_40 = auStack_128;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_res8 = param_1;
  puVar2 = auStack_128;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_40;
  }
  local_40 = puVar2;
  local_108 = param_5;
  FUN_00ac2f70(local_res8,0,param_3,param_4);
  if (*(char *)(local_res8 + 0x40) == '\0') {
    *(undefined1 *)(local_res8 + 0x40) = 2;
  }
  *(undefined4 *)(local_res8 + 0xa8) = 2;
  *(undefined1 *)(local_res8 + 0xb0) = 2;
  *(undefined4 *)(local_res8 + 0xac) = 0x1fffffff;
  iVar5 = *(int *)(param_4 + 0x10);
  local_24 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_38 = FUN_004aeac0(param_4,local_24);
      bVar1 = *(byte *)(local_38 + 8);
      if (bVar1 < 0x37) {
        if (bVar1 == 0x36) {
          *(undefined1 *)(local_res8 + 0xb2) = 1;
        }
        else if (bVar1 == 3) {
          FUN_0043e1a0(&local_20,*(undefined8 *)(local_38 + 0x28));
          iVar4 = FUN_00416db0(local_20,L"left");
          if (iVar4 == 0) {
            *(undefined1 *)(local_res8 + 0xb0) = 1;
          }
          else {
            iVar4 = FUN_00416db0(local_20,L"right");
            if (iVar4 == 0) {
              *(undefined1 *)(local_res8 + 0xb0) = 3;
            }
          }
        }
        else if ((bVar1 == 0x13) &&
                (cVar3 = FUN_00a602d0(*(undefined8 *)(local_38 + 0x28),0,local_res8 + 0xac),
                cVar3 != '\0')) {
          FUN_00468530(&local_90,*(undefined4 *)(local_res8 + 0xac),0xfffffffffffffffc);
          FUN_00a52f40(param_5,&local_90,7);
        }
      }
      else if (bVar1 == 0x4b) {
        iVar4 = *(int *)(local_38 + 0x18);
        if ((0 < iVar4) && (iVar4 < 0x15)) {
          *(int *)(local_res8 + 0xa8) = iVar4;
        }
      }
      else if ((bVar1 == 0x5e) && (0 < *(int *)(local_38 + 0x18))) {
        iVar4 = FUN_004170c0(&DAT_00ac034c,*(undefined8 *)(local_38 + 0x28),1);
        if (iVar4 < 1) {
          FUN_00468530(&local_78,*(undefined4 *)(local_38 + 0x18),0xfffffffffffffffc);
          FUN_00a52f40(param_5,&local_78,0x26);
        }
        else if (*(int *)(local_38 + 0x18) < 0x65) {
          FUN_0043f750(&local_48,*(int *)(local_38 + 0x18));
          FUN_00416ad0(&local_48,&DAT_00ac034c);
          FUN_00468a10(&local_60,local_48);
          FUN_00a52f40(param_5,&local_60,0x26);
        }
      }
      local_24 = local_24 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  cVar3 = FUN_00a55480(param_5);
  *(bool *)(local_res8 + 0xb1) = cVar3 == '\0';
  FUN_00468530(&local_a8,*(undefined4 *)(local_res8 + 0xa8),0xfffffffffffffffc);
  FUN_00a52f40(param_5,&local_a8,0x27);
  local_28 = FUN_00a551d0(param_5);
  if (local_28 != 0x1fffffff) {
    *(int *)(local_res8 + 0xac) = local_28;
  }
  cVar3 = FUN_0046c390(param_5 + 0xd8);
  if ((cVar3 != '\0') && (*(char *)(param_5 + 0x6c4) != '\0')) {
    FUN_00468a10(&local_c0,L"left");
    cVar3 = FUN_0046f320(param_5 + 0xd8,&local_c0);
    if (cVar3 == '\0') {
      FUN_00468a10(&local_d8,L"right");
      cVar3 = FUN_0046f320(param_5 + 0xd8,&local_d8);
      if (cVar3 == '\0') {
        FUN_00468a10(&local_f0,L"center");
        cVar3 = FUN_0046f320(param_5 + 0xd8,&local_f0);
        if (cVar3 != '\0') {
          *(undefined1 *)(local_res8 + 0xb0) = 2;
        }
      }
      else {
        *(undefined1 *)(local_res8 + 0xb0) = 3;
      }
    }
    else {
      *(undefined1 *)(local_res8 + 0xb0) = 1;
    }
  }
  FUN_00417840(&local_f0,&DAT_004013d8,7);
  FUN_00414480(&local_48);
  FUN_00414480(&local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

