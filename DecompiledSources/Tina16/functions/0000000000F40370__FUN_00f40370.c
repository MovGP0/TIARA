/* Ghidra address: 00f40370 */
/* Ghidra symbol: FUN_00f40370 */


longlong * FUN_00f40370(longlong *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_00829530(&PTR_FUN_00f3ff38,1,param_1);
  plVar2[0x40] = (longlong)param_1;
  plVar2[0x3f] = (longlong)FUN_00f40800;
  plVar2[0x2c] = (longlong)param_1;
  plVar2[0x2b] = (longlong)FUN_00f40710;
  plVar2[0x30] = (longlong)param_1;
  plVar2[0x2f] = (longlong)FUN_00f407e0;
  FUN_0064dbe0(plVar2,*(undefined1 *)((longlong)param_1 + 0xa9));
  uVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  (**(code **)(*plVar2 + 0x128))(plVar2,uVar1);
  *(undefined1 *)(plVar2 + 0x69) = 2;
  FUN_0082a4f0(plVar2,1);
  (**(code **)(*plVar2 + 0x130))(plVar2,param_1);
  return plVar2;
}

