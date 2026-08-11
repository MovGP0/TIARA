/* Ghidra address: 0098d390 */
/* Ghidra symbol: FUN_0098d390 */


undefined8 FUN_0098d390(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x118))(param_1);
  if (iVar2 == 0) {
    FUN_00414520(param_2);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xe8))(param_1);
    if (cVar1 == '\0') {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1,0);
      (**(code **)(*plVar4 + 0x198))(plVar4,param_2);
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x118))(param_1);
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1,uVar3);
      (**(code **)(*plVar4 + 0x198))(plVar4,param_2);
    }
  }
  return param_2;
}

