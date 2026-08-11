/* Ghidra address: 00649270 */
/* Ghidra symbol: FUN_00649270 */


void FUN_00649270(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_00648e60(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00637800);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  }
  return;
}

