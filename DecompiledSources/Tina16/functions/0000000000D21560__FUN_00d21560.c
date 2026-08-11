/* Ghidra address: 00d21560 */
/* Ghidra symbol: FUN_00d21560 */


undefined4 FUN_00d21560(longlong param_1)

{
  undefined1 local_20 [4];
  undefined4 local_1c [3];
  
  (**(code **)(param_1 + 0x48))(param_1,local_20,local_1c,local_20);
  return local_1c[0];
}

