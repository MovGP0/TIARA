/* Ghidra address: 01d23aa0 */
/* Ghidra symbol: FUN_01d23aa0 */


undefined8 * FUN_01d23aa0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined *local_30;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_10 = 0;
  FUN_00414480(&local_10);
  local_38 = 0;
  local_30 = PTR_DAT_02004830;
  FUN_00448510(&local_10,param_2,0,4);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  iVar1 = FUN_004170c0(&DAT_01d23be4,*param_1,1);
  if (0 < iVar1) {
    FUN_019b6930(param_1,&DAT_01d23be4,&DAT_01d23bf4);
  }
  iVar1 = FUN_004170c0(&DAT_01d23c04,*param_1,1);
  if (0 < iVar1) {
    FUN_019b6930(param_1,&DAT_01d23c04,L"*\\e(10,");
    FUN_00416ad0(param_1,&LAB_01d23c30);
  }
  FUN_00414480(&local_10);
  return param_1;
}

