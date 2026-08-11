/* Ghidra address: 015f58d0 */
/* Ghidra symbol: FUN_015f58d0 */


undefined4 FUN_015f58d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 local_1c;
  undefined1 local_15;
  uint local_14;
  int local_10;
  undefined4 local_c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_c = 0;
  cVar1 = FUN_01773f90(param_2,0x400,&local_14);
  if ((cVar1 == '\0') || ((local_14 & 2) == 0)) {
    uVar2 = FUN_01771420(param_2,0);
    uVar2 = FUN_015f2d20(local_res8[0],uVar2,&local_15);
    FUN_00e0ed40(uVar2,&local_c,&local_10);
    if (local_10 != 0) {
      local_c = 0x10;
    }
    local_1c = local_c;
  }
  else {
    local_1c = 0x100;
  }
  FUN_00414480(local_res8);
  return local_1c;
}

