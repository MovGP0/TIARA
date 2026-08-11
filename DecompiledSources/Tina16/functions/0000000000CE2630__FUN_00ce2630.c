/* Ghidra address: 00ce2630 */
/* Ghidra symbol: FUN_00ce2630 */


undefined8 FUN_00ce2630(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((lVar1 < 0) && (*(longlong *)(param_1 + 0x20) < 0)) {
    if (*(longlong *)(param_1 + 0x28) < 0) {
      FUN_00414480(param_2);
    }
    else {
      FUN_0043f780(&local_28,*(longlong *)(param_1 + 0x28));
      FUN_00416ba0(param_2,&LAB_00ce2768,local_28);
    }
  }
  else if (*(longlong *)(param_1 + 0x20) < 0) {
    FUN_0043f780(&local_20,lVar1);
    FUN_00416ba0(param_2,local_20,&LAB_00ce2768);
  }
  else {
    FUN_0043f780(&local_10,lVar1);
    FUN_0043f780(&local_18,*(undefined8 *)(param_1 + 0x20));
    FUN_00416cd0(param_2,3,local_10,&LAB_00ce2768,local_18);
  }
  FUN_00414560(&local_28,4);
  return param_2;
}

