/* Ghidra address: 0041ed00 */
/* Ghidra symbol: FUN_0041ed00 */


undefined * FUN_0041ed00(undefined8 param_1,undefined8 *param_2)

{
  undefined *local_20 [2];
  
  FUN_00414e00(param_2);
  local_20[0] = (undefined *)0x0;
  FUN_00414ad0(local_20,*param_2);
  if (local_20[0] == (undefined *)0x0) {
    local_20[0] = &DAT_01dbd648;
  }
  return local_20[0];
}

