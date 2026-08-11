/* Ghidra address: 01993e90 */
/* Ghidra symbol: FUN_01993e90 */


undefined8 FUN_01993e90(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 != 0) && (*(char *)(param_2 + 10) != '\0')) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      *(longlong *)(param_1 + 0x28) = param_2;
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}

