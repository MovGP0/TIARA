/* Ghidra address: 00c0e9a0 */
/* Ghidra symbol: FUN_00c0e9a0 */


undefined1
FUN_00c0e9a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 local_19;
  
  local_19 = 0;
  if (*(longlong *)(param_1 + 0x730) != 0) {
    (**(code **)(param_1 + 0x730))
              (*(undefined8 *)(param_1 + 0x738),param_1,param_2,param_3,param_4,param_5,&local_19);
  }
  return local_19;
}

