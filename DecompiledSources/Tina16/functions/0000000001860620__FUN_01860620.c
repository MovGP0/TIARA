/* Ghidra address: 01860620 */
/* Ghidra symbol: FUN_01860620 */


void FUN_01860620(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_00608dd0(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0185b3d8);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
    FUN_018606d0(param_1,*(undefined8 *)(param_2 + 0x70));
  }
  return;
}

