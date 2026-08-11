/* Ghidra address: 0130dae0 */
/* Ghidra symbol: FUN_0130dae0 */


void FUN_0130dae0(longlong param_1,int param_2)

{
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 *local_50;
  int local_44;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_60 = auStack_c8;
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*local_28 + 0x88))(local_28,800);
  (**(code **)(*local_28 + 0x70))(local_28,600);
  local_30 = (longlong *)FUN_00a09e20(&PTR_FUN_00a09250,1);
  if (param_2 == 0) {
    local_a8 = (wchar_t *)CONCAT71(local_a8._1_7_,1);
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0x14;
    FUN_019904f0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa0),local_28,0x1c7,*PTR_DAT_02002480
                );
    (**(code **)(*local_30 + 0x10))(local_30,local_28);
    FUN_00416ba0(&local_68,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x360)
                 ,L".jpg");
    (**(code **)(*local_30 + 0xb0))(local_30,local_68);
  }
  else if (param_2 == 1) {
    local_a8 = (wchar_t *)CONCAT71(local_a8._1_7_,1);
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0x14;
    FUN_019904f0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa8),local_28,1,*PTR_DAT_02002480);
    (**(code **)(*local_30 + 0x10))(local_30,local_28);
    local_40 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x360);
    local_44 = 0;
    if (*local_40 != 0) {
      local_44 = *(int *)(*local_40 + -4);
    }
    FUN_00414480(local_20);
    local_50 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x360);
    FUN_00416dc0(local_20,*local_50,1,local_44 + -4);
    local_a8 = L".jpg";
    FUN_00416cd0(&local_70,3,local_20[0],L" Preview");
    (**(code **)(*local_30 + 0xb0))(local_30,local_70);
    FUN_00414480(local_20);
  }
  FUN_00410f20(local_30);
  FUN_00410f20(local_28);
  FUN_00414560(&local_70,2);
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  return;
}

