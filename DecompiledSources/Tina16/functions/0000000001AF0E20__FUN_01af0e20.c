/* Ghidra address: 01af0e20 */
/* Ghidra symbol: FUN_01af0e20 */


void FUN_01af0e20(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00c39530(*(undefined8 *)(param_1 + 0x780),param_2);
  if ((*(longlong *)PTR_DAT_02004e40 != 0) &&
     (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x27d0) != '\0')) {
    local_20[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x780) + 800);
    local_18 = 0;
    FUN_00442f70(&local_10,*(undefined8 *)(param_1 + 2000),local_20,0);
    FUN_0080c630(*(undefined8 *)PTR_DAT_02004030,local_10);
  }
  iVar1 = FUN_00c38790(*(undefined8 *)(param_1 + 0x780));
  if (iVar1 == 100) {
    *(undefined1 *)(param_1 + 0x7b0) = 1;
    *(undefined4 *)(param_1 + 0x508) = 1;
  }
  FUN_00414480(&local_10);
  return;
}

