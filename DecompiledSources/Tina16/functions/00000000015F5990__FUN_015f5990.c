/* Ghidra address: 015f5990 */
/* Ghidra symbol: FUN_015f5990 */


undefined4 FUN_015f5990(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined1 local_11;
  int local_10;
  undefined4 local_c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_c = 0;
  uVar2 = FUN_01771420(param_2,0);
  uVar2 = FUN_015f2d20(local_res8[0],uVar2,&local_11);
  FUN_00e0ed40(uVar2,&local_c,&local_10);
  if (local_10 != 0) {
    local_c = 0x10;
  }
  uVar1 = local_c;
  FUN_00414480(local_res8);
  return uVar1;
}

