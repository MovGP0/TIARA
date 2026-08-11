/* Ghidra address: 0070be50 */
/* Ghidra symbol: FUN_0070be50 */


void FUN_0070be50(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_34 [12];
  
  plVar2 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar2 + 0x90))(plVar2);
  if (cVar1 != '\0') {
    local_34[0] = 0xf;
    uVar3 = FUN_00777cd0();
    cVar1 = FUN_007794c0(uVar3,local_34);
    if (cVar1 != '\0') {
      uVar3 = FUN_00777cd0();
      uVar4 = FUN_00786090(param_1);
      uVar5 = FUN_005ffa40(param_2);
      FUN_00778ec0(uVar3,uVar4,uVar5,local_34,0,0);
    }
  }
  (**(code **)(*param_1 + 0x70))(param_1,param_2);
  (**(code **)(*param_1 + 0x68))(param_1,param_2);
  return;
}

