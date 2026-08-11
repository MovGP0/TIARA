/* Ghidra address: 0156ccc0 */
/* Ghidra symbol: FUN_0156ccc0 */


undefined8 FUN_0156ccc0(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  *param_2 = 0;
  if (*(char *)(param_1 + 0x7b9) == '\0') {
    if (*(char *)(param_1 + 0x7b8) != '\0') {
      *param_2 = 8;
      uVar1 = 1;
    }
  }
  else {
    *param_2 = 4;
    uVar1 = 1;
  }
  return uVar1;
}

