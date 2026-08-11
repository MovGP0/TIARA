/* Ghidra address: 00699a60 */
/* Ghidra symbol: FUN_00699a60 */


void FUN_00699a60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_34 [20];
  
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x90))(plVar2);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_00777cd0();
    (**(code **)(*plVar2 + 200))(plVar2,local_34,0x24);
    uVar3 = FUN_00777cd0();
    uVar4 = FUN_00786090(param_1);
    uVar5 = FUN_005ffa40(param_2);
    FUN_00778ec0(uVar3,uVar4,uVar5,local_34,0,0);
  }
  return;
}

