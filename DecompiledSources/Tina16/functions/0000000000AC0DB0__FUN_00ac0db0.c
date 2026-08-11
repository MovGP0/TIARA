/* Ghidra address: 00ac0db0 */
/* Ghidra symbol: FUN_00ac0db0 */


longlong FUN_00ac0db0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong local_res8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  ushort *local_60;
  ulonglong local_58;
  ushort *local_50;
  ulonglong local_48;
  ushort *local_40;
  ulonglong local_38;
  ushort *local_30;
  ulonglong local_28;
  byte local_19;
  
  local_70 = auStack_108;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_res8 = param_1;
  puVar1 = auStack_108;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_70;
  }
  local_70 = puVar1;
  local_e8 = param_5;
  FUN_00a9c430(local_res8,0,param_3,param_4);
  *(undefined1 *)(local_res8 + 0x4ec) = 1;
  local_19 = 0x22;
  do {
    local_28 = (ulonglong)local_19;
    local_30 = (ushort *)(local_res8 + -0x10 + local_28 * 0x18);
    if (*local_30 < 0x20) {
      bVar4 = (1 << ((byte)*local_30 & 0x1f) & 0x1f000cU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_00468530(&local_88,0xff439eb2,0xfffffffffffffffc);
      cVar2 = FUN_0046f320(local_res8 + -0x10 + local_28 * 0x18,&local_88);
      if (cVar2 == '\0') goto LAB_00ac0f20;
LAB_00ac0f41:
      FUN_00468530(local_res8 + -0x10 + (ulonglong)local_19 * 0x18,1,1);
    }
    else {
LAB_00ac0f20:
      cVar2 = FUN_0046c3b0(local_res8 + -0x10 + (ulonglong)local_19 * 0x18);
      if (cVar2 != '\0') goto LAB_00ac0f41;
    }
    local_19 = local_19 + 1;
  } while (local_19 != 0x26);
  local_19 = 0x1e;
  do {
    local_38 = (ulonglong)local_19;
    local_40 = (ushort *)(local_res8 + -0x10 + local_38 * 0x18);
    if (*local_40 < 0x20) {
      bVar4 = (1 << ((byte)*local_40 & 0x1f) & 0x1f000cU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_00468530(&local_a0,0xff439eb2,0xfffffffffffffffc);
      cVar2 = FUN_0046f320(local_res8 + -0x10 + local_38 * 0x18,&local_a0);
      if (cVar2 == '\0') goto LAB_00ac101c;
LAB_00ac103d:
      FUN_00468530(local_res8 + -0x10 + (ulonglong)local_19 * 0x18,0xb2aca5,4);
    }
    else {
LAB_00ac101c:
      cVar2 = FUN_0046c3b0(local_res8 + -0x10 + (ulonglong)local_19 * 0x18);
      if (cVar2 != '\0') goto LAB_00ac103d;
    }
    local_19 = local_19 + 1;
  } while (local_19 != 0x22);
  local_19 = 0x1a;
  do {
    local_48 = (ulonglong)local_19;
    local_50 = (ushort *)(local_res8 + -0x10 + local_48 * 0x18);
    if (*local_50 < 0x20) {
      bVar4 = (1 << ((byte)*local_50 & 0x1f) & 0x1f000cU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_00468530(&local_b8,0xff439eb2,0xfffffffffffffffc);
      cVar2 = FUN_0046f320(local_res8 + -0x10 + local_48 * 0x18,&local_b8);
      if (cVar2 == '\0') goto LAB_00ac1118;
LAB_00ac1139:
      FUN_00468530(local_res8 + -0x10 + (ulonglong)local_19 * 0x18,1,1);
    }
    else {
LAB_00ac1118:
      cVar2 = FUN_0046c3b0(local_res8 + -0x10 + (ulonglong)local_19 * 0x18);
      if (cVar2 != '\0') goto LAB_00ac1139;
    }
    local_19 = local_19 + 1;
  } while (local_19 != 0x1e);
  local_19 = 0x16;
  do {
    local_58 = (ulonglong)local_19;
    local_60 = (ushort *)(local_res8 + -0x10 + local_58 * 0x18);
    if (*local_60 < 0x20) {
      bVar4 = (1 << ((byte)*local_60 & 0x1f) & 0x1f000cU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_00468530(&local_d0,0xff439eb2,0xfffffffffffffffc);
      cVar2 = FUN_0046f320(local_res8 + -0x10 + local_58 * 0x18,&local_d0);
      if (cVar2 == '\0') goto LAB_00ac1214;
LAB_00ac1235:
      FUN_00468530(local_res8 + -0x10 + (ulonglong)local_19 * 0x18,10,1);
    }
    else {
LAB_00ac1214:
      cVar2 = FUN_0046c3b0(local_res8 + -0x10 + (ulonglong)local_19 * 0x18);
      if (cVar2 != '\0') goto LAB_00ac1235;
    }
    local_19 = local_19 + 1;
    if (local_19 == 0x1a) {
      uVar3 = FUN_00a9b620(&PTR_FUN_00a86440,1,local_res8);
      *(undefined8 *)(local_res8 + 0x560) = uVar3;
      FUN_00417840(&local_d0,&DAT_004013d8,4);
      if (param_2 != '\0') {
        local_res8 = FUN_00411a20(local_res8);
      }
      return local_res8;
    }
  } while( true );
}

