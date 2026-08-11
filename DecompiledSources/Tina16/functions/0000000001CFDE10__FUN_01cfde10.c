/* Ghidra address: 01cfde10 */
/* Ghidra symbol: FUN_01cfde10 */


void FUN_01cfde10(undefined8 param_1,byte *param_2,int param_3,undefined1 *param_4)

{
  undefined8 local_20 [2];
  
  if ((param_3 < 1) || ((int)(uint)(byte)PTR_DAT_02001408[(ulonglong)*param_2 - 1] < param_3)) {
    *param_4 = 0;
  }
  else {
    local_20[0] = *(undefined8 *)(param_2 + 1);
    FUN_00b909d0(local_20,(param_3 + -1) * 8);
    *param_4 = 3;
  }
  return;
}

