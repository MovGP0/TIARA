/* Ghidra address: 01389c20 */
/* Ghidra symbol: FUN_01389c20 */


void FUN_01389c20(longlong param_1,char param_2)

{
  char *pcVar1;
  undefined8 local_20;
  
  local_20 = FUN_00b90090(*(undefined8 *)(param_1 + 0xcb8));
  if (param_2 == '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x870) + 0x2a) != '\0') {
      pcVar1 = (char *)(*(longlong *)(param_1 + 0x870) + 0x2a);
      *pcVar1 = *pcVar1 + -1;
    }
  }
  else if ((param_2 == '\x01') &&
          ((int)(uint)*(byte *)(*(longlong *)(param_1 + 0x870) + 0x2a) <
           (int)(*(byte *)(param_1 + 0xe42) - 1))) {
    pcVar1 = (char *)(*(longlong *)(param_1 + 0x870) + 0x2a);
    *pcVar1 = *pcVar1 + '\x01';
  }
  (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x88))
            (*(longlong **)(param_1 + 0xe88),*(undefined1 *)(*(longlong *)(param_1 + 0x870) + 0x2a))
  ;
  (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x80))
            (*(longlong **)(param_1 + 0xe88),*(longlong *)(param_1 + 0x870) + 0x2a,&local_20,
             *(undefined1 *)(param_1 + 0xe90),1);
  FUN_00b90440(*(undefined8 *)(param_1 + 0xcb8),local_20);
  return;
}

