/* Ghidra address: 0068ed50 */
/* Ghidra symbol: FUN_0068ed50 */


void FUN_0068ed50(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  FUN_0068eb70(param_1);
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,3);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db2d0(uVar3);
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,4);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db850(uVar3);
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db730(uVar3);
  }
  return;
}

