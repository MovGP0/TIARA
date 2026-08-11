/* Ghidra address: 00c68790 */
/* Ghidra symbol: FUN_00c68790 */


void FUN_00c68790(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  plVar2 = (longlong *)FUN_00723990(&PTR_FUN_007198a0,1,0);
  FUN_00414ad0(plVar2 + 0x1c,L"Executables|*.exe;*.dll;*.ocx;*.bpl;*.cpl;|Icons|*.ico|All files|*.*"
              );
  FUN_00414ad0(plVar2 + 0x1f,L"Browse for icon library");
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),local_20);
  FUN_00724380(plVar2,local_20[0]);
  cVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  if (cVar1 != '\0') {
    FUN_00724270(plVar2,&local_28);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_28);
  }
  FUN_00410f20(plVar2);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

