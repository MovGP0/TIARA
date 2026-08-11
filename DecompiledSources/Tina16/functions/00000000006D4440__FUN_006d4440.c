/* Ghidra address: 006d4440 */
/* Ghidra symbol: FUN_006d4440 */


undefined8 FUN_006d4440(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_2058 [2];
  undefined1 local_2050;
  undefined8 local_2048;
  undefined8 local_2040 [2];
  undefined1 local_2030 [3992];
  undefined1 local_1098;
  undefined1 local_98;
  uint local_30 [4];
  undefined1 *local_20;
  undefined4 local_18;
  
  local_98 = 0;
  local_1098 = 0;
  local_2040[0] = 0;
  local_2048 = 0;
  uVar1 = FUN_0064e930(*(undefined8 *)(param_1 + 0x38));
  local_30[0] = *(uint *)(&DAT_01dfdbd4 + (uVar1 & 0xff) * 4) | 1;
  local_20 = local_2030;
  local_18 = 0x1000;
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  lVar3 = thunk_FUN_041b2403(uVar2,0x133c,(longlong)param_3,local_30);
  if (lVar3 == 0) {
    FUN_0041ddd0(&local_2048,PTR_PTR_02003790);
    local_2050 = 0;
    local_2058[0] = param_3;
    FUN_00442f70(local_2040,local_2048,local_2058,0);
    FUN_006d42b0(local_2040[0]);
  }
  FUN_00416830(param_2,local_2030,0x1000);
  FUN_00414560(&local_2048,2);
  return param_2;
}

