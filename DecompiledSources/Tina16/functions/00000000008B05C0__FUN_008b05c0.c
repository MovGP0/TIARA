/* Ghidra address: 008b05c0 */
/* Ghidra symbol: FUN_008b05c0 */


longlong * FUN_008b05c0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  short local_a;
  
  local_20 = auStack_48;
  FUN_0041b800(param_1);
  if (param_2 != 0) {
    if ((DAT_01e245a8 != (code *)0x0) && ((*DAT_01e245a8)(param_1,param_2), *param_1 != 0)) {
      return param_1;
    }
    local_a = FUN_00882430(param_2);
    if (local_a != 0) {
      FUN_00874360(param_1,local_a);
    }
  }
  if (*param_1 == 0) {
    FUN_00874520(param_1);
  }
  return param_1;
}

