/* Ghidra address: 00c0c6d0 */
/* Ghidra symbol: FUN_00c0c6d0 */


void FUN_00c0c6d0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00655080(param_1);
  if (((*(uint *)(param_1 + 0x63a) & 0x20) != 0) && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_03ea7391(uVar1,0xffffffff);
  }
  FUN_00bfd160(param_1);
  return;
}

