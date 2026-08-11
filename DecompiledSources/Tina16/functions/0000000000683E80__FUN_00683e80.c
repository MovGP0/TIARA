/* Ghidra address: 00683e80 */
/* Ghidra symbol: FUN_00683e80 */


void FUN_00683e80(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  FUN_0065a090(param_1,param_2);
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,1);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db130(&local_10,uVar3);
    cVar1 = (**(code **)(*local_10 + 0x78))(local_10);
    if (cVar1 == '\0') {
      thunk_FUN_041b2403(param_1[0x9f],0xcf,0,0);
    }
    else {
      thunk_FUN_041b2403(param_1[0x9f],0xcf,1,0);
    }
  }
  FUN_0041b800(&local_10);
  return;
}

