/* Ghidra address: 007ad610 */
/* Ghidra symbol: FUN_007ad610 */


bool FUN_007ad610(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = 0;
  uStack_20 = 0;
  FUN_00417740(&local_28,&DAT_00767418);
  local_28 = 0;
  uStack_20 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x38);
  iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,&local_28);
  FUN_00417740(&local_28,&DAT_00767418);
  return iVar2 == 0;
}

