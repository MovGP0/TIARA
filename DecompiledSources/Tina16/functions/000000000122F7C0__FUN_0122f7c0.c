/* Ghidra address: 0122f7c0 */
/* Ghidra symbol: FUN_0122f7c0 */


undefined4 FUN_0122f7c0(double param_1,double param_2,double param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res20;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_98;
  local_58 = 0;
  local_60 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  if ((param_1 < param_2) || (param_3 < param_1)) {
    FUN_00414480(local_20);
    FUN_00448450(local_20,param_2,PTR_DAT_02004830);
    FUN_00414b50(&local_38,local_20[0]);
    FUN_00414480(local_20);
    FUN_00414480(&local_28);
    FUN_00448450(&local_28,param_3,PTR_DAT_02004830);
    FUN_00414b50(&local_40,local_28);
    FUN_00414480(&local_28);
    local_78 = L" and ";
    local_70 = local_40;
    FUN_00416cd0(&local_58,4,L"Value has to be between ",local_38);
    uVar1 = FUN_00416740(local_58);
    FUN_00416ba0(&local_60,local_res20,L" ERROR");
    uVar2 = FUN_00416740(local_60);
    FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar1,uVar2,0x10);
    local_2c = 1;
  }
  else {
    local_2c = 0;
  }
  FUN_00414560(&local_60,2);
  FUN_00414560(&local_40,2);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_res20);
  return local_2c;
}

