/* Ghidra address: 0064f990 */
/* Ghidra symbol: FUN_0064f990 */


undefined1 FUN_0064f990(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    (**(code **)(param_1 + 0x138))
              (*(undefined8 *)(param_1 + 0x140),param_1,param_2,param_3,local_19);
  }
  return local_19[0];
}

