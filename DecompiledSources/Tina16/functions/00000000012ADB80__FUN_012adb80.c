/* Ghidra address: 012adb80 */
/* Ghidra symbol: FUN_012adb80 */


void FUN_012adb80(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xf8))
            (*(longlong **)(param_1 + 0xdb8),param_1 + 0xd93,local_res10,0);
  FUN_00b90440(*(undefined8 *)(param_1 + 0xd28),local_res10[0]);
  (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x100))
            (*(longlong **)(param_1 + 0xdb8),*(undefined1 *)(param_1 + 0xd93));
  FUN_012ae700(param_1,6,0);
  if (*(char *)(param_1 + 0xdd0) == '\0') {
    FUN_012ae470(param_1,0,0);
  }
  return;
}

