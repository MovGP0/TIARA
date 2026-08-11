/* Ghidra address: 008a2840 */
/* Ghidra symbol: FUN_008a2840 */


void FUN_008a2840(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x57) == '\0') && (cVar1 = FUN_008a1f90(param_1,param_2), cVar1 != '\0'))
  {
    *(undefined1 *)(param_1 + 0x57) = 1;
    return;
  }
  if ((*(char *)(param_1 + 0x56) == '\0') && (cVar1 = FUN_008a2210(param_1,param_2), cVar1 != '\0'))
  {
    *(undefined1 *)(param_1 + 0x56) = 1;
    return;
  }
  if ((*(char *)(param_1 + 0x55) == '\0') && (cVar1 = FUN_008a2370(param_1,param_2), cVar1 != '\0'))
  {
    *(undefined1 *)(param_1 + 0x55) = 1;
    return;
  }
  if ((*(char *)(param_1 + 0x54) == '\0') && (cVar1 = FUN_008a26d0(param_1,param_2), cVar1 != '\0'))
  {
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  return;
}

