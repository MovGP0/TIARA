/* Ghidra address: 01b6fd50 */
/* Ghidra symbol: FUN_01b6fd50 */


void FUN_01b6fd50(longlong param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  
  if (*PTR_DAT_02003b20 != '\0') {
    if ((*(char *)(param_1 + 0x9cd) == '\0') &&
       (*(char *)(*(longlong *)(param_1 + 0x9d8) + 0x68) != '\0')) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    *param_3 = cVar1;
    if (*param_3 == '\0') {
      FUN_016fd8d0(L"Please close all measurement\rinstruments before exiting TINA.");
    }
  }
  return;
}

