/* Ghidra address: 00af9700 */
/* Ghidra symbol: FUN_00af9700 */


void FUN_00af9700(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x9c8);
  if (plVar1 != (longlong *)0x0) {
    if ((char)plVar1[0x13] != '\0') {
      (**(code **)(*plVar1 + 0xa8))(plVar1);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x9c8);
    *(undefined8 *)(param_1 + 0x9c8) = 0;
    FUN_00410f20(uVar2);
  }
  return;
}

