/* Ghidra address: 01053d10 */
/* Ghidra symbol: FUN_01053d10 */


void FUN_01053d10(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x9d8) != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x260))(*(longlong **)(param_1 + 0x858))
    ;
    *(char *)(param_1 + 0x940) = (char)uVar1;
    FUN_00f8d160(*(undefined8 *)(param_1 + 0x9d8),uVar1);
  }
  return;
}

