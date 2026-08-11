/* Ghidra address: 016bb0f0 */
/* Ghidra symbol: FUN_016bb0f0 */


undefined1 FUN_016bb0f0(undefined8 param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined1 local_129;
  undefined8 local_128;
  undefined8 local_120 [2];
  int local_10c;
  undefined1 local_108 [256];
  
  local_120[0] = 0;
  local_128 = 0;
  local_129 = 1;
  cVar1 = FUN_016babb0(param_1,0,&DAT_016bb204,&DAT_016bb208,0,local_108);
  if (cVar1 == '\0') {
    local_129 = 0;
  }
  else {
    FUN_004154b0(local_120,local_108,0);
    FUN_00416880(&local_128,local_120[0]);
    iVar2 = FUN_0040e860(local_128,&local_10c);
    *param_4 = iVar2;
    if (((local_10c != 0) || (*param_4 < param_2)) || (param_3 < *param_4)) {
      FUN_016b9df0(param_1);
      local_129 = 0;
    }
  }
  FUN_00414480(&local_128);
  FUN_004144d0(local_120);
  return local_129;
}

