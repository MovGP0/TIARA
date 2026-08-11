/* Ghidra address: 01b74e50 */
/* Ghidra symbol: FUN_01b74e50 */


void FUN_01b74e50(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x748) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x6f8);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],local_20,uVar3);
    cVar2 = FUN_01b74860(param_1,local_20);
    if (cVar2 != '\0') {
      plVar1 = *(longlong **)(param_1 + 0x6f8);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x94] + 0x40))((longlong *)plVar1[0x94],uVar3,local_20[0]);
    }
  }
  FUN_00414480(local_20);
  return;
}

