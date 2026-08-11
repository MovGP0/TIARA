/* Ghidra address: 006f86a0 */
/* Ghidra symbol: FUN_006f86a0 */


undefined1
FUN_006f86a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined2 param_4,char param_5)

{
  undefined1 local_29;
  
  local_29 = 1;
  if ((param_5 == '\0') && (*(longlong *)(param_1 + 0x670) != 0)) {
    (**(code **)(param_1 + 0x670))
              (*(undefined8 *)(param_1 + 0x678),param_1,param_2,param_3,param_4,&local_29);
  }
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    (**(code **)(param_1 + 0x5e0))
              (*(undefined8 *)(param_1 + 0x5e8),param_1,param_2,param_3,param_4,param_5,&local_29);
  }
  return local_29;
}

