/* Ghidra address: 00667d20 */
/* Ghidra symbol: FUN_00667d20 */


undefined8 FUN_00667d20(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x90))(plVar1,*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x31) = uVar2;
  }
  return *(undefined8 *)(param_1 + 0x31);
}

