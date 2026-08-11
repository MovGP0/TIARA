/* Ghidra address: 00703a20 */
/* Ghidra symbol: FUN_00703a20 */


void FUN_00703a20(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    cVar1 = FUN_004113d0(*(undefined8 *)(param_2 + 8),&PTR_FUN_00640c18);
    if ((cVar1 != '\0') && (*(int *)(param_2 + 0x10) != 0)) {
      FUN_007034c0(param_1,*(undefined8 *)(param_2 + 8));
    }
  }
  return;
}

