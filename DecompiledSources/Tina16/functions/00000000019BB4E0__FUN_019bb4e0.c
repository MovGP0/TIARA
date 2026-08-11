/* Ghidra address: 019bb4e0 */
/* Ghidra symbol: FUN_019bb4e0 */


void FUN_019bb4e0(longlong *param_1,char param_2)

{
  *(char *)(param_1 + 0x93) = param_2;
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x270))(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x94) = 0;
    if ((char)param_1[0x99] == '\0') {
      (**(code **)(*param_1 + 0x268))(param_1);
    }
  }
  FUN_00742eb0(param_1[0x95],(char)param_1[0x93]);
  return;
}

