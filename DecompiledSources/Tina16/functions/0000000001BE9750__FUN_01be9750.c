/* Ghidra address: 01be9750 */
/* Ghidra symbol: FUN_01be9750 */


undefined8 FUN_01be9750(longlong *param_1,int *param_2)

{
  if (*param_2 - 0xb000U < 2) {
    *(undefined1 *)(param_1 + 0xc5) = 0;
    if (*(char *)((longlong)param_1 + 0x592) != '\0') {
      (**(code **)(*param_1 + 0x408))(param_1);
    }
    if (((char)param_1[0x98] == '\0') || (*(longlong *)PTR_DAT_02001a48 == 0)) {
      FUN_01be8ae0(param_1,*param_2 == 0xb001);
    }
  }
  return 0;
}

