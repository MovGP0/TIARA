/* Ghidra address: 00536e60 */
/* Ghidra symbol: FUN_00536e60 */


undefined8 FUN_00536e60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00536dc0(param_1);
  if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (cVar1 = FUN_00411580(**(undefined8 **)(param_1 + 0x10),param_2), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

