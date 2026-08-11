/* Ghidra address: 0109d7c0 */
/* Ghidra symbol: FUN_0109d7c0 */


void FUN_0109d7c0(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_38;
  int local_30;
  int local_2c [3];
  
  local_38 = 0;
  *(undefined4 *)(param_1 + 0xa08) = 1;
  FUN_00f7da20(*(undefined8 *)(*(longlong *)(param_1 + 0x1660) + 0x3548),&local_38);
  uVar1 = FUN_004425e0(param_1 + 0xa30,local_38);
  _Dbg_SetWatchItems(*(undefined8 *)(param_1 + 0x9c0),uVar1);
  lVar2 = _Dbg_LoadWatch(*(undefined8 *)(param_1 + 0x9c0),param_2,local_2c,&local_30);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    (**(code **)(*plVar3 + 8))(plVar3,local_30);
    FUN_00409a70(lVar2,plVar3[1],(longlong)local_30);
    *(undefined8 *)(param_1 + 0xa00) = *(undefined8 *)(param_1 + 0x948);
    if (local_2c[0] == 2) {
      FUN_0109dcf0(param_1,plVar3,1,1);
    }
    else {
      FUN_0109d6b0(param_1,*(undefined4 *)(param_1 + 0xa08));
      FUN_0109d760(param_1,*(undefined8 *)(param_1 + 0xa00),0);
      FUN_0109dcf0(param_1,plVar3,0,1);
      FUN_0109d6d0(param_1,*(undefined4 *)(param_1 + 0xa08));
    }
    FUN_00410f20(plVar3);
  }
  FUN_004144d0(&local_38);
  return;
}

