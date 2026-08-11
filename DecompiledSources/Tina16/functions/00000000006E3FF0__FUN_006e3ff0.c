/* Ghidra address: 006e3ff0 */
/* Ghidra symbol: FUN_006e3ff0 */


undefined1 FUN_006e3ff0(longlong param_1,undefined8 param_2)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if ((*(char *)(param_1 + 0x58d) == '\0') && (*(longlong *)(param_1 + 0x688) != 0)) {
    (**(code **)(param_1 + 0x688))(*(undefined8 *)(param_1 + 0x690),param_1,param_2,local_19);
  }
  return local_19[0];
}

