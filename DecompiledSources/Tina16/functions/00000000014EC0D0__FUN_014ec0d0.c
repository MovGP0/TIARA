/* Ghidra address: 014ec0d0 */
/* Ghidra symbol: FUN_014ec0d0 */


void FUN_014ec0d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  _Pkg_GetLibraryList(1,param_1 + 0xb6a);
  FUN_014ebf20(param_1,param_1 + 0xb6a);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x730),*(undefined8 *)(param_1 + 0x2388));
  uVar1 = *(undefined8 *)(param_1 + 0x720);
  FUN_0064dd90(uVar1,&local_28);
  FUN_00416cd0(local_20,3,&LAB_014ec1e4,local_28,&LAB_014ec1e4);
  FUN_0064de00(uVar1,local_20[0]);
  FUN_014ed4b0(param_1,*(char *)(param_1 + 0x2370) == '\0');
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

