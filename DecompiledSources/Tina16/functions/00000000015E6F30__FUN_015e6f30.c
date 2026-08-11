/* Ghidra address: 015e6f30 */
/* Ghidra symbol: FUN_015e6f30 */


void FUN_015e6f30(longlong param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x75c) == 1) {
    FUN_0064cc50(param_1,*(undefined4 *)(param_1 + 0x754));
  }
  else {
    FUN_0064cc50(param_1,*(undefined4 *)(param_1 + 0x758));
  }
  if (*(char *)(param_1 + 0x730) == '\0') {
    cVar1 = FUN_015e6da0(param_1);
    if (cVar1 != '\0') {
      FUN_015e6e80(param_1,*(undefined8 *)(param_1 + 0x738));
      *(undefined1 *)(param_1 + 0x730) = 1;
      FUN_015e7380(param_1,*(undefined4 *)(param_1 + 0x750));
      FUN_00bfcc50(*(longlong *)(param_1 + 0x710),
                   *(int *)(param_1 + 0x750) - *(int *)(*(longlong *)(param_1 + 0x710) + 0x508) / 2)
      ;
    }
  }
  return;
}

