/* Ghidra address: 01be8360 */
/* Ghidra symbol: FUN_01be8360 */


void FUN_01be8360(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined1 local_28 [12];
  undefined4 local_1c;
  
  local_30 = auStack_78;
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (cVar1 != '\0') {
    uVar3 = FUN_00781840();
    cVar1 = FUN_00779360(uVar3);
    if (cVar1 == '\0') {
      uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x4b0));
      local_1c = thunk_FUN_03b57162(uVar3);
      plVar2 = (longlong *)FUN_00781840();
      (**(code **)(*plVar2 + 0x158))(plVar2,local_28,10);
      uVar3 = FUN_00781840();
      uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x4b0));
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(param_1 + 0x9c));
      FUN_004238d0(local_40,0,0,*(undefined4 *)(param_1 + 0x98));
      local_58 = 0;
      local_50 = 0;
      FUN_00778dc0(uVar3,uVar4,local_28,local_40);
      uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x4b0));
      thunk_FUN_0402759f(uVar3,local_1c);
      return;
    }
  }
  FUN_01c00850(param_1);
  return;
}

