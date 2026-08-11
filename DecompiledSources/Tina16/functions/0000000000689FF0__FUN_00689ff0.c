/* Ghidra address: 00689ff0 */
/* Ghidra symbol: FUN_00689ff0 */


void FUN_00689ff0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = (longlong *)0x0;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,1);
  if (cVar1 != '\0') {
    local_20 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db130(&local_38,local_20);
    (**(code **)(*local_38 + 0x40))(local_38);
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,4);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db730(uVar3);
  }
  FUN_0065a0f0(param_1,param_2);
  FUN_0041b800(&local_38);
  return;
}

