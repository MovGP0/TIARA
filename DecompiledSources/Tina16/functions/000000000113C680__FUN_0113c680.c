/* Ghidra address: 0113c680 */
/* Ghidra symbol: FUN_0113c680 */


void FUN_0113c680(longlong param_1)

{
  if (*(char *)(param_1 + 0xa70) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x9f0) + 600))(*(longlong **)(param_1 + 0x9f0));
    (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x290))(*(longlong **)(param_1 + 0x9f0),0);
    (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x288))(*(longlong **)(param_1 + 0x9f0),1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x960) + 600))(*(longlong **)(param_1 + 0x960));
    (**(code **)(**(longlong **)(param_1 + 0x960) + 0x290))
              (*(longlong **)(param_1 + 0x960),*(undefined4 *)(param_1 + 0xa6c));
    (**(code **)(**(longlong **)(param_1 + 0x960) + 0x288))(*(longlong **)(param_1 + 0x960),1);
  }
  return;
}

