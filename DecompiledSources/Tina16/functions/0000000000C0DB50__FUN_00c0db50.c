/* Ghidra address: 00c0db50 */
/* Ghidra symbol: FUN_00c0db50 */


undefined1 FUN_00c0db50(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_19;
  
  local_19 = 0;
  if (*(longlong *)(param_1 + 0x740) != 0) {
    (**(code **)(param_1 + 0x740))
              (*(undefined8 *)(param_1 + 0x748),param_1,param_2,&local_19,param_3,param_4);
  }
  return local_19;
}

