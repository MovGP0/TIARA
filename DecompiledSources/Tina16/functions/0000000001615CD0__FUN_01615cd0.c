/* Ghidra address: 01615cd0 */
/* Ghidra symbol: FUN_01615cd0 */


undefined8 FUN_01615cd0(int *param_1)

{
  undefined8 uVar1;
  
  if ((((param_1 == (int *)0x0) || (*(longlong *)(param_1 + 2) != 0)) ||
      (*(longlong *)(param_1 + 4) != 0)) || ((*param_1 != 0x104 || ((char)param_1[0x2c] == '\0'))))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

