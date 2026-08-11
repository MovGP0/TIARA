/* Ghidra address: 01c3d3d0 */
/* Ghidra symbol: FUN_01c3d3d0 */


void FUN_01c3d3d0(longlong param_1,char param_2)

{
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6f0)) {
    if (param_2 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x828) + 0x268))(*(longlong **)(param_1 + 0x828),1);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x820) + 0x268))(*(longlong **)(param_1 + 0x820),1);
    }
  }
  else {
    *(char *)(param_1 + 0x950) = param_2;
  }
  return;
}

