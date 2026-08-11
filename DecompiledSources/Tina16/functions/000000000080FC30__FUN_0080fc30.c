/* Ghidra address: 0080fc30 */
/* Ghidra symbol: FUN_0080fc30 */


undefined8 FUN_0080fc30(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x10) != '\0') && (cVar1 = FUN_006265e0(), cVar1 != '\0')) {
    uVar2 = FUN_00781840();
    cVar1 = FUN_00779360(uVar2);
    if ((cVar1 != '\0') &&
       ((((*(char *)(param_1 + 0x38) != '\0' || (*(int *)(param_1 + 0x14) != 0)) ||
         (*(int *)(param_1 + 0x18) != 0)) ||
        ((*(int *)(param_1 + 0x1c) != 0 || (*(int *)(param_1 + 0x20) != 0)))))) {
      return 1;
    }
  }
  return 0;
}

