/* Ghidra address: 00667c50 */
/* Ghidra symbol: FUN_00667c50 */


undefined8 FUN_00667c50(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined8 *)(param_1 + 8),param_2);
  }
  return uVar2;
}

