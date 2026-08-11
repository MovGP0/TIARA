/* Ghidra address: 01aeb980 */
/* Ghidra symbol: FUN_01aeb980 */


void FUN_01aeb980(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_01aee630(&local_10,0x3f2,*(undefined4 *)(param_1 + 0x6b8));
    FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_10);
  }
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    FUN_01ca0dd0(*(undefined8 *)PTR_DAT_02004e40,param_1);
  }
  FUN_007fdae0(param_1);
  FUN_00414480(&local_10);
  return;
}

