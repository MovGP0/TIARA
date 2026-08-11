/* Ghidra address: 01b07dd0 */
/* Ghidra symbol: FUN_01b07dd0 */


undefined8 FUN_01b07dd0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x22b8) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}

