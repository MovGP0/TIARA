/* Ghidra address: 00f6ed70 */
/* Ghidra symbol: FUN_00f6ed70 */


void FUN_00f6ed70(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_00f6dfb0(&PTR_FUN_00f68790,1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  *(undefined1 *)(lVar1 + 0x11) = 1;
  FUN_00f6e180(lVar1,2);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),lVar1);
  FUN_00f6e1e0(lVar1,param_2,param_3);
  return;
}

