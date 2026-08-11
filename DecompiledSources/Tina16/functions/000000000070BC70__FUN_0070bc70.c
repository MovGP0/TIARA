/* Ghidra address: 0070bc70 */
/* Ghidra symbol: FUN_0070bc70 */


void FUN_0070bc70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_34 [12];
  undefined1 local_28 [16];
  
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x90))(plVar2);
  if (cVar1 != '\0') {
    FUN_0070bbf0(param_1,local_28);
    cVar1 = FUN_0070bf50(param_1);
    if (cVar1 == '\0') {
      plVar2 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar2 + 0x188))(plVar2,local_34,2);
    }
    else {
      plVar2 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar2 + 0x188))(plVar2,local_34,3);
    }
    uVar3 = FUN_00777cd0();
    uVar4 = FUN_005ffa40(param_2);
    FUN_00778dc0(uVar3,uVar4,local_34,local_28,0,0);
  }
  return;
}

