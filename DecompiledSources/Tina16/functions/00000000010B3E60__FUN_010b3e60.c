/* Ghidra address: 010b3e60 */
/* Ghidra symbol: FUN_010b3e60 */


undefined8 FUN_010b3e60(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_01b23730(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  if ((((cVar1 != '\0') &&
       (cVar1 = FUN_01b23730(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10)),
       cVar1 != '\0')) &&
      (cVar1 = FUN_01b23730(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18)),
      cVar1 != '\0')) &&
     (cVar1 = FUN_004b33d0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20)),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

