/* Ghidra address: 01c814e0 */
/* Ghidra symbol: FUN_01c814e0 */


void FUN_01c814e0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 local_res10;
  int local_res18;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined1 *local_60;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong *local_20;
  
  local_60 = auStack_b8;
  local_68 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00441a10(&local_68,local_res10);
  if (local_68 == 0) {
    if (local_res18 < 4) {
      if (local_res18 == 3) {
        FUN_00416ad0(&local_res10,L".JPG");
      }
      else if (local_res18 == 1) {
        FUN_00416ad0(&local_res10,L".EMF");
      }
      else if (local_res18 == 2) {
        FUN_00416ad0(&local_res10,L".BMP");
      }
    }
    else if (local_res18 == 4) {
      FUN_00416ad0(&local_res10,L".GIF");
    }
    else if (local_res18 == 5) {
      FUN_00416ad0(&local_res10,L".PNG");
    }
  }
  if (local_res18 == 1) {
    local_20 = (longlong *)FUN_00605cc0(&PTR_FUN_005f86c8,1);
    FUN_01994230(*(undefined8 *)(param_1 + 0x27a8));
    local_30 = (**(code **)(**(longlong **)(param_1 + 0x27a8) + 0x70))
                         (*(longlong **)(param_1 + 0x27a8),0,&local_24,&local_28);
    FUN_00606a20(local_20,local_30);
    FUN_00606c20(local_20,local_24);
    FUN_00606bd0(local_20,local_28);
    (**(code **)(*local_20 + 0xb0))(local_20,local_res10);
    FUN_00410f20(local_20);
  }
  else if ((((local_res18 == 2) || (local_res18 == 3)) || (local_res18 == 4)) || (local_res18 == 5))
  {
    local_38 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0x14;
    FUN_019904f0(*(undefined8 *)(param_1 + 0x27a8),local_38,0x1c7,*PTR_DAT_02002480);
    if (local_res18 == 2) {
      (**(code **)(*local_38 + 0xb0))(local_38,local_res10);
    }
    else if (local_res18 == 3) {
      local_40 = (longlong *)FUN_00a09e20(&PTR_FUN_00a09250,1);
      (**(code **)(*local_40 + 0x10))(local_40,local_38);
      (**(code **)(*local_40 + 0xb0))(local_40,local_res10);
      FUN_00410f20(local_40);
    }
    else if (local_res18 == 4) {
      local_48 = (longlong *)FUN_00c32af0(&PTR_FUN_00c17678,1);
      (**(code **)(*local_48 + 0x10))(local_48,local_38);
      (**(code **)(*local_48 + 0xb0))(local_48,local_res10);
      FUN_00410f20(local_48);
    }
    else {
      local_50 = (longlong *)FUN_00a39860(&PTR_FUN_00a2f148,1);
      (**(code **)(*local_50 + 0x10))(local_50,local_38);
      (**(code **)(*local_50 + 0xb0))(local_50,local_res10);
      FUN_00410f20(local_50);
    }
    FUN_00410f20(local_38);
  }
  FUN_00414480(&local_68);
  FUN_00414480(&local_res10);
  return;
}

