/* Ghidra address: 00d4a0c0 */
/* Ghidra symbol: FUN_00d4a0c0 */


void FUN_00d4a0c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_34 [12];
  undefined1 local_28 [16];
  
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x90))(plVar2);
  if (cVar1 != '\0') {
    FUN_00d49c30(param_1,local_28);
    cVar1 = FUN_00d49cf0(param_1);
    if (cVar1 == '\0') {
      plVar2 = (longlong *)FUN_00781840();
      (**(code **)(*plVar2 + 0x188))(plVar2,local_34,2);
    }
    else {
      plVar2 = (longlong *)FUN_00781840();
      (**(code **)(*plVar2 + 0x188))(plVar2,local_34,3);
    }
    uVar3 = FUN_00781840();
    uVar4 = FUN_005ffa40(param_2);
    FUN_00778dc0(uVar3,uVar4,local_34,local_28,0,0);
  }
  return;
}

