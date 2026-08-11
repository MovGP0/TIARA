/* Ghidra address: 00aa3ae0 */
/* Ghidra symbol: FUN_00aa3ae0 */


longlong FUN_00aa3ae0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,char param_6,char param_7,short param_8,undefined4 param_9,
                     int param_10)

{
  undefined1 *puVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong local_res8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  ushort *local_38;
  ushort *local_30;
  longlong local_28;
  char local_19;
  
  local_40 = auStack_b8;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_b8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  local_98 = param_5;
  FUN_00a9c430(local_res8,0,param_3,param_4);
  local_19 = FUN_00a543d0(param_5);
  if (local_19 != '\0') {
    *(char *)(local_res8 + 0x568) = local_19;
  }
  if (param_6 == -0x71) {
    *(undefined1 *)(local_res8 + 0x560) = 1;
    if (local_19 == '\0') {
      if (param_8 == 0x41) {
        *(undefined1 *)(local_res8 + 0x568) = 8;
      }
      else if (param_8 == 0x49) {
        *(undefined1 *)(local_res8 + 0x568) = 9;
      }
      else if (param_8 == 0x61) {
        *(undefined1 *)(local_res8 + 0x568) = 4;
      }
      else if (param_8 == 0x69) {
        *(undefined1 *)(local_res8 + 0x568) = 5;
      }
      else {
        *(undefined1 *)(local_res8 + 0x568) = 2;
      }
    }
  }
  else if ((byte)(param_6 + 0x6fU) < 3) {
    *(undefined1 *)(local_res8 + 0x560) = 2;
    if ((param_7 == '\0') && (*(char *)(local_res8 + 0x40) != '\x01')) {
      if (local_19 == '\0') {
        if (param_8 == 99) {
          *(undefined1 *)(local_res8 + 0x568) = 1;
        }
        else if (param_8 == 100) {
          *(undefined1 *)(local_res8 + 0x568) = 3;
        }
        else if (param_8 == 0x73) {
          *(undefined1 *)(local_res8 + 0x568) = 7;
        }
        else {
          param_10 = param_10 % 3;
          if (param_10 == 0) {
            *(undefined1 *)(local_res8 + 0x568) = 7;
          }
          else if (param_10 == 1) {
            *(undefined1 *)(local_res8 + 0x568) = 3;
          }
          else if (param_10 == 2) {
            *(undefined1 *)(local_res8 + 0x568) = 1;
          }
        }
      }
    }
    else {
      *(undefined1 *)(local_res8 + 0x568) = 6;
    }
  }
  else if (param_6 == -0x6c) {
    *(undefined1 *)(local_res8 + 0x560) = 3;
  }
  else {
    *(undefined1 *)(local_res8 + 0x560) = 4;
    if (local_19 == '\0') {
      *(undefined1 *)(local_res8 + 0x568) = 3;
    }
    local_30 = (ushort *)(local_res8 + 0x1e8);
    if (*local_30 < 0x20) {
      bVar5 = (1 << ((byte)*local_30 & 0x1f) & 0x1f000cU) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      FUN_00468530(&local_58,0xff439eb2,0xfffffffffffffffc);
      cVar2 = FUN_0046f320(local_res8 + 0x1e8,&local_58);
      if (cVar2 == '\0') {
        FUN_00468530(&local_70,0,1);
        cVar2 = FUN_0046f320(local_res8 + 0x1e8,&local_70);
        if (cVar2 == '\0') goto LAB_00aa3eda;
      }
      FUN_00468530(local_res8 + 0x1e8,0x10,1);
    }
  }
LAB_00aa3eda:
  local_38 = (ushort *)(local_res8 + 0x1e8);
  if (*local_38 < 0x20) {
    bVar5 = (1 << ((byte)*local_38 & 0x1f) & 0x1f000cU) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    FUN_00468530(&local_88,0xff439eb2,0xfffffffffffffffc);
    cVar2 = FUN_0046f320(local_res8 + 0x1e8,&local_88);
    if (cVar2 != '\0') {
      if ((param_6 == -0x71) || ((byte)(param_6 + 0x6fU) < 4)) {
        FUN_00468530(local_res8 + 0x1e8,0,1);
      }
      else {
        FUN_00468530(local_res8 + 0x1e8,0x28,1);
      }
    }
  }
  *(undefined4 *)(local_res8 + 0x564) = param_9;
  plVar3 = (longlong *)FUN_00a4dfc0(&PTR_FUN_00a4d8c8,1);
  *(longlong **)(local_res8 + 0x570) = plVar3;
  uVar4 = FUN_00a5b160(param_5);
  (**(code **)(*plVar3 + 0x10))(plVar3,uVar4);
  FUN_00a54460(param_5,&local_28);
  if (local_28 != 0) {
    uVar4 = FUN_00a95230(&PTR_FUN_00a83768,1,*(undefined8 *)(local_res8 + 0xa8),local_28);
    *(undefined8 *)(local_res8 + 0x578) = uVar4;
  }
  FUN_00417840(&local_88,&DAT_004013d8,3);
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

