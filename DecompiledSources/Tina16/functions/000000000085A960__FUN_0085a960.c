/* Ghidra address: 0085a960 */
/* Ghidra symbol: FUN_0085a960 */


undefined8 * FUN_0085a960(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00414ad0(param_2,param_3);
  FUN_00414480(param_1 + 0x2e8);
  iVar1 = FUN_004170c0(&LAB_0085aa58,*param_2,1);
  if (0 < iVar1) {
    FUN_00416dc0(&local_28,*param_2,iVar1 + 2,0x7fffffff);
    FUN_0085a610(local_20,local_28);
    FUN_00414b50(param_1 + 0x2e8,local_20[0]);
    FUN_004169f0(param_2,iVar1 + -1);
  }
  FUN_00414560(&local_28,2);
  return param_2;
}

