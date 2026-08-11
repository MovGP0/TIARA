/* Ghidra address: 006aaba0 */
/* Ghidra symbol: FUN_006aaba0 */


undefined1 FUN_006aaba0(longlong *param_1,longlong param_2,ushort param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  byte local_70;
  longlong local_60;
  int local_54;
  undefined1 *local_50;
  undefined4 local_40;
  int local_3c;
  longlong local_38;
  byte local_29;
  int local_28;
  undefined1 local_21;
  longlong local_20;
  
  local_50 = auStack_98;
  local_21 = 0;
  local_3c = 0;
  if (param_2 != 0) {
    local_3c = *(int *)(param_2 + -4);
  }
  if (local_3c != 0) {
    local_60 = param_2;
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_006bdd08);
    if (cVar1 == '\0') {
      local_28 = FUN_0064dc90(param_1);
    }
    else {
      local_28 = FUN_006aaad0(param_1);
    }
    if (local_28 != 0) {
      local_29 = (param_3 & 1) != 0;
      if ((param_3 & 0x20) != 0) {
        local_29 = local_29 | 2;
      }
      if ((param_3 & 0x800) != 0) {
        local_29 = local_29 | 4;
      }
      local_54 = local_28 + 1;
      local_20 = FUN_00442b60();
      FUN_006aab10(param_1,local_54,local_20);
      local_78 = param_2;
      if (param_4 == '\0') {
        uVar2 = (**(code **)(*param_1 + 0x278))(param_1);
        uVar3 = (**(code **)(*param_1 + 0x270))(param_1);
        local_70 = local_29;
        local_38 = FUN_005b8ae0(local_20,local_28,uVar2,uVar3);
      }
      else {
        uVar2 = (**(code **)(*param_1 + 0x270))(param_1);
        local_70 = local_29;
        local_38 = FUN_005b8ae0(local_20,local_28,0,uVar2);
      }
      if (local_38 != 0) {
        (**(code **)(*param_1 + 0x290))(param_1,(local_38 - local_20) / 2);
        local_40 = 0;
        if (local_60 != 0) {
          local_40 = *(undefined4 *)(local_60 + -4);
        }
        (**(code **)(*param_1 + 0x288))(param_1,local_40);
        local_21 = 1;
      }
      FUN_00442c30(local_20);
    }
  }
  return local_21;
}

