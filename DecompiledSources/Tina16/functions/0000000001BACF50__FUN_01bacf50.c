/* Ghidra address: 01bacf50 */
/* Ghidra symbol: FUN_01bacf50 */


void FUN_01bacf50(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x278))(*(longlong **)(param_1 + 0x700));
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),0);
  plVar1 = *(longlong **)(param_1 + 0x6e0);
  uVar2 = (**(code **)(*plVar1 + 0xf0))(plVar1);
  FUN_00688430(plVar1,uVar2);
  FUN_00688430(*(undefined8 *)(param_1 + 0x6c8),
               *(char *)(*(longlong *)(param_1 + 0x6e0) + 0x4a8) == '\0');
  return;
}

