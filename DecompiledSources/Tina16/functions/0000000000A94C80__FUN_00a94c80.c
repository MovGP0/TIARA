/* Ghidra address: 00a94c80 */
/* Ghidra symbol: FUN_00a94c80 */


longlong FUN_00a94c80(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,undefined8 param_6)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  int iVar6;
  longlong local_res8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  int local_94;
  undefined1 *local_90;
  int local_84;
  char local_7d;
  int local_7c;
  undefined8 local_78;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  longlong local_58;
  longlong local_48;
  short *local_40;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_90 = auStack_c8;
  local_40 = (short *)0x0;
  local_20[0] = 0;
  local_30 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar2 = auStack_c8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_90;
  }
  local_90 = puVar2;
  local_a8 = param_5;
  local_a0 = param_6;
  FUN_00ac2090(local_res8,0,param_3,param_4);
  local_94 = *(int *)(param_5 + 0x10) + -1;
  local_34 = 0;
  iVar6 = *(int *)(param_5 + 0x10);
  if (-1 < local_94) {
    do {
      local_94 = iVar6;
      local_58 = FUN_004aeac0(param_5,local_34);
      bVar1 = *(byte *)(local_58 + 8);
      if (bVar1 < 0x34) {
        if (bVar1 == 0x33) {
          FUN_00a74eb0(*(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0x298),
                       *(undefined8 *)(local_58 + 0x28),local_res8);
        }
        else if (bVar1 == 2) {
          *(undefined1 *)(local_res8 + 0x1aa) = 1;
        }
        else if (bVar1 == 4) {
          FUN_00ac2dc0(local_res8,*(undefined4 *)(local_58 + 0x30),*(undefined8 *)(local_58 + 0x28))
          ;
          FUN_00414ad0(local_res8 + 0xe8,*(undefined8 *)(local_res8 + 200));
        }
        else if (bVar1 == 8) {
          local_64 = *(int *)(local_58 + 0x18);
          local_68 = local_64;
          if (local_64 < 0) {
            local_68 = 0;
          }
          if (local_68 < 10) {
            local_6c = local_68;
          }
          else {
            local_6c = 10;
          }
          *(int *)(local_res8 + 0xf4) = local_6c;
        }
        else if (bVar1 == 0x24) {
          *(undefined1 *)(local_res8 + 0x1bc) = 1;
        }
      }
      else if (bVar1 == 0x4e) {
        FUN_00414480(local_20);
        local_60 = *(undefined8 *)(local_58 + 0x28);
        FUN_0043ea00(local_20,local_60);
        FUN_00414ad0(local_res8 + 400,local_20[0]);
        FUN_00414480(local_20);
      }
      else if (bVar1 == 0x56) {
        *(undefined1 *)(local_res8 + 0x1a8) = 2;
      }
      else if (bVar1 == 0x58) {
        *(undefined1 *)(local_res8 + 0x1bd) = 1;
        FUN_00414480(&local_30);
        local_78 = *(undefined8 *)(local_58 + 0x28);
        FUN_0043ea00(&local_30,local_78);
        FUN_00414480(&local_28);
        FUN_0043e5a0(&local_28,local_30);
        FUN_00414b50(&local_40,local_28);
        FUN_00414480(&local_28);
        FUN_00414480(&local_30);
        local_7c = 0;
        if (local_40 != (short *)0x0) {
          local_7c = *(int *)(local_40 + -2);
        }
        if ((1 < local_7c) && (*local_40 == 0x23)) {
          FUN_00416e20(&local_40,1,1);
        }
        FUN_00414ad0(local_res8 + 0x1c0,local_40);
      }
      local_34 = local_34 + 1;
      local_94 = local_94 + -1;
      iVar6 = local_94;
    } while (local_94 != 0);
  }
  if ((*(int *)(local_res8 + 0xf4) == 0) &&
     ((cVar3 = FUN_00a554f0(param_6), cVar3 == '\0' ||
      (cVar3 = FUN_00a54aa0(param_6), cVar3 == '\0')))) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)(local_res8 + 0xf0) = uVar4;
  local_48 = 0;
  iVar6 = *(int *)(param_5 + 0x10);
  local_84 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar5 = FUN_00a72910(param_5,local_84);
      if (*(char *)(lVar5 + 8) == 'T') {
        local_7d = '\x01';
        local_48 = FUN_00a72910(param_5,local_84);
        goto code_r0x00a950f0;
      }
      local_84 = local_84 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_7d = '\0';
code_r0x00a950f0:
  if (local_7d != '\0') {
    FUN_00414ad0(local_res8 + 0xe8,*(undefined8 *)(local_48 + 0x28));
  }
  FUN_00414480(&local_40);
  FUN_00414560(&local_30,3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

