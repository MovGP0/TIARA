/* Ghidra address: 014a7fd0 */
/* Ghidra symbol: FUN_014a7fd0 */


undefined8 FUN_014a7fd0(longlong param_1,undefined8 param_2)

{
  longlong local_res8 [4];
  undefined8 local_10;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_10 = 0;
  if (local_res8[0] == 0) {
    FUN_00b047e0(0xfffffffd);
  }
  else {
    DAT_0210eae8 = param_2;
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x1548),1);
    FUN_006e6920(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x1548),0);
    local_10 = FUN_014a74d0(local_res8[0],0,0,0,1);
    FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x1548),0);
  }
  FUN_00414480(local_res8);
  return local_10;
}

