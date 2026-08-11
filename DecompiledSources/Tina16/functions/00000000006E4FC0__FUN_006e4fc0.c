/* Ghidra address: 006e4fc0 */
/* Ghidra symbol: FUN_006e4fc0 */


void FUN_006e4fc0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x561) & 1) == 0) {
    FUN_006e5530(param_1,param_2);
  }
  else {
    lVar2 = FUN_006e2530(param_1);
    if ((param_2 != lVar2) && ((param_2 == 0 || (*(char *)(param_2 + 0x38) == '\0')))) {
      FUN_006e2590(param_1,param_2);
    }
    iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x568),param_2);
    if (iVar1 == -1) {
      FUN_006e54c0(param_1,param_2,0);
    }
    else {
      FUN_006e5480(param_1,iVar1);
    }
  }
  return;
}

