/* Ghidra address: 00a63b70 */
/* Ghidra symbol: FUN_00a63b70 */


undefined8 * FUN_00a63b70(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00468a10(&local_30,param_3);
  FUN_00a52200(param_2,&local_30);
  iVar2 = FUN_004170c0(&DAT_00a63cf8,*(undefined8 *)(param_1 + 0x18),1);
  if (iVar2 < 1) {
    FUN_00a29300(&local_40,*param_2);
    FUN_00414ad0(param_2,local_40);
    cVar1 = FUN_00a27c90(*param_2);
    if (cVar1 == '\0') {
      FUN_00a274a0(&local_48,*(undefined8 *)(param_1 + 0x18),*param_2);
      FUN_00414ad0(param_2,local_48);
    }
  }
  else {
    cVar1 = FUN_00a27c70(*param_2);
    if (cVar1 == '\0') {
      FUN_00a275d0(&local_38,*(undefined8 *)(param_1 + 0x18),*param_2);
      FUN_00414ad0(param_2,local_38);
    }
  }
  FUN_00416cd0(param_2,3,L"url(\"",*param_2,&LAB_00a63d24);
  FUN_00414560(&local_48,3);
  FUN_00460ba0(&local_30);
  return param_2;
}

