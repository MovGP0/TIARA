/* Ghidra address: 00bf3710 */
/* Ghidra symbol: FUN_00bf3710 */


void FUN_00bf3710(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(ushort *)(param_1 + 0x638) & 0x10) != 0) {
    uVar2 = FUN_0065b870(param_1);
    iVar1 = thunk_FUN_0399f62b(uVar2);
    if (iVar1 != 0) {
      *(ushort *)(param_1 + 0x638) = *(ushort *)(param_1 + 0x638) & 0xffef;
    }
  }
  return;
}

