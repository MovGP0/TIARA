/* Ghidra address: 01ba9650 */
/* Ghidra symbol: FUN_01ba9650 */


undefined8 FUN_01ba9650(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01baa420(*(undefined8 *)PTR_DAT_02002a68,plVar1,*(undefined8 *)(param_1 + 0x28));
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_3);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  FUN_004169a0(param_2,uVar2);
  FUN_00410f20(plVar1);
  return param_2;
}

