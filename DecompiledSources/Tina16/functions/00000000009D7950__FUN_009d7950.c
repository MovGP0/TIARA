/* Ghidra address: 009d7950 */
/* Ghidra symbol: FUN_009d7950 */


undefined4 FUN_009d7950(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_009d7890(param_1);
  (**(code **)(*plVar1 + 0x2f0))(plVar1,param_2,param_3);
  return 0;
}

