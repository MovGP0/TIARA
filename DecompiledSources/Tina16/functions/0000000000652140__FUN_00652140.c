/* Ghidra address: 00652140 */
/* Ghidra symbol: FUN_00652140 */


void FUN_00652140(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x120))(plVar1,*(longlong *)(param_2 + 0x10) + 0x40);
    if (cVar2 == '\0') {
      *(undefined8 *)(param_2 + 0x18) = 1;
    }
  }
  return;
}

