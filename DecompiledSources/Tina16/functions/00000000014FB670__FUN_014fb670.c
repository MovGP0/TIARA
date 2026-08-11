/* Ghidra address: 014fb670 */
/* Ghidra symbol: FUN_014fb670 */


void FUN_014fb670(longlong param_1)

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
  else if ((*(char *)(param_1 + 0x568) == '\x01') && (*(char *)(param_1 + 0x569) == '\x01')) {
    uVar1 = 0;
  }
  else if ((*(char *)(param_1 + 0x568) == '\0') && (*(char *)(param_1 + 0x569) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
  }
  FUN_014fa200(param_1,0,uVar1,0);
  return;
}

