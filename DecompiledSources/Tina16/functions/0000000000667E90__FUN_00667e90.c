/* Ghidra address: 00667e90 */
/* Ghidra symbol: FUN_00667e90 */


undefined8 FUN_00667e90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0xe8))(plVar1,*(undefined8 *)(param_1 + 8),param_2);
  }
  return uVar2;
}

