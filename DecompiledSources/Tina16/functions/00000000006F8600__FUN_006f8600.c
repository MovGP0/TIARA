/* Ghidra address: 006f8600 */
/* Ghidra symbol: FUN_006f8600 */


undefined1 FUN_006f8600(longlong param_1,undefined8 param_2,undefined2 param_3,char param_4)

{
  undefined1 local_29;
  
  local_29 = 1;
  if ((param_4 == '\0') && (*(longlong *)(param_1 + 0x660) != 0)) {
    (**(code **)(param_1 + 0x660))
              (*(undefined8 *)(param_1 + 0x668),param_1,param_2,param_3,&local_29);
  }
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    (**(code **)(param_1 + 0x5d0))
              (*(undefined8 *)(param_1 + 0x5d8),param_1,param_2,param_3,param_4,&local_29);
  }
  return local_29;
}

