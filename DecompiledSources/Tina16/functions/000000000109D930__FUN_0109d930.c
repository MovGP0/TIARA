/* Ghidra address: 0109d930 */
/* Ghidra symbol: FUN_0109d930 */


void FUN_0109d930(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c [3];
  
  local_40 = 0;
  *(undefined4 *)(param_1 + 0xa08) = 0;
  _Dbg_SetDebugLocals(*(undefined8 *)(param_1 + 0x9c0),*(undefined4 *)(param_1 + 0xa0c));
  lVar1 = _Dbg_Load(*(undefined8 *)(param_1 + 0x9c0),*(undefined4 *)(param_1 + 0xa08),local_2c,
                    &local_30,&local_38);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    (**(code **)(*plVar2 + 8))(plVar2,local_30);
    FUN_00409a70(lVar1,plVar2[1],(longlong)local_30);
    *(undefined8 *)(param_1 + 0xa00) = *(undefined8 *)(param_1 + 0x810);
    if (local_2c[0] == 2) {
      FUN_0109dcf0(param_1,plVar2,1,0);
    }
    else {
      FUN_0109d6b0(param_1,*(undefined4 *)(param_1 + 0xa08));
      FUN_0109d760(param_1,*(undefined8 *)(param_1 + 0xa00),0);
      FUN_0109dcf0(param_1,plVar2,0,0);
      FUN_0109d6d0(param_1,*(undefined4 *)(param_1 + 0xa08));
    }
    FUN_004167d0(&local_40,local_38);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x978),local_40);
    FUN_00410f20(plVar2);
  }
  FUN_00414480(&local_40);
  return;
}

