/* Ghidra address: 015dc060 */
/* Ghidra symbol: FUN_015dc060 */


void FUN_015dc060(longlong param_1,int param_2,undefined8 *param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  int local_48 [2];
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = 0;
  FUN_00414b50(local_20,*param_3);
  FUN_015d9080(param_1,param_3,param_2,*(longlong *)(param_1 + 0x1d0) == 0);
  *param_4 = 0;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    if (*(char *)(param_1 + 0x103) == '\x01') {
      FUN_0041ddd0(&local_38,PTR_PTR_02001960);
      local_48[0] = param_2 + 1;
      local_40 = 0;
      FUN_00442f70(local_30,local_38,local_48,0);
      iVar2 = FUN_0072d440(local_30[0],3,0xc,0);
      *param_4 = iVar2 != 1;
    }
    else {
      cVar1 = FUN_015bf1b0(*param_3);
      *param_4 = cVar1 == '\0';
    }
    FUN_015d9080(param_1,local_20,param_2,1);
    FUN_00414ad0(param_3,local_20[0]);
  }
  else {
    (**(code **)(param_1 + 0x1d0))
              (*(undefined8 *)(param_1 + 0x1d8),param_1,param_2 + 1,param_3,param_4);
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

