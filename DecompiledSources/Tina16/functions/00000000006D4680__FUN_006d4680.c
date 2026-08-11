/* Ghidra address: 006d4680 */
/* Ghidra symbol: FUN_006d4680 */


void FUN_006d4680(longlong param_1,int param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_68;
  undefined1 local_60;
  int local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  uint local_30 [4];
  undefined8 local_20;
  undefined4 local_14;
  
  local_40[0] = 0;
  local_48 = 0;
  uVar1 = FUN_0064e930(*(undefined8 *)(param_1 + 0x38));
  local_30[0] = *(uint *)(&DAT_01dfdbdc + (uVar1 & 0xff) * 4) | 3;
  local_20 = FUN_00416740(param_3);
  local_14 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x270))
                       (*(longlong **)(param_1 + 0x38),param_2);
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  lVar3 = FUN_004701a0(uVar2,0x133d,(longlong)param_2,local_30);
  if (lVar3 == 0) {
    FUN_0041ddd0(&local_48,PTR_PTR_02004b60);
    local_60 = 0x11;
    local_50 = 0;
    local_68 = param_3;
    local_58 = param_2;
    FUN_00442f70(local_40,local_48,&local_68,1);
    FUN_006d42b0(local_40[0]);
  }
  FUN_006d5880(*(undefined8 *)(param_1 + 0x38));
  FUN_00414560(&local_48,2);
  return;
}

