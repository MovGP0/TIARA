/* Ghidra address: 00683950 */
/* Ghidra symbol: FUN_00683950 */


ulonglong FUN_00683950(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    uVar1 = FUN_0065b870();
    uVar2 = thunk_FUN_041b2403(uVar1,0x147,0,0);
  }
  else {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x4a4);
  }
  return uVar2;
}

