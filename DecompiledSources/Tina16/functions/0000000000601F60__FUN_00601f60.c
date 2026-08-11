/* Ghidra address: 00601f60 */
/* Ghidra symbol: FUN_00601f60 */


undefined1 FUN_00601f60(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  bool local_41;
  longlong local_40;
  longlong local_38;
  bool local_29;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_50 = auStack_78;
  if (param_2 == (longlong *)0x0) {
    local_41 = false;
  }
  else {
    local_38 = *param_1;
    local_40 = *param_2;
    local_41 = local_38 == local_40;
  }
  local_29 = local_41;
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if ((cVar1 != '\0') || (cVar1 = (**(code **)(*param_2 + 0x40))(param_2), cVar1 != '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_2 + 0x40))(param_2), cVar1 != '\0')) {
      return 1;
    }
    return 0;
  }
  if (local_29 == false) {
    return 0;
  }
  local_28 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(*param_1 + 0x90))(param_1,local_28);
  local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(*param_2 + 0x90))(param_2,local_20);
  lVar3 = (**(code **)*local_28)(local_28);
  lVar4 = (**(code **)*local_20)(local_20);
  if (lVar3 == lVar4) {
    uVar2 = (**(code **)*local_28)(local_28);
    cVar1 = FUN_0043e2c0(local_28[1],local_20[1],uVar2);
    if (cVar1 != '\0') {
      local_29 = true;
      goto LAB_006020e2;
    }
  }
  local_29 = false;
LAB_006020e2:
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  return local_29;
}

