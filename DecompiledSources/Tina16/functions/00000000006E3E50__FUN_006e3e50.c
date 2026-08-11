/* Ghidra address: 006e3e50 */
/* Ghidra symbol: FUN_006e3e50 */


undefined1 FUN_006e3e50(longlong param_1,undefined8 param_2)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (((*(char *)(param_1 + 0x58d) == '\0') && ((*(uint *)(param_1 + 0xa4) & 0x2000) == 0)) &&
     (*(longlong *)(param_1 + 0x5d8) != 0)) {
    (**(code **)(param_1 + 0x5d8))(*(undefined8 *)(param_1 + 0x5e0),param_1,param_2,local_19);
  }
  return local_19[0];
}

