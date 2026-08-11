/* Ghidra address: 00683d20 */
/* Ghidra symbol: FUN_00683d20 */


void FUN_00683d20(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,1);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db130(&local_10,uVar3);
    (**(code **)(*local_10 + 0x48))(local_10);
  }
  FUN_00684c40(param_1);
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_004db5e0(uVar3);
  FUN_0041b800(&local_10);
  return;
}

