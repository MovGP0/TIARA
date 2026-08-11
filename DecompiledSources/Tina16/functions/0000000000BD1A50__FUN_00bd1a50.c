/* Ghidra address: 00bd1a50 */
/* Ghidra symbol: FUN_00bd1a50 */


undefined8 FUN_00bd1a50(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined4 local_24;
  longlong local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  FUN_00414480(param_1);
  plVar3 = (longlong *)FUN_006a6030();
  (**(code **)(*plVar3 + 0x30))(plVar3);
  uVar4 = FUN_006a6030();
  cVar1 = FUN_006a5ff0(uVar4,0xd);
  if (cVar1 == '\0') {
    local_24 = 0;
    uVar4 = FUN_006a6030();
    local_20 = FUN_006a5da0(uVar4,0x10);
    if (local_20 != 0) {
      puVar5 = (undefined4 *)thunk_FUN_0416a623(local_20);
      local_24 = *puVar5;
    }
    if (local_20 != 0) {
      thunk_FUN_04172795(local_20);
    }
    uVar4 = FUN_006a6030();
    local_20 = FUN_006a5da0(uVar4,1);
    if (local_20 != 0) {
      local_30 = thunk_FUN_0416a623(local_20);
      FUN_00415430(&local_48,local_30,0);
      uVar2 = FUN_00bd1820(local_24);
      FUN_00bd18b0(param_1,local_48,uVar2);
    }
    if (local_20 != 0) {
      thunk_FUN_04172795(local_20);
    }
  }
  else {
    uVar4 = FUN_006a6030();
    local_20 = FUN_006a5da0(uVar4,0xd);
    if (local_20 != 0) {
      uVar4 = thunk_FUN_0416a623(local_20);
      FUN_004167d0(param_1,uVar4);
    }
    if (local_20 != 0) {
      thunk_FUN_04172795(local_20);
    }
  }
  plVar3 = (longlong *)FUN_006a6030();
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_004144d0(&local_48);
  return param_1;
}

