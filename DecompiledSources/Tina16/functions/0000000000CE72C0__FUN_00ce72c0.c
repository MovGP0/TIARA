/* Ghidra address: 00ce72c0 */
/* Ghidra symbol: FUN_00ce72c0 */


undefined8 FUN_00ce72c0(longlong param_1,longlong param_2,byte param_3)

{
  char cVar1;
  undefined1 auStack_38 [40];
  
  cVar1 = FUN_00ce7210(auStack_38);
  if ((((cVar1 != '\0') &&
       (cVar1 = FUN_00ce6d70(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_1 + 0x38)),
       cVar1 != '\0')) &&
      ((*(byte *)(param_1 + 0x40) == 0 || ((param_3 & *(byte *)(param_1 + 0x40)) != 0)))) &&
     ((*(char *)(param_1 + 0x28) == '\0' ||
      ((*(char *)(param_1 + 0x28) != '\0' &&
       (cVar1 = FUN_00ce6df0(*(undefined8 *)(param_2 + 0x10)), cVar1 != '\0')))))) {
    return 1;
  }
  return 0;
}

