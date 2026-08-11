/* Ghidra address: 00803760 */
/* Ghidra symbol: FUN_00803760 */


void FUN_00803760(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_0065b870(param_1);
  uVar2 = thunk_FUN_04118143(uVar1,0xfffffff0);
  if (((uVar2 & 0x40000000) != 0x40000000) &&
     ((*(char *)(param_1 + 0x4d6) != '\x02' || ((*(ushort *)(param_1 + 0x34) & 0x10) != 0)))) {
    FUN_00802680(param_1,*(short *)(param_2 + 8) != 0);
  }
  return;
}

