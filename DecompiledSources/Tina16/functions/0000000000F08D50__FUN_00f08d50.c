/* Ghidra address: 00f08d50 */
/* Ghidra symbol: FUN_00f08d50 */


undefined8 FUN_00f08d50(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  bool bVar3;
  
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
    bVar3 = *(short *)((longlong)&UNWIND_INFO_01efa898 + (ulonglong)uVar2 * 2 + 2) == param_2;
    if (bVar3) break;
  } while (uVar2 < 0xb);
  if (bVar3) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,param_1,uVar2 + 0x3cd);
  }
  return param_1;
}

