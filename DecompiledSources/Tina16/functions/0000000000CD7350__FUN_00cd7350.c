/* Ghidra address: 00cd7350 */
/* Ghidra symbol: FUN_00cd7350 */


void FUN_00cd7350(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_4 != 0) && (iVar1 = 0, param_3 - 1U < 0x80000000)) {
    do {
      lVar2 = (longlong)iVar1;
      *(byte *)(param_4 + lVar2) = *(byte *)(param_1 + lVar2) ^ *(byte *)(param_2 + lVar2);
      iVar1 = iVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

