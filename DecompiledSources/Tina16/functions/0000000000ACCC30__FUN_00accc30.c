/* Ghidra address: 00accc30 */
/* Ghidra symbol: FUN_00accc30 */


void FUN_00accc30(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x158);
  (**(code **)(*plVar1 + 0x290))(plVar1,0);
  (**(code **)(*plVar1 + 0x288))(plVar1,0);
  FUN_00acccd0(param_1,*(undefined8 *)(param_1 + 0x178));
  return;
}

