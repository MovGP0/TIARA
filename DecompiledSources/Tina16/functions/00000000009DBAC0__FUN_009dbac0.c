/* Ghidra address: 009dbac0 */
/* Ghidra symbol: FUN_009dbac0 */


undefined4 FUN_009dbac0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    plVar1 = (longlong *)FUN_009dab20(param_1);
    lVar2 = (**(code **)(*plVar1 + 0x2f8))(plVar1);
    if (lVar2 != 0) {
      plVar1 = (longlong *)FUN_009dab20(param_1);
      plVar4 = (longlong *)FUN_009dab20(param_1);
      uVar3 = (**(code **)(*plVar4 + 0x2f8))(plVar4);
      (**(code **)(*plVar1 + 0x2a0))(plVar1,uVar3);
    }
  }
  else {
    plVar1 = (longlong *)FUN_009dab20(param_1);
    lVar2 = (**(code **)(*plVar1 + 0x2f8))(plVar1);
    if (lVar2 == 0) {
      plVar1 = (longlong *)FUN_009dab20(param_1);
      uVar3 = FUN_009d3290(param_2);
      (**(code **)(*plVar1 + 0x1b0))(plVar1,uVar3);
    }
    else {
      plVar1 = (longlong *)FUN_009dab20(param_1);
      uVar3 = FUN_009d3290(param_2);
      plVar4 = (longlong *)FUN_009dab20(param_1);
      uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4);
      (**(code **)(*plVar1 + 0x2a8))(plVar1,uVar3,uVar5);
    }
  }
  FUN_0041b800(param_1 + 0xb8);
  return 0;
}

