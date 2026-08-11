/* Ghidra address: 01123220 */
/* Ghidra symbol: FUN_01123220 */


void FUN_01123220(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xde0);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x530) == '\0')) {
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  FUN_01123250(param_1,uVar2);
  return;
}

