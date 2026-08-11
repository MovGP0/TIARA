/* Ghidra address: 00814e10 */
/* Ghidra symbol: FUN_00814e10 */


undefined4 FUN_00814e10(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar2 = 0;
  do {
    local_40 = param_2;
    local_3c = param_3;
    cVar1 = FUN_00423210(param_1 + 0x58 + (longlong)iVar2 * 0x18,&local_40);
    if (cVar1 != '\0') {
      return *(undefined4 *)(param_1 + 0x50 + (longlong)iVar2 * 0x18);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 3);
  return 0xffffffff;
}

