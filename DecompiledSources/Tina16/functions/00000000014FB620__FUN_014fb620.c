/* Ghidra address: 014fb620 */
/* Ghidra symbol: FUN_014fb620 */


void FUN_014fb620(longlong param_1)

{
  undefined4 uVar1;
  undefined7 uVar2;
  
  uVar2 = (undefined7)((ulonglong)param_1 >> 8);
  if ((*(char *)(param_1 + 0x568) == '\x01') && (*(char *)(param_1 + 0x569) == '\0')) {
    uVar1 = (undefined4)CONCAT71(uVar2,1);
  }
  else if ((*(char *)(param_1 + 0x569) == '\x01') && (*(char *)(param_1 + 0x568) == '\0')) {
    uVar1 = (undefined4)CONCAT71(uVar2,1);
  }
  else {
    uVar1 = 0;
  }
  FUN_014f9fc0(param_1,uVar1);
  return;
}

