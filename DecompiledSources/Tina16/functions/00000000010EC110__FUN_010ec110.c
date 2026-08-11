/* Ghidra address: 010ec110 */
/* Ghidra symbol: FUN_010ec110 */


void FUN_010ec110(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_48 [24];
  undefined8 local_30 [2];
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar1 = FUN_00609e10(*(longlong *)(param_1 + 0x58));
      FUN_005fdab0(*(undefined8 *)(lVar1 + 0x80),0xffffff);
      plVar2 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x58));
      FUN_00498350(local_48,0,0,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
      (**(code **)(*plVar2 + 0xa8))(plVar2,local_48);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))(*(longlong **)(param_1 + 0x58),0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x68))(*(longlong **)(param_1 + 0x50));
    local_30[0] = 0;
    *(undefined1 *)(param_1 + 0x20) = param_2;
    FUN_010eb700(param_1,0,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                 *(undefined4 *)(param_1 + 0x14c),0,*(undefined8 *)(param_1 + 0x90),
                 *(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x150),local_30,
                 *(undefined8 *)(param_1 + 0x50));
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
    (**(code **)(*plVar2 + 0x80))(plVar2,L"Analysis Result 1",local_30[0]);
    FUN_010e8460(param_1,local_48,2);
    FUN_01acf9e0(*(undefined8 *)(param_1 + 0x50),local_48);
    FUN_01ad0490(*(undefined8 *)(param_1 + 0x50));
    FUN_01acfa60(*(undefined8 *)(param_1 + 0x50));
    FUN_01aceb90(*(undefined8 *)(param_1 + 0x50),1);
  }
  return;
}

