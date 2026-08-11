/* Ghidra address: 007e70b0 */
/* Ghidra symbol: FUN_007e70b0 */


void FUN_007e70b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x91) != '\0') {
    lVar1 = FUN_004113f0(param_2,&PTR_FUN_0063d930);
    FUN_007e7030(param_1,*(undefined1 *)(lVar1 + 0xb1));
    *(undefined1 *)(param_1 + 0x91) = 1;
  }
  return;
}

