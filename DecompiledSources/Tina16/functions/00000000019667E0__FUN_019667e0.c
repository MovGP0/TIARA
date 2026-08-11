/* Ghidra address: 019667e0 */
/* Ghidra symbol: FUN_019667e0 */


undefined8 FUN_019667e0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_01967670(param_1);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x2d8) == 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c8) + 0x18);
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x20))
                        (*(longlong **)(param_1 + 0x2d8),2);
    }
  }
  return uVar2;
}

