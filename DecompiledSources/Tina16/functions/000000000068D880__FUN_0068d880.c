/* Ghidra address: 0068d880 */
/* Ghidra symbol: FUN_0068d880 */


void FUN_0068d880(longlong *param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

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
  FUN_00650920(param_1,param_2,param_3,param_4,param_5);
  FUN_0041b800(&local_10);
  return;
}

