/* Ghidra address: 006e40d0 */
/* Ghidra symbol: FUN_006e40d0 */


undefined1 FUN_006e40d0(longlong param_1,undefined8 param_2)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x658) != 0) {
    (**(code **)(param_1 + 0x658))(*(undefined8 *)(param_1 + 0x660),param_1,param_2,local_19);
  }
  return local_19[0];
}

