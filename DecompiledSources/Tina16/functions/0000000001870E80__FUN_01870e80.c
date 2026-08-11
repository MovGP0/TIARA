/* Ghidra address: 01870e80 */
/* Ghidra symbol: FUN_01870e80 */


void FUN_01870e80(longlong *param_1)

{
  longlong lVar1;
  
  FUN_0197c160(param_1);
  *(undefined1 *)((longlong)param_1 + 0x73) = 0;
  lVar1 = FUN_01870e20(param_1);
  *(bool *)((longlong)param_1 + 0x72) = lVar1 != 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}

