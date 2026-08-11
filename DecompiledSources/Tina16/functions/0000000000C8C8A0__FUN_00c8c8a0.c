/* Ghidra address: 00c8c8a0 */
/* Ghidra symbol: FUN_00c8c8a0 */


void FUN_00c8c8a0(undefined8 param_1,char param_2,char param_3)

{
  char cVar1;
  
  cVar1 = FUN_00c8c9b0();
  if ((cVar1 != '\0') &&
     (((char)DAT_01ea9398[0x10] == '\0' || param_2 != '\0' || (param_3 != '\0')))) {
    (**(code **)(*DAT_01ea9398 + 0x90))(DAT_01ea9398);
  }
  return;
}

