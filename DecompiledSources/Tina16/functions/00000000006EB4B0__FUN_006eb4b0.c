/* Ghidra address: 006eb4b0 */
/* Ghidra symbol: FUN_006eb4b0 */


undefined1 FUN_006eb4b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x560) != 0) {
    (**(code **)(param_1 + 0x560))
              (*(undefined8 *)(param_1 + 0x568),param_1,param_2,param_3,local_19);
  }
  return local_19[0];
}

