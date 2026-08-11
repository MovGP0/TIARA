/* Ghidra address: 005ff8e0 */
/* Ghidra symbol: FUN_005ff8e0 */


undefined8 FUN_005ff8e0(longlong *param_1)

{
  undefined8 local_20;
  
  (**(code **)(*param_1 + 0x58))(param_1,1);
  thunk_FUN_04112fdf(param_1[0xc],&local_20);
  return local_20;
}

