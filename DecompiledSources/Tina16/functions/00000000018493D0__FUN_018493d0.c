/* Ghidra address: 018493d0 */
/* Ghidra symbol: FUN_018493d0 */


undefined8 FUN_018493d0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = FUN_01847410(param_1);
  if (param_3 == iVar1) {
    FUN_00461840(param_2,param_1 + 0xf0);
  }
  else {
    plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_3);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
  }
  return param_2;
}

