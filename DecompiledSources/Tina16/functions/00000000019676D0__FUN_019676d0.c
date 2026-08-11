/* Ghidra address: 019676d0 */
/* Ghidra symbol: FUN_019676d0 */


undefined8 FUN_019676d0(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x2d8) == 0) {
LAB_019676fb:
    if (0 < *(int *)(param_1 + 0x2c0)) {
      cVar1 = FUN_01967670(param_1);
      if (cVar1 != '\0') goto LAB_01967714;
    }
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x28))(*(longlong **)(param_1 + 0x2d8));
    if (cVar1 == param_2) goto LAB_019676fb;
LAB_01967714:
    uVar2 = 1;
  }
  return uVar2;
}

