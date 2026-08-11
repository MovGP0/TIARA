/* Ghidra address: 0189a0e0 */
/* Ghidra symbol: FUN_0189a0e0 */


longlong * FUN_0189a0e0(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if (param_2 == '\0') {
    plVar1 = (longlong *)FUN_01899af0(&PTR_FUN_018965d0,1,param_1);
  }
  else if (param_2 == '\x01') {
    plVar1 = (longlong *)FUN_0189a750(&PTR_FUN_018962a0,1,param_1);
  }
  else {
    plVar1 = (longlong *)FUN_0189a750(&PTR_FUN_018962a0,1,param_1);
  }
  (**(code **)(*plVar1 + 0x130))(plVar1,param_1);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x4b8),plVar1);
  return plVar1;
}

