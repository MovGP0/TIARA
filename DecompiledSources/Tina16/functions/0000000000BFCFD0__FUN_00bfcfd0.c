/* Ghidra address: 00bfcfd0 */
/* Ghidra symbol: FUN_00bfcfd0 */


void FUN_00bfcfd0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00c09df0(param_1);
  if (((uVar2 & 0x1000) == 0) && ((*(ushort *)(param_1 + 0x638) & 0x10) == 0)) {
    uVar3 = FUN_0065b870(param_1);
    iVar1 = thunk_FUN_0418d03a(uVar3);
    if (iVar1 != 0) {
      *(ushort *)(param_1 + 0x638) = *(ushort *)(param_1 + 0x638) | 0x10;
    }
  }
  return;
}

