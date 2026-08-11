/* Ghidra address: 00ce0ee0 */
/* Ghidra symbol: FUN_00ce0ee0 */


void FUN_00ce0ee0(longlong param_1)

{
  FUN_00414480(param_1 + 0x10);
  FUN_00414480(param_1 + 0x20);
  FUN_00414480(param_1 + 0x28);
  FUN_00414480(param_1 + 0x78);
  FUN_00414480(param_1 + 0x30);
  FUN_00414480(param_1 + 0x38);
  FUN_00414480(param_1 + 0x40);
  FUN_00414480(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
  FUN_00414480(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_00414480(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x90))(*(longlong **)(param_1 + 0x18));
  return;
}

