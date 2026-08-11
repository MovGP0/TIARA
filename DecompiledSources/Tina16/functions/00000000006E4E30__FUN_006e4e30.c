/* Ghidra address: 006e4e30 */
/* Ghidra symbol: FUN_006e4e30 */


undefined1 FUN_006e4e30(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_29;
  
  local_29 = 1;
  if (((char)param_3 == '\0') && (*(longlong *)(param_1 + 0x618) != 0)) {
    (**(code **)(param_1 + 0x618))(*(undefined8 *)(param_1 + 0x620),param_1,param_2,&local_29);
  }
  if (*(longlong *)(param_1 + 0x598) != 0) {
    (**(code **)(param_1 + 0x598))
              (*(undefined8 *)(param_1 + 0x5a0),param_1,param_2,param_3,&local_29);
  }
  return local_29;
}

