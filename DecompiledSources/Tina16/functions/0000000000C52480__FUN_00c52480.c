/* Ghidra address: 00c52480 */
/* Ghidra symbol: FUN_00c52480 */


void FUN_00c52480(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (*(char *)(param_2 + 0x3f) == '\0') {
    cVar1 = FUN_004113d0(*(undefined8 *)(param_2 + 0x60),&PTR_FUN_00434b98);
    if (cVar1 == '\0') {
      FUN_0080d620(*(undefined8 *)PTR_DAT_02004030,*(undefined8 *)(param_2 + 0x60));
    }
  }
  FUN_00c52ac0(*(undefined8 *)(param_2 + 0x50));
  return;
}

