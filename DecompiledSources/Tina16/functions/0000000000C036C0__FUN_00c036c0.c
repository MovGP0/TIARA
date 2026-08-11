/* Ghidra address: 00c036c0 */
/* Ghidra symbol: FUN_00c036c0 */


void FUN_00c036c0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_00bcbe50(param_2,1,0x7ffffffe);
  if (*(int *)(param_1 + 0x510) != iVar1) {
    *(int *)(param_1 + 0x510) = iVar1;
    uVar2 = FUN_00c09df0(param_1);
    if ((uVar2 & 0x40000) != 0) {
      FUN_00bfd160(param_1);
    }
  }
  return;
}

