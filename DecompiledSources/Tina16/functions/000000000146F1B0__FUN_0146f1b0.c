/* Ghidra address: 0146f1b0 */
/* Ghidra symbol: FUN_0146f1b0 */


void FUN_0146f1b0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0xa8))(*(longlong **)(param_1 + 0x718));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x718),local_20);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4e8);
    (**(code **)(*plVar1 + 0x100))(plVar1,local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}

