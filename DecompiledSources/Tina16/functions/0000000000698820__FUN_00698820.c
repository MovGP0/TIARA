/* Ghidra address: 00698820 */
/* Ghidra symbol: FUN_00698820 */


void FUN_00698820(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_00786bc0(param_1,param_2);
  FUN_00785c20(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x42) != '\0') {
    cVar1 = FUN_00786a60(param_1);
    if (cVar1 != *(char *)((longlong)param_1 + 0x41)) {
      *(char *)((longlong)param_1 + 0x41) = cVar1;
      (**(code **)(*param_1 + 0x58))(param_1);
    }
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

