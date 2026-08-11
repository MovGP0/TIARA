/* Ghidra address: 00973960 */
/* Ghidra symbol: FUN_00973960 */


undefined8 FUN_00973960(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x98);
  iVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
  if (iVar2 + -1 == -1) {
    FUN_00414520(param_2);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x98);
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2,iVar2 + -1);
  }
  return param_2;
}

