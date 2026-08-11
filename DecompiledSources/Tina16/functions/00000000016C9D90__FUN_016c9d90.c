/* Ghidra address: 016c9d90 */
/* Ghidra symbol: FUN_016c9d90 */


void FUN_016c9d90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_016a4670(&DAT_0169ffe0,1,param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x298) + 0x30);
  (**(code **)(*plVar1 + 0x50))(plVar1,uVar2);
  return;
}

