/* Ghidra address: 01662130 */
/* Ghidra symbol: FUN_01662130 */


void FUN_01662130(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [40];
  
  if (*(int *)(param_1 + 0x198) == 0) {
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  else {
    if ((1 < *(int *)(param_1 + 0x198)) && ((char)param_2 == '\0')) {
      FUN_01661f90(auStack_38,0,*(int *)(param_1 + 0x198) + -1);
    }
    FUN_01660de0(param_1,param_2);
  }
  return;
}

