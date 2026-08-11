/* Ghidra address: 007473a0 */
/* Ghidra symbol: FUN_007473a0 */


void FUN_007473a0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00737e18);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    FUN_004b1830(param_2,0);
  }
  return;
}

