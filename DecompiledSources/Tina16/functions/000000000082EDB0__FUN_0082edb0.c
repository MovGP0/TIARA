/* Ghidra address: 0082edb0 */
/* Ghidra symbol: FUN_0082edb0 */


bool FUN_0082edb0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x38);
  iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,&local_10);
  return iVar2 == 0;
}

