/* Ghidra address: 0161ddc0 */
/* Ghidra symbol: FUN_0161ddc0 */


undefined8 FUN_0161ddc0(int *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 3)) || ((char)param_1[0x2c] == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

