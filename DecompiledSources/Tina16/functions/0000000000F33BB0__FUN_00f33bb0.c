/* Ghidra address: 00f33bb0 */
/* Ghidra symbol: FUN_00f33bb0 */


char FUN_00f33bb0(longlong param_1,char *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_1c8 [40];
  undefined1 *local_1a0;
  longlong local_198;
  byte *local_190;
  byte *local_188;
  byte *local_180;
  char *local_178;
  byte *local_170;
  byte *local_168;
  byte *local_160;
  char *local_158;
  byte *local_150;
  byte *local_148;
  byte *local_140;
  char *local_138;
  byte *local_130;
  byte *local_128;
  byte *local_120;
  char *local_118;
  byte *local_110;
  byte *local_108;
  byte *local_100;
  char *local_f8;
  longlong local_f0;
  byte *local_e8;
  byte *local_e0;
  byte *local_d8;
  char *local_d0;
  byte *local_c8;
  byte *local_c0;
  byte *local_b8;
  char *local_b0;
  longlong local_a8;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  char *local_88;
  int local_7c;
  undefined *local_78;
  undefined8 **local_70;
  undefined1 local_68 [32];
  longlong local_48;
  undefined8 *local_40;
  uint local_34;
  uint local_30;
  char local_29;
  undefined8 **local_28;
  undefined8 **local_20 [2];
  
  local_1a0 = auStack_1c8;
  FUN_00417580(local_68,&DAT_00527bf8);
  local_29 = '\x01';
  local_28 = (undefined8 ***)0x0;
  local_20[0] = (undefined8 ***)0x0;
  cVar2 = *param_2;
  if (cVar2 == '\x06') {
    local_30 = 0;
    local_a0 = (byte *)(param_2 + 1);
    local_40 = *(undefined8 **)(param_2 + (ulonglong)*local_a0 + 3);
    if (local_40 == (undefined8 *)0x0) {
      local_78 = &DAT_004010c0;
    }
    else {
      local_78 = (undefined *)*local_40;
    }
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    local_34 = 0;
    local_98 = local_a0;
    local_90 = local_a0;
    local_88 = param_2;
    if (-1 < iVar6 + -1) {
      do {
        local_a8 = *(longlong *)(param_1 + 0x10);
        if (*(uint *)(local_a8 + 0x10) <= local_34) {
          FUN_00594f90();
        }
        plVar1 = *(longlong **)(*(longlong *)(local_a8 + 8) + (longlong)(int)local_34 * 8);
        cVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,local_78,local_68);
        if (cVar2 == '\0') goto LAB_00f3430e;
        uVar3 = FUN_005374f0(local_68);
        if (uVar3 < 0x20) {
          local_30 = local_30 | 1 << ((byte)uVar3 & 0x1f);
        }
        local_34 = local_34 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    local_28 = (undefined8 **)&local_30;
  }
  else if (cVar2 == '\r') {
    local_110 = (byte *)(param_2 + 1);
    local_108 = local_110;
    local_100 = local_110;
    local_f8 = param_2;
    if (*(int *)(param_2 + (ulonglong)*local_110 + 6) !=
        *(int *)(*(longlong *)(param_1 + 0x10) + 0x10)) {
LAB_00f3430e:
      local_29 = '\0';
      FUN_00f34350(0,local_1a0);
      goto LAB_00f3431c;
    }
    local_130 = (byte *)(param_2 + 1);
    local_128 = local_130;
    local_120 = local_130;
    local_118 = param_2;
    local_20[0] = (undefined8 **)
                  FUN_004095c0((longlong)*(int *)(param_2 + (ulonglong)*local_130 + 2));
    cVar2 = FUN_00534e60(param_2);
    if (cVar2 != '\0') {
      lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
      if (lVar5 < 0) {
        lVar5 = FUN_00410a90();
      }
      FUN_004175f0(local_20[0],param_2,lVar5);
    }
    local_150 = (byte *)(param_2 + 1);
    local_78 = (undefined *)**(undefined8 **)(param_2 + (ulonglong)*local_150 + 10);
    local_170 = (byte *)(param_2 + 1);
    local_190 = (byte *)(param_2 + 1);
    local_7c = *(int *)(param_2 + (ulonglong)*local_170 + 2) /
               *(int *)(param_2 + (ulonglong)*local_190 + 6);
    local_70 = local_20[0];
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    local_34 = 0;
    local_188 = local_190;
    local_180 = local_190;
    local_178 = param_2;
    local_168 = local_170;
    local_160 = local_170;
    local_158 = param_2;
    local_148 = local_150;
    local_140 = local_150;
    local_138 = param_2;
    if (-1 < iVar6 + -1) {
      do {
        local_198 = *(longlong *)(param_1 + 0x10);
        if (*(uint *)(local_198 + 0x10) <= local_34) {
          FUN_00594f90();
        }
        plVar1 = *(longlong **)(*(longlong *)(local_198 + 8) + (longlong)(int)local_34 * 8);
        cVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,local_78,local_68);
        if (cVar2 == '\0') goto LAB_00f3430e;
        FUN_005382b0(local_68,local_70);
        local_70 = (undefined8 **)((longlong)local_70 + (longlong)local_7c);
        local_34 = local_34 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    local_28 = local_20[0];
  }
  else if (cVar2 == '\x11') {
    local_48 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    FUN_00418e30(local_20,param_2,1,&local_48);
    local_c8 = (byte *)(param_2 + 1);
    local_78 = (undefined *)**(undefined8 **)(param_2 + (ulonglong)*local_c8 + 0x12);
    local_e8 = (byte *)(param_2 + 1);
    local_7c = *(int *)(param_2 + (ulonglong)*local_e8 + 2);
    local_70 = local_20[0];
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    local_34 = 0;
    local_e0 = local_e8;
    local_d8 = local_e8;
    local_d0 = param_2;
    local_c0 = local_c8;
    local_b8 = local_c8;
    local_b0 = param_2;
    if (-1 < iVar6 + -1) {
      do {
        local_f0 = *(longlong *)(param_1 + 0x10);
        if (*(uint *)(local_f0 + 0x10) <= local_34) {
          FUN_00594f90();
        }
        plVar1 = *(longlong **)(*(longlong *)(local_f0 + 8) + (longlong)(int)local_34 * 8);
        cVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,local_78,local_68);
        if (cVar2 == '\0') goto LAB_00f3430e;
        FUN_005382b0(local_68,local_70);
        local_70 = (undefined8 **)((longlong)local_70 + (longlong)local_7c);
        local_34 = local_34 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    local_28 = local_20;
  }
  else {
    local_29 = FUN_00f2e820(param_1,param_2,param_3);
  }
  if ((local_29 != '\0') && ((undefined8 ***)local_28 != (undefined8 ***)0x0)) {
    uVar4 = FUN_00417740(param_3,&DAT_00527bf8);
    FUN_00538200(local_28,param_2,uVar4,0);
  }
  if ((undefined8 ***)local_20[0] != (undefined8 ***)0x0) {
    if (*param_2 == '\r') {
      if (((undefined8 ***)local_28 == (undefined8 ***)0x0) &&
         (cVar2 = FUN_00534e60(param_2), cVar2 != '\0')) {
        lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
        if (lVar5 < 0) {
          lVar5 = FUN_00410a90();
        }
        FUN_004185d0(local_20[0],param_2,lVar5);
      }
      FUN_004095f0(local_20[0]);
    }
    else if ((*param_2 == '\x11') && ((undefined8 ***)local_28 == (undefined8 ***)0x0)) {
      FUN_00419430(local_20,param_2);
    }
  }
LAB_00f3431c:
  FUN_00417740(local_68,&DAT_00527bf8);
  return local_29;
}

