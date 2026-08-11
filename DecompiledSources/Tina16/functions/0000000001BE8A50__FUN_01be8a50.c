/* Ghidra address: 01be8a50 */
/* Ghidra symbol: FUN_01be8a50 */


void FUN_01be8a50(longlong *param_1)

{
  FUN_01c03e00(param_1);
  (**(code **)(*param_1 + 0x108))(param_1);
  (**(code **)(*(longlong *)param_1[0x17] + 0x10))
            ((longlong *)param_1[0x17],*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110));
  return;
}

