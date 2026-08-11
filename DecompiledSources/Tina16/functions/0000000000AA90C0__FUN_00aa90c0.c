/* Ghidra address: 00aa90c0 */
/* Ghidra symbol: FUN_00aa90c0 */


longlong FUN_00aa90c0(longlong param_1,char param_2,longlong param_3,undefined1 param_4,
                     longlong param_5,longlong param_6)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  bool bVar9;
  longlong local_res8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined1 *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  longlong local_40;
  byte local_31;
  longlong local_30;
  int local_24;
  undefined1 local_20 [4];
  int local_1c;
  
  local_50 = auStack_b8;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_30 = 0;
  local_res8 = param_1;
  puVar2 = auStack_b8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_50;
  }
  local_50 = puVar2;
  FUN_00410e60(local_res8,0);
  lVar6 = FUN_00abedf0(&PTR_FUN_00a8bac8,1,param_3);
  *(longlong *)(local_res8 + 0x80) = lVar6;
  if (param_6 != 0) {
    FUN_00414ad0(lVar6 + 0x70,*(undefined8 *)(param_6 + 0x58));
  }
  *(undefined4 *)(local_res8 + 8) = 1;
  *(undefined4 *)(local_res8 + 0xc) = 1;
  *(undefined1 *)(local_res8 + 0x38) = param_4;
  if (param_5 != 0) {
    iVar8 = *(int *)(param_5 + 0x10);
    local_1c = 0;
    if (-1 < iVar8 + -1) {
      do {
        local_40 = FUN_004aeac0(param_5,local_1c);
        bVar1 = *(byte *)(local_40 + 8);
        if (bVar1 < 0x21) {
          if (bVar1 == 0x20) {
            FUN_00414ad0(*(longlong *)(local_res8 + 0x80) + 0x78,*(undefined8 *)(local_40 + 0x28));
          }
          else if (bVar1 == 5) {
            FUN_00414b50(&local_30,*(undefined8 *)(local_40 + 0x28));
          }
          else if (bVar1 == 6) {
            uVar4 = FUN_00a602d0(*(undefined8 *)(local_40 + 0x28),0,
                                 *(longlong *)(local_res8 + 0x80) + 0x44);
            *(undefined1 *)(*(longlong *)(local_res8 + 0x80) + 0x40) = uVar4;
          }
          else if (bVar1 == 0x15) {
            if (1 < *(int *)(local_40 + 0x18)) {
              *(int *)(local_res8 + 8) = *(int *)(local_40 + 0x18);
            }
          }
          else if ((bVar1 == 0x1e) && (-1 < *(int *)(local_40 + 0x18))) {
            uVar7 = FUN_00a72300(*(int *)(local_40 + 0x18),*(undefined8 *)(local_40 + 0x28));
            *(undefined8 *)(local_res8 + 0x20) = uVar7;
          }
        }
        else if (bVar1 == 0x46) {
          if (1 < *(int *)(local_40 + 0x18)) {
            *(int *)(local_res8 + 0xc) = *(int *)(local_40 + 0x18);
          }
        }
        else if (bVar1 == 0x52) {
          FUN_00414ad0(*(longlong *)(local_res8 + 0x80) + 0x80,*(undefined8 *)(local_40 + 0x28));
        }
        else if ((bVar1 == 0x5e) && (-1 < *(int *)(local_40 + 0x18))) {
          uVar7 = FUN_00a72300(*(int *)(local_40 + 0x18),*(undefined8 *)(local_40 + 0x28));
          *(undefined8 *)(local_res8 + 0x18) = uVar7;
        }
        local_1c = local_1c + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  if (param_6 != 0) {
    uVar7 = FUN_00a53e80(param_6,&local_31);
    if ((char)uVar7 != '\0') {
      if (local_31 < 8) {
        bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << (local_31 & 0x1f) & 0x16U) != 0;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        *(byte *)(local_res8 + 0x38) = local_31;
      }
    }
    if (*(char *)(*(longlong *)(param_3 + 0x18) + 0x60) == '\0') {
      FUN_00a5c200(param_6,local_res8 + 0x138);
    }
    else {
      FUN_00468530(&local_68,0xc0c0c0,0xfffffffffffffffc);
      FUN_00a5c060(param_6,local_res8 + 0x138,&local_68);
    }
    uVar5 = FUN_00a54390(param_6);
    *(undefined4 *)(local_res8 + 0x3c) = uVar5;
    local_98 = FUN_00a543b0(param_6);
    *(undefined4 *)(local_res8 + 0x40) = local_98;
    local_90 = 0;
    local_88 = local_20;
    local_80 = local_res8 + 0xa0;
    FUN_00a57400(local_res8 + 0x138,100,0,*(undefined4 *)(local_res8 + 0x3c));
    cVar3 = FUN_0046c390(local_res8 + 0x408);
    if ((cVar3 != '\0') && (-1 < *(int *)(local_res8 + 0x118))) {
      FUN_00467e90(&local_70,local_res8 + 0x408);
      uVar7 = FUN_00a72300(*(undefined4 *)(local_res8 + 0x118),local_70);
      *(undefined8 *)(local_res8 + 0x18) = uVar7;
    }
    cVar3 = FUN_0046c390(local_res8 + 0x420);
    if ((cVar3 != '\0') && (-1 < *(int *)(local_res8 + 0x11c))) {
      FUN_00467e90(&local_78,local_res8 + 0x420);
      uVar7 = FUN_00a72300(*(undefined4 *)(local_res8 + 0x11c),local_78);
      *(undefined8 *)(local_res8 + 0x20) = uVar7;
    }
    local_24 = FUN_00a55160(param_6);
    if (local_24 != 0x1fffffff) {
      lVar6 = *(longlong *)(local_res8 + 0x80);
      *(undefined1 *)(lVar6 + 0x40) = 1;
      *(int *)(lVar6 + 0x44) = local_24;
    }
    FUN_00a53050(param_6,&local_30);
    if (local_30 != 0) {
      uVar7 = FUN_00a95230(&PTR_FUN_00a83768,1,*(undefined8 *)(local_res8 + 0x80),local_30);
      *(undefined8 *)(local_res8 + 0x90) = uVar7;
      FUN_00a53850(param_6,*(undefined4 *)(local_res8 + 0x3c),*(undefined4 *)(local_res8 + 0x40),
                   local_res8 + 0x44);
    }
    FUN_00a574a0(local_res8 + 0x138,*(undefined4 *)(local_res8 + 0x3c),
                 *(undefined4 *)(local_res8 + 0x40),local_res8 + 0xa0);
    *(undefined4 *)(local_res8 + 0x60) = *(undefined4 *)(local_res8 + 0xd8);
    *(undefined4 *)(local_res8 + 100) = *(undefined4 *)(local_res8 + 0xdc);
    *(undefined4 *)(local_res8 + 0x68) = *(undefined4 *)(local_res8 + 0xe0);
    *(undefined4 *)(local_res8 + 0x5c) = *(undefined4 *)(local_res8 + 0xe4);
    *(undefined1 *)(local_res8 + 0x7d) = 0;
    if (*(char *)(local_res8 + 0x108) != '\0') {
      *(undefined1 *)(local_res8 + 0x7d) = 1;
      *(undefined4 *)(local_res8 + 0x70) = *(undefined4 *)(local_res8 + 0xe8);
    }
    if (*(char *)(local_res8 + 0x10c) != '\0') {
      *(undefined1 *)(local_res8 + 0x7d) = 1;
      *(undefined4 *)(local_res8 + 0x74) = *(undefined4 *)(local_res8 + 0xec);
    }
    if (*(char *)(local_res8 + 0x110) != '\0') {
      *(undefined1 *)(local_res8 + 0x7d) = 1;
      *(undefined4 *)(local_res8 + 0x78) = *(undefined4 *)(local_res8 + 0xf0);
    }
    if (*(char *)(local_res8 + 0x114) != '\0') {
      *(undefined1 *)(local_res8 + 0x7d) = 1;
      *(undefined4 *)(local_res8 + 0x6c) = *(undefined4 *)(local_res8 + 0xf4);
    }
    FUN_00a54fc0(param_6,local_res8 + 0x4c9,local_res8 + 0x4ca,local_res8 + 0x4cb);
    uVar4 = FUN_00a55a50(param_6);
    *(undefined1 *)(local_res8 + 0x7e) = uVar4;
    uVar4 = FUN_00a54090(param_6);
    *(undefined1 *)(local_res8 + 0x7c) = uVar4;
  }
  FUN_00414560(&local_78,2);
  FUN_00460ba0(&local_68);
  FUN_00414480(&local_30);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

