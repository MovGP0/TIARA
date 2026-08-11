/* Ghidra address: 009abec0 */
/* Ghidra symbol: FUN_009abec0 */


bool FUN_009abec0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x38);
  iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0);
  return iVar2 == 0;
}

