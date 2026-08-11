/* Ghidra address: 004542c0 */
/* Ghidra symbol: FUN_004542c0 */


undefined8 FUN_004542c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((param_2 == 0) || (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) ||
     (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14))) {
LAB_004542f7:
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      cVar1 = FUN_0043e2c0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8),
                           *(int *)(param_1 + 0x10) * 2);
      if (cVar1 == '\0') goto LAB_004542f7;
    }
    uVar2 = 1;
  }
  return uVar2;
}

