/* Ghidra address: 00787a60 */
/* Ghidra symbol: FUN_00787a60 */


undefined8 FUN_00787a60(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  lVar1 = FUN_00787d50(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_00787d70(param_1);
    if ((((uVar2 & 0x1000) != 0x1000) && (uVar2 = FUN_00787d70(param_1), (uVar2 & 0x2000) != 0x2000)
        ) && (uVar2 = FUN_00787d70(param_1), (uVar2 & 0x400000) != 0x400000)) {
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}

