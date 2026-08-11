/* Ghidra address: 016c9dd0 */
/* Ghidra symbol: FUN_016c9dd0 */


void FUN_016c9dd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_016a5500(&PTR_FUN_016a0e58,1,param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x298) + 0x40);
  (**(code **)(*plVar1 + 0x50))(plVar1,uVar2);
  return;
}

