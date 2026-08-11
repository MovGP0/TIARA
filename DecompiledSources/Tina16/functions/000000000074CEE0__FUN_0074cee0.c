/* Ghidra address: 0074cee0 */
/* Ghidra symbol: FUN_0074cee0 */


void FUN_0074cee0(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  FUN_0065a280(param_1);
  plVar1 = (longlong *)param_1[0x9b];
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    (**(code **)(*plVar1 + 0x128))(plVar1,uVar2);
  }
  return;
}

