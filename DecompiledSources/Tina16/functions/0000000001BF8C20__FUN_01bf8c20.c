/* Ghidra address: 01bf8c20 */
/* Ghidra symbol: FUN_01bf8c20 */


/* WARNING: Removing unreachable block (ram,0x01bf8c52) */

undefined ** FUN_01bf8c20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x178) != 0) {
    (**(code **)(param_1 + 0x178))(*(undefined8 *)(param_1 + 0x180),param_1,&PTR_FUN_01beec68);
  }
  return &PTR_FUN_01beec68;
}

