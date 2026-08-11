/* Ghidra address: 016b93a0 */
/* Ghidra symbol: FUN_016b93a0 */


undefined8 FUN_016b93a0(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  FUN_00b8fe00(local_20,param_2,6,0);
  FUN_00415dd0(param_1,local_20[0],0);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = uVar1;
  FUN_00414480(local_20);
  return param_1;
}

