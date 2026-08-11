/* Ghidra address: 00b06850 */
/* Ghidra symbol: FUN_00b06850 */


void FUN_00b06850(longlong *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if ((char)param_2 == '\0') {
    (**(code **)(*param_1 + 600))(param_1);
    if ((char)param_1[0x96] == '\0') {
      *(undefined1 *)(param_1 + 0x96) = 1;
    }
    else if ((char)param_1[0x96] == '\x01') {
      *(undefined1 *)(param_1 + 0x96) = 0;
    }
    *(bool *)((longlong)param_1 + 0x499) = (char)param_1[0x96] != '\0';
    if (param_1[0x97] != 0) {
      (*(code *)param_1[0x97])(param_1[0x98],param_1,param_2,param_3,param_4,param_5);
    }
    (**(code **)(*param_1 + 0x188))(param_1);
    FUN_00650920(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

