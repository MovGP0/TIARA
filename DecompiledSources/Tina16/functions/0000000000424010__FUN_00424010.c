/* Ghidra address: 00424010 */
/* Ghidra symbol: FUN_00424010 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

char FUN_00424010(undefined8 *param_1,int param_2,char param_3,int *param_4,undefined8 *param_5,
                 uint param_6)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  undefined1 *local_70;
  int local_60;
  int local_5c;
  int local_58;
  bool local_51;
  longlong local_50;
  longlong *local_48;
  char local_35;
  int local_34;
  longlong local_30;
  int local_28;
  undefined8 *local_20;
  
  local_70 = auStack_98;
  local_78 = param_2 + 1;
  if (local_78 < 2) {
    local_70 = auStack_98;
    if (local_78 < 1) {
      local_70 = auStack_98;
      FUN_0040c920(&PTR_FUN_00422748);
    }
    local_51 = (bool)(**(code **)(*(longlong *)*param_1 + 0x60))((longlong *)*param_1,param_6);
    if (local_51 == false) {
      if (param_4 != (int *)0x0) {
        *param_4 = 0;
      }
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = *param_1;
      }
    }
  }
  else {
    local_5c = (**(code **)(PTR_PTR_0200c2c0 + 0x10))(PTR_PTR_0200c2c0);
    local_30 = FUN_00424930(&DAT_004224b8,1);
    local_28 = -1;
    *(byte *)(local_30 + 0x14) = *(byte *)(local_30 + 0x14) | 1;
    if (param_3 != '\0') {
      *(byte *)(local_30 + 0x14) = *(byte *)(local_30 + 0x14) | 2;
    }
    *(undefined4 *)(local_30 + 0x10) = 1;
    if (param_3 == '\0') {
      *(undefined4 *)(local_30 + 0x18) = 0xffffffff;
    }
    else {
      *(int *)(local_30 + 0x18) = local_78;
    }
    if (*(longlong *)PTR_PTR_02002ff8 == 0) {
      FUN_004098e0(0x1a);
    }
    uVar3 = FUN_004121f0(local_30);
    FUN_00411f00(uVar3,0xffffffff);
    local_35 = '\0';
    local_34 = 0;
    local_74 = param_2;
    if (-1 < param_2) {
      local_74 = param_2 + 1;
      local_20 = param_1;
      do {
        local_28 = local_34;
        (**(code **)(*(longlong *)*local_20 + 0x18))((longlong *)*local_20);
        FUN_00424500(*local_20);
        cVar2 = (**(code **)(*(longlong *)*local_20 + 0x60))((longlong *)*local_20,0);
        if (cVar2 == '\0') {
          (**(code **)(*(longlong *)*local_20 + 0x20))((longlong *)*local_20);
          if (param_3 == '\0') {
            *(int *)(local_30 + 0x18) = local_34;
            local_35 = '\x01';
          }
          else {
            *(int *)(local_30 + 0x18) = *(int *)(local_30 + 0x18) + -1;
          }
        }
        else {
          (**(code **)(*(longlong *)*local_20 + 0x40))((longlong *)*local_20);
          *(int *)(local_30 + 0x10) = *(int *)(local_30 + 0x10) + 1;
          (**(code **)(*(longlong *)*local_20 + 0x20))((longlong *)*local_20);
        }
        if (local_35 != '\0') break;
        local_34 = local_34 + 1;
        local_20 = local_20 + 1;
        local_74 = local_74 + -1;
      } while (local_74 != 0);
    }
    if ((local_35 == '\0') && (param_6 == 0)) {
      local_35 = '\x01';
      local_51 = true;
    }
    else {
      local_51 = false;
    }
    do {
      do {
        if (local_35 != '\0') goto code_r0x00424340;
        if (((param_3 == '\0') || (*(int *)(local_30 + 0x18) != 0)) &&
           ((param_3 != '\0' || (*(int *)(local_30 + 0x18) == -1)))) {
          local_35 = '\0';
        }
        else {
          local_35 = '\x01';
        }
      } while (local_35 != '\0');
      if (param_6 != 0xffffffff) {
        local_60 = FUN_0040c920(&PTR_FUN_00422748);
        if (param_6 <= (uint)(local_60 - local_5c)) {
          local_51 = true;
          break;
        }
        param_6 = param_6 - (local_60 - local_5c);
        local_5c = local_60;
      }
      cVar2 = FUN_004126d0(*(undefined8 *)(local_30 + 8),local_30,param_6);
      local_51 = cVar2 == '\0';
    } while (!local_51);
code_r0x00424340:
    local_58 = *(int *)(local_30 + 0x18);
    *(byte *)(local_30 + 0x14) = *(byte *)(local_30 + 0x14) & 0xfe;
    *(int *)(local_30 + 0x10) = *(int *)(local_30 + 0x10) + -1;
    if (*(int *)(local_30 + 0x10) == 0) {
      FUN_00412130(local_30);
      lVar1 = local_30;
      local_48 = &local_30;
      local_50 = local_30;
      local_30 = 0;
      FUN_00410f20(lVar1);
    }
    else {
      FUN_00412130(local_30);
    }
    if (param_4 != (int *)0x0) {
      *param_4 = local_58;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = param_1[local_58];
    }
  }
  return local_51;
}

