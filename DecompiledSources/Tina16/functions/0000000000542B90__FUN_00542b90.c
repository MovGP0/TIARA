/* Ghidra address: 00542b90 */
/* Ghidra symbol: FUN_00542b90 */


undefined8 FUN_00542b90(undefined8 param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  if (DAT_020116b8 == 0) {
    DAT_020116b8 = FUN_00410e60(&DAT_00401a88,1);
  }
  if (*(longlong *)PTR_PTR_02002ff8 == 0) {
    FUN_004098e0(0x1a);
  }
  uVar2 = FUN_004121f0(DAT_020116b8);
  FUN_00411f00(uVar2,0xffffffff);
  if (DAT_020116a8 == 0) {
    DAT_020116a8 = FUN_00541770(&DAT_0053cce0,1);
    DAT_020116b0 = 1;
  }
  else {
    DAT_020116b0 = DAT_020116b0 + 1;
  }
  if (DAT_020116b8 == 0) {
    DAT_020116b8 = FUN_00410e60(&DAT_00401a88,1);
  }
  FUN_00412130(DAT_020116b8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

