/* Ghidra address: 0065a3e0 */
/* Ghidra symbol: FUN_0065a3e0 */


void FUN_0065a3e0(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  (**(code **)(*param_1 + -0x38))(param_1);
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041cc6e2(uVar1,0,0,0,0,0,0x37);
    if (*(char *)((longlong)param_1 + 0xa9) != '\0') {
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  return;
}

