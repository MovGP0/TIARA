/* Ghidra address: 00e81ae0 */
/* Ghidra symbol: FUN_00e81ae0 */


undefined4 FUN_00e81ae0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_004aef90(*(undefined8 *)(param_1 + 0x400b8),0);
  iVar1 = FUN_00e81b60(param_1,param_2);
  while (0 < iVar1) {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x400b8),(longlong)iVar1);
    iVar1 = FUN_00e817c0(param_1);
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x400b8) + 0x10);
}

