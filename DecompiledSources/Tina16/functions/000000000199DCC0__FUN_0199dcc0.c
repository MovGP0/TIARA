/* Ghidra address: 0199dcc0 */
/* Ghidra symbol: FUN_0199dcc0 */


void FUN_0199dcc0(longlong param_1,longlong *param_2)

{
  if (((param_2 != (longlong *)0x0) && ((undefined **)*param_2 == &PTR_FUN_010b5580)) &&
     (*(char *)((longlong)param_2 + 0x24) == *(char *)(param_1 + 0x48))) {
    if (*(char *)(param_1 + 0x50) != '\0') {
      (**(code **)(*param_2 + 0xa8))(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x210))
      ;
    }
    FUN_0198b6a0(*(undefined8 *)(param_1 + 0x40),param_2);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),param_2);
  }
  return;
}

