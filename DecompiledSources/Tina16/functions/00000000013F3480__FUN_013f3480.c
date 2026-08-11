/* Ghidra address: 013f3480 */
/* Ghidra symbol: FUN_013f3480 */


void FUN_013f3480(longlong param_1)

{
  if (*(char *)(param_1 + 0x8e2) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x128))(*(longlong **)(param_1 + 0x6d0),1);
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))
              (*(longlong **)(param_1 + 0x718),*(undefined1 *)(param_1 + 0x8e1));
    FUN_0068be20(*(undefined8 *)(param_1 + 0x6d8),0);
    FUN_006d8180(*(undefined8 *)(param_1 + 0x708),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))
              (*(longlong **)(param_1 + 0x6d0),*(undefined1 *)(param_1 + 0x77c));
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x128))(*(longlong **)(param_1 + 0x6d0),0);
    FUN_0074b490(*(undefined8 *)(param_1 + 0x718),0);
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))(*(longlong **)(param_1 + 0x718),0);
    FUN_0068be20(*(undefined8 *)(param_1 + 0x6d8),1);
    FUN_006d8180(*(undefined8 *)(param_1 + 0x708),1);
  }
  return;
}

