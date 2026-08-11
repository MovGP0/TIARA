/* Ghidra address: 00b07c50 */
/* Ghidra symbol: FUN_00b07c50 */


void FUN_00b07c50(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x490);
  FUN_005fd4e0(plVar1[0xf],0);
  (**(code **)(*plVar1 + 200))(plVar1,0,0);
  (**(code **)(*plVar1 + 0xc0))(plVar1,*(undefined4 *)(param_1 + 0x98),0);
  return;
}

