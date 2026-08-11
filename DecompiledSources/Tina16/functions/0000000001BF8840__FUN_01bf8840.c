/* Ghidra address: 01bf8840 */
/* Ghidra symbol: FUN_01bf8840 */


void FUN_01bf8840(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf1690);
  if (cVar1 != '\0') {
    FUN_01bfe550(param_2,0);
    FUN_01bfe240(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0xe0) + 0x48));
  }
  return;
}

