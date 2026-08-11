/* Ghidra address: 00caef00 */
/* Ghidra symbol: FUN_00caef00 */


undefined8 FUN_00caef00(longlong *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x110))(param_1,0,0);
  if ((((*(char *)((longlong)param_1 + 0xf1) == '\0') && (param_1[0x21] != 0)) ||
      (cVar1 = FUN_00cb0720(param_1), cVar1 == '\0')) &&
     (*(char *)((longlong)param_1 + 0x124) != '\0')) {
    return 1;
  }
  return 0;
}

