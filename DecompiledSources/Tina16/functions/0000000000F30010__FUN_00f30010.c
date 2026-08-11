/* Ghidra address: 00f30010 */
/* Ghidra symbol: FUN_00f30010 */


void FUN_00f30010(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x10) + 8) != '\0')) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      FUN_00410f20(uVar1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
  }
  return;
}

