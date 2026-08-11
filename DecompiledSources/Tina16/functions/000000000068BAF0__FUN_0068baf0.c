/* Ghidra address: 0068baf0 */
/* Ghidra symbol: FUN_0068baf0 */


void FUN_0068baf0(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x260))(param_1);
  if (iVar1 != param_2) {
    if ((char)param_1[0x92] == '\0') {
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar2,0x186,(longlong)param_2,0);
    }
    else {
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar2,0x19e,(longlong)param_2,0);
    }
  }
  return;
}

