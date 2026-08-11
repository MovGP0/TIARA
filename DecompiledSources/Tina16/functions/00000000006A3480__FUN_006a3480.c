/* Ghidra address: 006a3480 */
/* Ghidra symbol: FUN_006a3480 */


void FUN_006a3480(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  plVar1 = (longlong *)FUN_006a35d0(param_1,param_2);
  plVar2 = (longlong *)FUN_006a35d0(param_1,param_3);
  uVar3 = FUN_006a35d0(param_1,param_2);
  uVar4 = FUN_004b1870(uVar3);
  uVar3 = FUN_006a35d0(param_1,param_3);
  uVar5 = FUN_004b1870(uVar3);
  (**(code **)(*plVar1 + 0x28))(plVar1,uVar5);
  (**(code **)(*plVar2 + 0x28))(plVar2,uVar4);
  return;
}

