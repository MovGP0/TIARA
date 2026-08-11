/* Ghidra address: 00f94990 */
/* Ghidra symbol: FUN_00f94990 */


void FUN_00f94990(longlong param_1)

{
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),*(undefined8 *)(param_1 + 0x700));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(param_1 + 0x708));
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))
            (*(longlong **)(param_1 + 0x6f0),*(undefined1 *)(param_1 + 0x714));
  FUN_00f953a0(param_1);
  return;
}

