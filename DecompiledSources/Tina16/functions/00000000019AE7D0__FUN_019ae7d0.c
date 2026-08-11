/* Ghidra address: 019ae7d0 */
/* Ghidra symbol: FUN_019ae7d0 */


void FUN_019ae7d0(undefined8 param_1,longlong param_2,char param_3,undefined1 param_4,
                 undefined1 param_5,undefined8 param_6,longlong param_7)

{
  *(char *)(param_2 + 0x10) = param_3;
  *(undefined1 *)(param_2 + 0x13) = param_5;
  if (param_3 == '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x90))(*(longlong **)(param_2 + 0x18));
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x88))(*(longlong **)(param_2 + 0x18),param_6);
  }
  else {
    *(undefined1 *)(param_2 + 0x11) = param_4;
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x90))(*(longlong **)(param_2 + 0x18));
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x88))(*(longlong **)(param_2 + 0x18),param_6);
    if (param_7 != 0) {
      (**(code **)(**(longlong **)(param_2 + 0x20) + 0x90))(*(longlong **)(param_2 + 0x20));
      (**(code **)(**(longlong **)(param_2 + 0x20) + 0x88))(*(longlong **)(param_2 + 0x20),param_7);
    }
  }
  FUN_00f20250(param_2);
  return;
}

