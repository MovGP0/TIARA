/* Ghidra address: 00703570 */
/* Ghidra symbol: FUN_00703570 */


void FUN_00703570(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x498);
  if (plVar1 != param_2) {
    FUN_007034c0(param_1);
    if ((plVar1 != (longlong *)0x0) && ((*(ushort *)((longlong)plVar1 + 0x34) & 8) == 0)) {
      (**(code **)(*plVar1 + 0x130))(plVar1,*(undefined8 *)(param_1 + 0x78));
    }
  }
  return;
}

