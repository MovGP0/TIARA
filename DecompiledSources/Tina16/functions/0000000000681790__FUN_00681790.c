/* Ghidra address: 00681790 */
/* Ghidra symbol: FUN_00681790 */


void FUN_00681790(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  *(undefined1 *)((longlong)param_1 + 0x4a2) = 1;
  FUN_00655080(param_1);
  *(undefined1 *)((longlong)param_1 + 0x4a2) = 0;
  (**(code **)(*param_1 + 0x260))(param_1,*(undefined4 *)((longlong)param_1 + 0x494));
  FUN_006806a0(param_1,*(undefined1 *)((longlong)param_1 + 0x4a3));
  if (*(short *)((longlong)param_1 + 0x49a) != 0) {
    plVar2 = (longlong *)FUN_00777cd0();
    cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
    if ((cVar1 == '\0') || (*(short *)((longlong)param_1 + 0x49a) != 0x2a)) {
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar3,0xcc,*(undefined2 *)((longlong)param_1 + 0x49a),0);
    }
  }
  if (*(int *)((longlong)param_1 + 0x4bc) != -1) {
    (**(code **)(*param_1 + 0x290))(param_1,*(int *)((longlong)param_1 + 0x4bc));
    *(undefined4 *)((longlong)param_1 + 0x4bc) = 0xffffffff;
  }
  if ((int)param_1[0x97] != -1) {
    (**(code **)(*param_1 + 0x288))(param_1,(int)param_1[0x97]);
  }
  FUN_00681940(param_1);
  (**(code **)(*param_1 + 0x268))(param_1,param_1[0x99]);
  return;
}

