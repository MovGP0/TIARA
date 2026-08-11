/* Ghidra address: 00848f80 */
/* Ghidra symbol: FUN_00848f80 */


void FUN_00848f80(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  
  cVar1 = (**(code **)(*param_1 + 0x280))(param_1);
  if (cVar1 != '\0') {
    if (param_1[0xa2] == 0) {
      lVar2 = (**(code **)(*param_1 + 0x270))(param_1);
      param_1[0xa2] = lVar2;
      FUN_0083dce0(lVar2,param_1);
      (**(code **)(*(longlong *)param_1[0xa2] + 0x130))((longlong *)param_1[0xa2],param_1);
      FUN_00848e90(auStack_48);
    }
    else if (((int)param_1[0x95] != (int)param_1[0xa3]) ||
            (*(int *)((longlong)param_1 + 0x4ac) != *(int *)((longlong)param_1 + 0x51c))) {
      FUN_00848db0(param_1);
      FUN_00848e90(auStack_48);
    }
    cVar1 = (**(code **)(*param_1 + 0x280))(param_1);
    if (cVar1 != '\0') {
      FUN_0083f3f0(param_1,local_28,(int)param_1[0x95],*(undefined4 *)((longlong)param_1 + 0x4ac));
      FUN_0083e920(param_1[0xa2],local_28);
    }
  }
  return;
}

