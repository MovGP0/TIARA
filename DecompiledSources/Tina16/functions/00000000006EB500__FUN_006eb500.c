/* Ghidra address: 006eb500 */
/* Ghidra symbol: FUN_006eb500 */


undefined1 FUN_006eb500(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_19 [9];
  
  local_19[0] = 0;
  if (*(longlong *)(param_1 + 0x550) != 0) {
    (**(code **)(param_1 + 0x550))
              (*(undefined8 *)(param_1 + 0x558),param_1,param_2,param_3,local_19);
  }
  return local_19[0];
}

