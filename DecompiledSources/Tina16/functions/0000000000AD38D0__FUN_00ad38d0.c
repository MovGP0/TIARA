/* Ghidra address: 00ad38d0 */
/* Ghidra symbol: FUN_00ad38d0 */


undefined1
FUN_00ad38d0(longlong param_1,byte *param_2,undefined8 *param_3,longlong *param_4,
            undefined4 *param_5)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined1 *local_b0;
  char local_a1;
  longlong local_a0;
  int local_94;
  int local_90;
  ushort local_8a;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  longlong local_78;
  longlong local_70;
  char local_63;
  short local_62;
  longlong local_60;
  char local_53;
  short local_52;
  longlong local_50;
  char local_43;
  short local_42;
  longlong local_40;
  char local_33;
  short local_32;
  longlong local_30;
  undefined4 local_28;
  undefined1 local_21;
  undefined8 local_20 [2];
  
  local_b0 = auStack_d8;
  local_b8 = 0;
  local_20[0] = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_2 = 0;
  local_21 = 0;
  local_30 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30);
  while( true ) {
    local_32 = *(short *)(local_30 + 0x20);
    if ((((ushort)(local_32 - 9U) < 2) || ((ushort)(local_32 - 0xcU) < 2)) || (local_32 == 0x20)) {
      local_33 = '\x01';
    }
    else {
      local_33 = '\0';
    }
    if (local_33 == '\0') break;
    FUN_00ad1170(local_30);
  }
  FUN_00414480(param_3);
  uVar5 = FUN_00414480(param_3);
  cVar3 = FUN_00ad3160(auStack_d8,uVar5);
  if (cVar3 == '\0') goto LAB_00ad3f80;
  local_28 = 0xffffffff;
  cVar3 = (**(code **)(**(longlong **)PTR_DAT_02005b10 + 0x140))
                    (*(longlong **)PTR_DAT_02005b10,*param_3,&local_28);
  if (cVar3 != '\0') {
    lVar6 = (**(code **)(**(longlong **)PTR_DAT_02005b10 + 0x30))
                      (*(longlong **)PTR_DAT_02005b10,local_28);
    *param_2 = *(byte *)(lVar6 + 8);
  }
  local_40 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30);
  while( true ) {
    local_42 = *(short *)(local_40 + 0x20);
    if ((((ushort)(local_42 - 9U) < 2) || ((ushort)(local_42 - 0xcU) < 2)) || (local_42 == 0x20)) {
      local_43 = '\x01';
    }
    else {
      local_43 = '\0';
    }
    if (local_43 == '\0') break;
    FUN_00ad1170(local_40);
  }
  FUN_00414480(param_4);
  if (*param_2 == 8) {
    *param_5 = 1;
  }
  else {
    *param_5 = 0;
  }
  local_21 = 1;
  if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 0x20) != 0x3d)
  goto LAB_00ad3f80;
  FUN_00ad1170(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x30));
  local_50 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30);
  while( true ) {
    local_52 = *(short *)(local_50 + 0x20);
    if ((((ushort)(local_52 - 9U) < 2) || ((ushort)(local_52 - 0xcU) < 2)) || (local_52 == 0x20)) {
      local_53 = '\x01';
    }
    else {
      local_53 = '\0';
    }
    if (local_53 == '\0') break;
    FUN_00ad1170(local_50);
  }
  bVar1 = *param_2;
  if (bVar1 < 0x58) {
    bVar7 = ((byte)(&DAT_00ad3ff8)[(longlong)((ulonglong)bVar1 & 0x7f) >> 3] >>
             ((ulonglong)bVar1 & 7) & 1) != 0;
  }
  else {
    bVar7 = false;
  }
  cVar3 = FUN_00ad3330(auStack_d8,param_4,bVar7,*param_2);
  if (cVar3 == '\0') {
LAB_00ad3c0e:
    do {
      uVar2 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 0x20);
      if (uVar2 < 0x21) {
        if (uVar2 == 0x20) goto LAB_00ad3c76;
        if (uVar2 == 0) break;
        if ((uVar2 == 9) || (uVar2 == 0xd)) goto LAB_00ad3c76;
      }
      else {
        if (uVar2 == 0x26) {
          local_70 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 0xe8);
          lVar6 = FUN_004aeac0(local_70,*(int *)(local_70 + 0x10) + -1);
          FUN_00ae7160(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x30),&local_b8,
                       *(undefined4 *)(lVar6 + 0x70));
          local_78 = local_b8;
          local_84 = 0;
          if (local_b8 != 0) {
            local_84 = *(int *)(local_b8 + -4);
          }
          local_7c = local_84;
          if (0 < local_84) {
            local_88 = 0;
            if (*param_4 != 0) {
              local_88 = *(int *)(*param_4 + -4);
            }
            local_80 = local_88;
            FUN_004169f0(param_4,local_88 + local_84);
            uVar5 = FUN_00416740(local_78);
            lVar6 = FUN_00414de0(param_4);
            FUN_00409a70(uVar5,lVar6 + -2 + (longlong)(local_80 + 1) * 2,(longlong)(local_7c * 2));
          }
          goto LAB_00ad3c0e;
        }
        if (uVar2 == 0x3e) break;
      }
      local_90 = 0;
      if (*param_4 != 0) {
        local_90 = *(int *)(*param_4 + -4);
      }
      local_8a = uVar2;
      FUN_004169f0(param_4,local_90 + 1);
      local_a0 = FUN_00414de0(param_4);
      local_94 = 0;
      if (*param_4 != 0) {
        local_94 = *(int *)(*param_4 + -4);
      }
      *(ushort *)(local_a0 + -2 + (longlong)local_94 * 2) = local_8a;
      FUN_00ad1170(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x30));
    } while( true );
  }
LAB_00ad3e6e:
  cVar3 = FUN_00ad36f0(auStack_d8,*param_4,param_5);
  if ((cVar3 == '\0') && (*param_2 == 8)) {
    FUN_00414480(local_20);
    FUN_0043e600(local_20,*param_4);
    iVar4 = FUN_00416db0(local_20[0],L"none");
    local_a1 = iVar4 == 0;
    FUN_00414480(local_20);
    if (local_a1 != '\0') {
      *param_5 = 0;
    }
  }
  if (((*param_2 == 0x23) && (*param_4 != 0)) &&
     ((*(longlong *)
        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 0xe8) + 0x20) != 0 &&
      (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 0x83) == '\0')))) {
    lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 0xe8);
    FUN_00aa5b10(*(undefined8 *)(lVar6 + 0x20),*param_4,*(undefined4 *)(lVar6 + 0x28));
  }
LAB_00ad3f80:
  FUN_00414480(&local_b8);
  FUN_00414480(local_20);
  return local_21;
LAB_00ad3c76:
  local_60 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30);
  while( true ) {
    local_62 = *(short *)(local_60 + 0x20);
    if ((((ushort)(local_62 - 9U) < 2) || ((ushort)(local_62 - 0xcU) < 2)) || (local_62 == 0x20)) {
      local_63 = '\x01';
    }
    else {
      local_63 = '\0';
    }
    if (local_63 == '\0') break;
    FUN_00ad1170(local_60);
  }
  goto LAB_00ad3e6e;
}

