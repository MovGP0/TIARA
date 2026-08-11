/* Ghidra address: 01b7ce00 */
/* Ghidra symbol: FUN_01b7ce00 */


void FUN_01b7ce00(longlong param_1)

{
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)(PTR_DAT_02004010 + 0x7e0));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6e0),*(undefined8 *)(PTR_DAT_02004010 + 0x7e8));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x708),*(undefined8 *)(PTR_DAT_02004010 + 0x7f0));
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))
            (*(longlong **)(param_1 + 0x6d0),*PTR_DAT_02002198);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x6f0),(ulonglong)((byte)PTR_DAT_02004010[0x2ad] + 2) % 3);
  FUN_0064cf60(param_1,0x48e);
  return;
}

