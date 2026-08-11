/* Ghidra address: 00cccb50 */
/* Ghidra symbol: FUN_00cccb50 */


/* WARNING: Removing unreachable block (ram,0x00cccd6e) */

longlong FUN_00cccb50(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 *local_48;
  longlong local_40;
  longlong local_38;
  char local_29;
  longlong local_28;
  undefined8 *local_20;
  
  local_70 = auStack_98;
  local_38 = 0;
  local_29 = '\0';
  local_28 = 0;
  local_50 = (**(code **)PTR_DAT_020039f0)(FUN_00cccb30);
  if (local_50 == 0) {
    FUN_00ca5690(0xb9,0x41);
  }
  else {
    local_20 = (undefined8 *)0x0;
    local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004b9f40(local_20,param_1);
    uVar2 = (**(code **)*local_20)(local_20);
    local_40 = (**(code **)PTR_DAT_02002828)(local_20[1],uVar2);
    if (local_40 == 0) {
      FUN_00ca5690(0xb9,0x41);
    }
    else {
      while (local_28 = FUN_00ca5610(local_40,0,0,0), local_28 != 0) {
        if ((local_38 == 0) && (local_38 = (**(code **)PTR_DAT_020051f0)(), local_38 == 0)) {
          FUN_00ca5690(0xb9,0x41);
LAB_00cccda9:
          local_29 = 1;
          FUN_00ccce70(0,local_70);
          FUN_00ccced0(0,local_70);
          FUN_00cccef0(0,local_70);
          FUN_00cccf20(0,local_70);
          return local_38;
        }
        local_58 = (**(code **)PTR_DAT_02004cf8)(local_28);
        if (local_58 == 0) {
          if (local_38 != 0) {
            (**(code **)PTR_DAT_02001688)(local_38,*(undefined8 *)PTR_DAT_02004bd0);
            local_38 = 0;
          }
          goto LAB_00cccda9;
        }
        local_60 = FUN_00ca53d0(local_58);
        if (local_60 == 0) {
          if (local_38 != 0) {
            (**(code **)PTR_DAT_02001688)(local_38,*(undefined8 *)PTR_DAT_02004bd0);
            local_38 = 0;
          }
          goto LAB_00cccda9;
        }
        iVar3 = (**(code **)PTR_DAT_020034e8)(local_50);
        if (iVar3 < 0) {
          (**(code **)PTR_DAT_02001738)(local_50,local_60);
          (**(code **)PTR_DAT_02001738)(local_38);
        }
        else {
          (**(code **)PTR_DAT_02004bd0)(local_60);
        }
        (**(code **)PTR_DAT_02004818)(local_28);
        local_28 = 0;
      }
      if ((local_29 != '\0') && (local_38 != 0)) {
        (**(code **)PTR_DAT_02001688)(local_38,*(undefined8 *)PTR_DAT_02004bd0);
        local_38 = 0;
      }
      (**(code **)PTR_DAT_02002fc0)(local_40);
    }
    puVar1 = local_20;
    local_48 = local_20;
    local_20 = (undefined8 *)0x0;
    FUN_00410f20(puVar1);
    (**(code **)PTR_DAT_02001f70)(local_50);
  }
  if (local_38 != 0) {
    (**(code **)PTR_DAT_02003ca0)();
  }
  return local_38;
}

