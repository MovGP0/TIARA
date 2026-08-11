/* Ghidra address: 011a4e30 */
/* Ghidra symbol: FUN_011a4e30 */


void FUN_011a4e30(longlong param_1)

{
  *(undefined4 *)PTR_DAT_02004708 = 0x1068;
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d8),0);
  FUN_00805990(*(undefined8 *)PTR_DAT_020040c0);
  FUN_01199b90();
  *(undefined1 *)(param_1 + 0x42038) = 1;
  FUN_0064de00(*(undefined8 *)(param_1 + 0x818),
               *(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x7a0));
  return;
}

