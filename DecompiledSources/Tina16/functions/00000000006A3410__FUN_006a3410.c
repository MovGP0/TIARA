/* Ghidra address: 006a3410 */
/* Ghidra symbol: FUN_006a3410 */


void FUN_006a3410(longlong param_1,longlong param_2,longlong param_3)

{
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      FUN_0043e6d0(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_3 + 0x20));
    }
    else {
      FUN_0043e650(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_3 + 0x20));
    }
  }
  else {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1,param_2,param_3);
  }
  return;
}

