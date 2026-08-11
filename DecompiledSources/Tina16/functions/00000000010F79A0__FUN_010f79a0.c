/* Ghidra address: 010f79a0 */
/* Ghidra symbol: FUN_010f79a0 */


void FUN_010f79a0(longlong *param_1,undefined8 param_2,char param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_3 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x9c2) = 1;
    uVar2 = FUN_0065b870(param_1[0xfe]);
    FUN_00f833a0(uVar2,0x531,0,0);
    uVar2 = FUN_0065b870(param_1[0xfe]);
    FUN_00f833a0(uVar2,0x532,0,0);
    *(undefined1 *)(param_1 + 0xf5) = 4;
    if (*(char *)(param_1[0x123] + 0x328) == '\0') {
      plVar1 = *(longlong **)(param_1[0xf3] + 0xf8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,1);
      }
    }
    else {
      plVar1 = *(longlong **)(param_1[0xf3] + 0xf0);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,1);
      }
    }
    (**(code **)(*param_1 + 0x520))(param_1,param_2,0,param_4,param_5,param_6);
    if (*(char *)(param_1[0x123] + 0x328) == '\0') {
      plVar1 = *(longlong **)(param_1[0xf3] + 0xf8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,0);
      }
    }
    else {
      plVar1 = *(longlong **)(param_1[0xf3] + 0xf0);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,0);
      }
    }
  }
  return;
}

