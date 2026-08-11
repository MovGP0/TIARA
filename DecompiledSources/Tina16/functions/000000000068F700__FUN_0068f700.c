/* Ghidra address: 0068f700 */
/* Ghidra symbol: FUN_0068f700 */


void FUN_0068f700(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined1 local_70 [72];
  longlong *local_28;
  undefined8 local_20;
  
  local_80 = auStack_c8;
  uVar3 = FUN_0065b870(param_1);
  thunk_FUN_041804fe(uVar3,local_70);
  if (*(longlong *)(param_1 + 0x498) == 0) {
    if (*(char *)(param_1 + 0x490) != '\0') {
      local_28 = (longlong *)FUN_005fe0d0(&PTR_FUN_005f54e0,1);
      uVar3 = FUN_0065b870(param_1);
      uVar3 = thunk_FUN_0411fe47(uVar3);
      FUN_005ffb10(local_28,uVar3);
      plVar4 = (longlong *)FUN_00777cd0();
      cVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
      if (cVar1 != '\0') {
        FUN_005fdcb0(local_28[0x10],0);
        uVar3 = FUN_00777cd0();
        uVar2 = FUN_00778bd0(uVar3,0xff00000f,0);
        FUN_005fdab0(local_28[0x10],uVar2);
        local_a8 = *(undefined4 *)(param_1 + 0x9c);
        FUN_004238d0(local_90,0,0,*(undefined4 *)(param_1 + 0x98));
        (**(code **)(*local_28 + 0xa8))(local_28,local_90);
      }
      uVar3 = FUN_0065b870(param_1);
      uVar5 = FUN_005ffa40(local_28);
      thunk_FUN_041a9b5c(uVar3,uVar5);
      FUN_005ffb10(local_28,0);
      FUN_00410f20(local_28);
    }
  }
  else {
    uVar3 = FUN_0065b870(param_1);
    local_20 = thunk_FUN_0411fe47(uVar3);
    if (*(char *)(param_1 + 0x4a0) == '\0') {
      FUN_006911f0(*(undefined8 *)(param_1 + 0x498),local_20);
    }
    else {
      FUN_00690ce0(*(undefined8 *)(param_1 + 0x498),local_20);
    }
    uVar3 = FUN_0065b870(param_1);
    thunk_FUN_041a9b5c(uVar3,local_20);
  }
  uVar3 = FUN_0065b870(param_1);
  thunk_FUN_0416269d(uVar3,local_70);
  return;
}

