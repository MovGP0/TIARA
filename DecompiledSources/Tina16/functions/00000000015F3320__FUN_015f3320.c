/* Ghidra address: 015f3320 */
/* Ghidra symbol: FUN_015f3320 */


undefined8 FUN_015f3320(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined8 local_30;
  undefined1 local_19 [9];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar2 = *(undefined8 *)(param_2 + 0x1a8);
  cVar1 = FUN_01d3f210(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_01d3f230(param_2);
    if (cVar1 != '\0') {
      FUN_01771620(uVar2,local_res8[0],0);
      uVar2 = FUN_01771420(uVar2,0);
      local_30 = FUN_015f2d20(local_res8[0],uVar2,local_19);
    }
  }
  else {
    FUN_01771620(uVar2,local_res8[0],0);
    uVar2 = FUN_01771420(uVar2,0);
    local_30 = FUN_015f2d20(local_res8[0],uVar2,local_19);
  }
  FUN_00414480(local_res8);
  return local_30;
}

