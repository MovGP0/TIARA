/* Ghidra address: 00668040 */
/* Ghidra symbol: FUN_00668040 */


void FUN_00668040(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (*param_2 != *(longlong *)(param_1 + 0x31)) {
    *(longlong *)(param_1 + 0x31) = *param_2;
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x98))(plVar1,*(undefined8 *)(param_1 + 8),param_1 + 0x31);
    }
  }
  return;
}

