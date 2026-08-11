/* Ghidra address: 01b05a70 */
/* Ghidra symbol: FUN_01b05a70 */


void FUN_01b05a70(byte *param_1,byte param_2,undefined1 *param_3)

{
  undefined8 local_20 [2];
  
  if ((param_2 != 0) && (param_2 <= (byte)PTR_DAT_02001408[(ulonglong)*param_1 - 1])) {
    local_20[0] = *(undefined8 *)(param_1 + 1);
    FUN_00b909d0(local_20,(param_2 - 1) * 8);
    *param_3 = 3;
    return;
  }
  *param_3 = 0;
  return;
}

