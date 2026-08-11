/* Ghidra address: 006e4eb0 */
/* Ghidra symbol: FUN_006e4eb0 */


undefined1
FUN_006e4eb0(longlong param_1,undefined8 param_2,undefined2 param_3,char param_4,undefined1 *param_5
            )

{
  undefined1 local_29;
  
  local_29 = 1;
  *param_5 = 1;
  if ((param_4 == '\0') && (*(longlong *)(param_1 + 0x628) != 0)) {
    (**(code **)(param_1 + 0x628))
              (*(undefined8 *)(param_1 + 0x630),param_1,param_2,param_3,&local_29);
  }
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    (**(code **)(param_1 + 0x5a8))
              (*(undefined8 *)(param_1 + 0x5b0),param_1,param_2,param_3,param_4,param_5,&local_29);
  }
  return local_29;
}

