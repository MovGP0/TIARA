/* Ghidra address: 006d9c80 */
/* Ghidra symbol: FUN_006d9c80 */


void FUN_006d9c80(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_48 [20];
  undefined1 local_34 [20];
  
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (cVar1 == '\0') {
    FUN_00658480(param_1,param_2);
  }
  else {
    plVar2 = (longlong *)FUN_00777cd0();
    (**(code **)(*plVar2 + 0x1b8))(plVar2,local_34,1);
    uVar3 = FUN_00777cd0();
    (**(code **)(*param_1 + 0xe0))(param_1,local_48);
    FUN_00778dc0(uVar3,*(undefined8 *)(param_2 + 8),local_34,local_48,0,0);
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}

