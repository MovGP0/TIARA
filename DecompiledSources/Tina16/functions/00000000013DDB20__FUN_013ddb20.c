/* Ghidra address: 013ddb20 */
/* Ghidra symbol: FUN_013ddb20 */


void FUN_013ddb20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar1 = FUN_013d2310(&DAT_013d1e58,1);
  *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x790) = uVar1;
  FUN_013d2550(uVar1,local_res8[0],*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),
               *(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0) + 0x10));
  FUN_00414480(local_res8);
  return;
}

