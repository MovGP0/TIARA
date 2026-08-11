/* Ghidra address: 00667bb0 */
/* Ghidra symbol: FUN_00667bb0 */


void FUN_00667bb0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0063bcc0);
  if (cVar1 == '\0') {
    FUN_004b1190(param_1,param_2);
  }
  else {
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_1 + 0x20);
    *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(param_1 + 0x21);
    FUN_004af610(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_1 + 0x28),0,0);
    *(undefined8 *)(param_2 + 0x31) = *(undefined8 *)(param_1 + 0x31);
    *(undefined2 *)(param_2 + 0x39) = *(undefined2 *)(param_1 + 0x39);
  }
  return;
}

