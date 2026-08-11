/* Ghidra address: 00c35490 */
/* Ghidra symbol: FUN_00c35490 */


void FUN_00c35490(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xe0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x88))(plVar1);
    *(undefined1 *)(param_1 + 0xf0) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    FUN_00410f20(uVar2);
  }
  return;
}

