/* Ghidra address: 0163d2b0 */
/* Ghidra symbol: FUN_0163d2b0 */


void FUN_0163d2b0(undefined8 param_1,longlong param_2,longlong param_3,double param_4,int param_5)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_78;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_0161cb00(&local_20,param_3,0);
  FUN_00416ad0(&local_20,&DAT_0163d58c);
  FUN_00416ad0(&local_20,&DAT_0163d59c);
  FUN_0043f750(&local_38,*(undefined4 *)(param_3 + 0x70));
  FUN_00416ad0(&local_20,local_38);
  FUN_00416ad0(&local_20,L", n: ");
  FUN_0043f750(&local_40,*(undefined4 *)(param_3 + 0x78));
  FUN_00416ad0(&local_20,local_40);
  FUN_00416ad0(&local_20,&DAT_0163d5c8);
  FUN_0043f750(&local_48,*(undefined4 *)(param_3 + 0x60));
  local_58 = local_48;
  FUN_00416cd0(&local_20,3,local_20,L", Lineno: ");
  local_58 = *(undefined8 *)(*(longlong *)(param_2 + 0x13980) + 0x638);
  FUN_00416cd0(&local_20,3,local_20,L", Name: ");
  if ((param_5 != 1) || (param_4 <= 100000.0)) {
    FUN_00414480(&local_18);
    FUN_00448450(&local_18,param_4,PTR_DAT_02004830);
    local_58 = local_18;
    FUN_00416cd0(&local_20,3,local_20,L", Value: ");
    FUN_00414480(&local_18);
  }
  else {
    FUN_00414480(&local_10);
    FUN_00448450(&local_10,param_4,PTR_DAT_02004830);
    local_58 = local_10;
    FUN_00416cd0(&local_20,3,local_20,L", >>>>> Value: ");
    FUN_00414480(&local_10);
  }
  FUN_0163d050(param_2,local_20);
  FUN_00414560(&local_48,3);
  FUN_00414560(&local_20,3);
  return;
}

