/* Ghidra address: 010ef3f0 */
/* Ghidra symbol: FUN_010ef3f0 */


void FUN_010ef3f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
  plVar3 = (longlong *)FUN_005fd7d0(&PTR_FUN_005f35d8,1);
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_2 + 0x78));
  (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_2 + 0x80));
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  FUN_005fd4e0(uVar1,0);
  FUN_005fd670(uVar1,0);
  FUN_005fd640(uVar1,4);
  FUN_005fd6d0(uVar1,1);
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  FUN_005fdab0(uVar1,0);
  FUN_005fdcb0(uVar1,0);
  FUN_010ef1a0(param_1,param_2);
  (**(code **)(**(longlong **)(param_2 + 0x78) + 0x10))(*(longlong **)(param_2 + 0x78),plVar2);
  (**(code **)(**(longlong **)(param_2 + 0x80) + 0x10))(*(longlong **)(param_2 + 0x80),plVar3);
  FUN_00410f20(plVar2);
  FUN_00410f20(plVar3);
  return;
}

