/* Ghidra address: 01a8ac10 */
/* Ghidra symbol: FUN_01a8ac10 */


void FUN_01a8ac10(longlong param_1)

{
  char cVar1;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_70;
  char local_61;
  undefined8 local_60;
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_80 = auStack_e8;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_00414480(&local_30);
  if ((*(longlong *)(param_1 + 0x798) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x798) + 0x60) != 0)) {
    FUN_00414480(&local_10);
    FUN_019ac280(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2788),&local_88);
    local_40 = local_88;
    local_c8 = L"_%%.tdr";
    FUN_00416cd0(&local_90,3,L"_meas_",*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0x60));
    local_48 = local_90;
    FUN_005b84f0(&local_10,local_40,L".tsc",local_90);
    FUN_00414b50(&local_30,local_10);
    FUN_00414480(&local_10);
    local_34 = 1;
    FUN_00414480(&local_18);
    FUN_0043f750(&local_98,local_34);
    local_50 = local_98;
    FUN_005b84f0(&local_18,local_30,&DAT_01a8b040,local_98);
    cVar1 = FUN_00440a20(local_18,1);
    local_51 = cVar1 == '\0';
    FUN_00414480(&local_18);
    if (local_51 == '\0') {
      while( true ) {
        FUN_00414480(&local_20);
        FUN_0043f750(&local_b0,local_34);
        local_60 = local_b0;
        FUN_005b84f0(&local_20,local_30,&DAT_01a8b040,local_b0);
        local_61 = FUN_00440a20(local_20,1);
        FUN_00414480(&local_20);
        if (local_61 == '\0') break;
        FUN_00414480(&local_28);
        FUN_0043f750(&local_a8,local_34);
        local_70 = local_a8;
        FUN_005b84f0(&local_28,local_30,&DAT_01a8b040,local_a8);
        FUN_01156520(local_28);
        FUN_00414480(&local_28);
        local_34 = local_34 + 1;
      }
    }
    else {
      FUN_0041ddd0(&local_a0,&LAB_01a8abf8);
      FUN_0072d440(local_a0,1,4,0);
    }
  }
  FUN_00414560(&local_b0,6);
  FUN_00414560(&local_30,5);
  return;
}

