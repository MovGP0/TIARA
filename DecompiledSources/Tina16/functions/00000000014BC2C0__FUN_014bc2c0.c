/* Ghidra address: 014bc2c0 */
/* Ghidra symbol: FUN_014bc2c0 */


undefined8 FUN_014bc2c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    (**(code **)(param_1 + 0x168))(*(undefined8 *)(param_1 + 0x170),param_1);
  }
  return 0x80004001;
}

