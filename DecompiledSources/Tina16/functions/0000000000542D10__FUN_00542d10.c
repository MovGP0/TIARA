/* Ghidra address: 00542d10 */
/* Ghidra symbol: FUN_00542d10 */


void FUN_00542d10(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_00411a80(param_1,param_2);
  if (DAT_020116b8 == 0) {
    DAT_020116b8 = FUN_00410e60(&DAT_00401a88,1);
  }
  if (*(longlong *)PTR_PTR_02002ff8 == 0) {
    FUN_004098e0(0x1a);
  }
  uVar1 = FUN_004121f0(DAT_020116b8);
  FUN_00411f00(uVar1,0xffffffff);
  DAT_020116b0 = DAT_020116b0 + -1;
  if (DAT_020116b0 == 0) {
    FUN_00410f20(DAT_020116a8);
    DAT_020116a8 = 0;
  }
  if (DAT_020116b8 == 0) {
    DAT_020116b8 = FUN_00410e60(&DAT_00401a88,1);
  }
  FUN_00412130(DAT_020116b8);
  FUN_00410ef0(param_1,param_2 & 0xfc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

