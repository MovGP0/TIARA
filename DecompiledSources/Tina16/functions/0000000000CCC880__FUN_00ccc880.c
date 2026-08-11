/* Ghidra address: 00ccc880 */
/* Ghidra symbol: FUN_00ccc880 */


int FUN_00ccc880(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  int local_50;
  int local_4c;
  longlong *local_48;
  int local_3c;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 *local_20;
  
  local_60 = auStack_88;
  local_3c = 0;
  local_50 = 0;
  local_20 = (undefined8 *)0x0;
  local_28 = 0;
  if (param_3 == 1) {
    local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004b9f40(local_20,param_2);
    uVar2 = (**(code **)*local_20)(local_20);
    local_28 = (**(code **)PTR_DAT_02002828)(local_20[1],uVar2);
    if (local_28 == 0) {
      FUN_00ca5660(0x84,2);
      FUN_00cccac0(0,local_60);
    }
    else {
      local_38 = (**(code **)PTR_DAT_02003f38)(local_28,0,0,0);
      (**(code **)PTR_DAT_02002fc0)(local_28);
      puVar1 = local_20;
      local_30 = local_20;
      local_20 = (undefined8 *)0x0;
      FUN_00410f20(puVar1);
      if (local_38 == 0) {
        FUN_00ca5660(0x84,9);
      }
      else {
        iVar3 = (**(code **)PTR_DAT_02002990)();
        local_4c = 0;
        if (-1 < iVar3 + -1) {
          do {
            local_48 = (longlong *)(**(code **)PTR_DAT_02002cf0)(local_38,local_4c);
            if (*local_48 != 0) {
              (**(code **)PTR_DAT_02002998)(*(undefined8 *)(param_1 + 0x18),*local_48);
              local_50 = local_50 + 1;
            }
            if (local_48[1] != 0) {
              (**(code **)PTR_DAT_02003078)(*(undefined8 *)(param_1 + 0x18),local_48[1]);
              local_50 = local_50 + 1;
            }
            local_4c = local_4c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        (**(code **)PTR_DAT_02001688)(local_38,*(undefined8 *)PTR_DAT_02003578);
        local_3c = local_50;
      }
    }
  }
  else {
    local_60 = auStack_88;
    local_3c = FUN_00ccc5e0(param_1,param_2,param_3);
  }
  return local_3c;
}

