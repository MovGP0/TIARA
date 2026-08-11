/* Ghidra address: 007008c0 */
/* Ghidra symbol: FUN_007008c0 */


undefined1 FUN_007008c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_29;
  
  local_29 = 1;
  if (((char)param_3 == '\0') && (*(longlong *)(param_1 + 0x560) != 0)) {
    (**(code **)(param_1 + 0x560))(*(undefined8 *)(param_1 + 0x568),param_1,param_2,&local_29);
  }
  if (*(longlong *)(param_1 + 0x540) != 0) {
    (**(code **)(param_1 + 0x540))
              (*(undefined8 *)(param_1 + 0x548),param_1,param_2,param_3,&local_29);
  }
  return local_29;
}

