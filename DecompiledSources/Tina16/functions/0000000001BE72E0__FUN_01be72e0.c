/* Ghidra address: 01be72e0 */
/* Ghidra symbol: FUN_01be72e0 */


void FUN_01be72e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_30;
  
  local_40 = auStack_98;
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (cVar1 != '\0') {
    uVar3 = FUN_00781840();
    cVar1 = FUN_00779360(uVar3);
    if (cVar1 == '\0') {
      local_30 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x4b0));
      uVar3 = FUN_0065b870(param_1);
      uVar3 = thunk_FUN_0411fe47(uVar3);
      FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),uVar3);
      uVar3 = FUN_00781840();
      uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x4b0));
      plVar2 = (longlong *)FUN_00781840();
      (**(code **)(*plVar2 + 0x158))(plVar2,local_50,0x13);
      local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0x9c));
      FUN_004238d0(local_60,0,0,*(undefined4 *)(param_1 + 0x98));
      local_78 = 0;
      local_70 = 0;
      FUN_00778dc0(uVar3,uVar4,local_50,local_60);
      uVar3 = FUN_0065b870(param_1);
      uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x4b0));
      thunk_FUN_041a9b5c(uVar3,uVar4);
      FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),local_30);
      return;
    }
  }
  FUN_0069fce0(param_1,param_2);
  return;
}

