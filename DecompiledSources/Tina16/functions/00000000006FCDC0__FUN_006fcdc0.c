/* Ghidra address: 006fcdc0 */
/* Ghidra symbol: FUN_006fcdc0 */


void FUN_006fcdc0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_70 = auStack_98;
  if (param_2 == 0) {
    local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    (**(code **)(*local_20 + 0x10))(local_20,*(undefined8 *)(param_1 + 0x520));
    local_60 = FUN_0060c2f0(local_20);
    FUN_00410f20(local_20);
  }
  else {
    local_70 = auStack_98;
    local_60 = FUN_006fcbf0(auStack_98,param_2);
  }
  local_50 = *(longlong *)(param_1 + 0x528);
  if (local_50 == 0) {
    local_30 = 0;
    local_28 = local_60;
    iVar1 = FUN_006fca40(param_1);
    FUN_0064fca0(param_1,0x413,(longlong)iVar1,&local_30);
  }
  else {
    local_58 = 0;
    local_48 = 0;
    local_40 = local_60;
    local_38 = FUN_006fca40(param_1);
    FUN_0064fca0(param_1,0x42e,0,&local_58);
    if (*(longlong *)(param_1 + 0x528) != 0) {
      thunk_FUN_0416f828(*(longlong *)(param_1 + 0x528));
    }
  }
  *(undefined8 *)(param_1 + 0x528) = local_60;
  return;
}

