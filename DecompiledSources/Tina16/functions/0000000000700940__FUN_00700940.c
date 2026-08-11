/* Ghidra address: 00700940 */
/* Ghidra symbol: FUN_00700940 */


undefined1
FUN_00700940(longlong param_1,undefined8 param_2,undefined2 param_3,char param_4,undefined8 param_5)

{
  undefined1 local_29;
  
  local_29 = 1;
  if ((param_4 == '\0') && (*(longlong *)(param_1 + 0x570) != 0)) {
    (**(code **)(param_1 + 0x570))
              (*(undefined8 *)(param_1 + 0x578),param_1,param_2,param_3,&local_29);
  }
  if (*(longlong *)(param_1 + 0x550) != 0) {
    (**(code **)(param_1 + 0x550))
              (*(undefined8 *)(param_1 + 0x558),param_1,param_2,param_3,param_4,param_5,&local_29);
  }
  return local_29;
}

