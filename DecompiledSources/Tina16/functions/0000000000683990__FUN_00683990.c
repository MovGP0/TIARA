/* Ghidra address: 00683990 */
/* Ghidra symbol: FUN_00683990 */


void FUN_00683990(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x260))(param_1);
    if (iVar1 != param_2) {
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar2,0x14e,(longlong)param_2,0);
    }
  }
  else {
    *(int *)((longlong)param_1 + 0x4a4) = param_2;
  }
  return;
}

