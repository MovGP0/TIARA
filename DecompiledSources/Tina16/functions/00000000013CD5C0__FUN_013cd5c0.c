/* Ghidra address: 013cd5c0 */
/* Ghidra symbol: FUN_013cd5c0 */


void FUN_013cd5c0(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_013d0330(param_1,*(undefined8 *)(param_1 + 0x848),1);
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))(*(longlong **)(param_1 + 0x700),0);
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))(*(longlong **)(param_1 + 0x708),0);
    (**(code **)(**(longlong **)(param_1 + 0x848) + 0x128))(*(longlong **)(param_1 + 0x848),1);
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))(*(longlong **)(param_1 + 0x710),1);
  }
  else {
    FUN_013d0330(param_1,*(undefined8 *)(param_1 + 0x700),0);
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))(*(longlong **)(param_1 + 0x700),1);
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))(*(longlong **)(param_1 + 0x708),1);
    (**(code **)(**(longlong **)(param_1 + 0x848) + 0x128))(*(longlong **)(param_1 + 0x848),0);
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))(*(longlong **)(param_1 + 0x710),0);
  }
  return;
}

