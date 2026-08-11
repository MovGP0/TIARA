/* Ghidra address: 01cfd1b0 */
/* Ghidra symbol: FUN_01cfd1b0 */


undefined8 FUN_01cfd1b0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  iVar1 = FUN_01cfd2d0(param_1);
  if (param_3 < iVar1) {
    lVar2 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(param_1 + 0xba));
    FUN_01d3a550(*(undefined8 *)PTR_DAT_02001b18,param_2,*(int *)(lVar2 + 0x9e) + param_3,
                 local_res20);
  }
  else {
    FUN_00414520(param_2);
  }
  FUN_00414480(&local_res20);
  return param_2;
}

