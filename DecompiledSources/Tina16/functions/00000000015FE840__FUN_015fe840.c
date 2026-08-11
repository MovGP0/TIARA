/* Ghidra address: 015fe840 */
/* Ghidra symbol: FUN_015fe840 */


undefined8 FUN_015fe840(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  undefined8 local_20;
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(param_1);
  cVar2 = FUN_01d3f210(param_3);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_3 + 0x1a8);
    lVar3 = FUN_015f3320(local_res10[0],param_3);
    *(undefined1 *)(lVar1 + 0x180) = 1;
    if (lVar3 != 0) {
      FUN_00414ad0(lVar1 + 0x188,*(undefined8 *)(lVar3 + 0x18));
    }
    FUN_00414ad0(param_1,*(undefined8 *)(lVar3 + 0x20));
    FUN_00410f20(lVar3);
  }
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return param_1;
}

