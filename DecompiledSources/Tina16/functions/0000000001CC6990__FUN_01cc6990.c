/* Ghidra address: 01cc6990 */
/* Ghidra symbol: FUN_01cc6990 */


void FUN_01cc6990(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if ((*(longlong *)PTR_DAT_02004e40 != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x458), lVar1 != 0)) {
    FUN_004167d0(local_20,lVar1);
    lVar1 = FUN_01c98770(*(undefined8 *)PTR_DAT_02004e40,local_20[0]);
    if (lVar1 != 0) {
      FUN_019ad7e0(lVar1,param_2);
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return;
}

