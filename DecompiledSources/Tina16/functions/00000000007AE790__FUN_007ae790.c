/* Ghidra address: 007ae790 */
/* Ghidra symbol: FUN_007ae790 */


bool FUN_007ae790(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00417740(&local_30,&DAT_0076f818);
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x38);
  iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,&local_30);
  FUN_00417740(&local_30,&DAT_0076f818);
  return iVar2 == 0;
}

