/* Ghidra address: 0084a020 */
/* Ghidra symbol: FUN_0084a020 */


undefined1 FUN_0084a020(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    (**(code **)(param_1 + 0x5c8))
              (*(undefined8 *)(param_1 + 0x5d0),param_1,param_2,param_3,local_19);
  }
  return local_19[0];
}

