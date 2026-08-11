/* Ghidra address: 006f8580 */
/* Ghidra symbol: FUN_006f8580 */


undefined1 FUN_006f8580(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_29;
  
  local_29 = 1;
  if (((char)param_3 == '\0') && (*(longlong *)(param_1 + 0x650) != 0)) {
    (**(code **)(param_1 + 0x650))(*(undefined8 *)(param_1 + 0x658),param_1,param_2,&local_29);
  }
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    (**(code **)(param_1 + 0x5c0))
              (*(undefined8 *)(param_1 + 0x5c8),param_1,param_2,param_3,&local_29);
  }
  return local_29;
}

