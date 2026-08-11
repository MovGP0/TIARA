/* Ghidra address: 019aba00 */
/* Ghidra symbol: FUN_019aba00 */


void FUN_019aba00(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((DAT_01fbf7d8 != (longlong *)0x0) && (param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x1b0))(param_1,local_20);
    iVar1 = (**(code **)(*DAT_01fbf7d8 + 0xb0))(DAT_01fbf7d8,local_20[0]);
    if (iVar1 != -1) {
      plVar2 = (longlong *)(**(code **)(*DAT_01fbf7d8 + 0x30))(DAT_01fbf7d8,iVar1);
      (**(code **)(*plVar2 + 0x48))(plVar2,param_1);
    }
  }
  FUN_00414480(local_20);
  return;
}

