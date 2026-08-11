/* Ghidra address: 010dc1e0 */
/* Ghidra symbol: FUN_010dc1e0 */


void FUN_010dc1e0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)**(undefined8 **)(param_1 + 0x78))(*(undefined8 **)(param_1 + 0x78));
  FUN_010dc020(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

