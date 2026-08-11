/* Ghidra address: 006a3920 */
/* Ghidra symbol: FUN_006a3920 */


undefined4 FUN_006a3920(longlong param_1)

{
  undefined4 local_1c [3];
  
  local_1c[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    (**(code **)(param_1 + 0x160))(*(undefined8 *)(param_1 + 0x168),param_1,local_1c);
  }
  return local_1c[0];
}

