/* Ghidra address: 01857300 */
/* Ghidra symbol: FUN_01857300 */


longlong * FUN_01857300(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
  (**(code **)(*plVar1 + 0x88))(plVar1,param_2);
  (**(code **)(*plVar1 + 0x70))(plVar1,param_3);
  return plVar1;
}

