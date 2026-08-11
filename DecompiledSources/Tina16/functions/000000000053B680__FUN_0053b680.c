/* Ghidra address: 0053b680 */
/* Ghidra symbol: FUN_0053b680 */


undefined1 FUN_0053b680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined1 local_50 [32];
  ulonglong local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  local_68 = 0;
  local_60[0] = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_00417580(param_3,&DAT_00527bf8);
  FUN_00417580(local_50,&DAT_00527bf8);
  FUN_00537a50(param_1,&local_30);
  uVar1 = local_30 & 0xffff;
  if (uVar1 < 0xc) {
    if (uVar1 == 0xb) {
      FUN_005366f0(local_50,(short)local_28 != 0);
    }
    else if (uVar1 < 7) {
      if (uVar1 == 6) {
        FUN_005365b0(local_50,local_28);
      }
      else if (uVar1 < 4) {
        if (uVar1 == 3) {
          FUN_00536490(local_50,local_28 & 0xffffffff);
        }
        else if (uVar1 < 2) {
          FUN_00536400(local_50);
        }
        else {
          if (uVar1 != 2) goto LAB_0053b9c7;
          FUN_00536490(local_50,(longlong)(short)local_28);
        }
      }
      else if (uVar1 == 4) {
        FUN_005364f0(local_50,local_28 & 0xffffffff);
      }
      else {
        if (uVar1 != 5) {
LAB_0053b9c7:
          local_69 = 0;
          goto LAB_0053b9f5;
        }
        FUN_00536530(local_50,local_28);
      }
    }
    else if (uVar1 == 7) {
      FUN_005600c0(local_50,local_28);
    }
    else if (uVar1 == 8) {
      FUN_004167d0(local_60,local_28);
      FUN_00536420(local_50,local_60[0]);
    }
    else if (uVar1 == 9) {
      FUN_00560100(local_50,local_28);
    }
    else {
      if (uVar1 != 10) goto LAB_0053b9c7;
      FUN_00560140(local_50,local_28 & 0xffffffff);
    }
  }
  else if (uVar1 < 0x14) {
    if (uVar1 == 0x13) {
      FUN_005364c0(local_50,local_28 & 0xffffffff);
    }
    else if (uVar1 == 0xd) {
      FUN_00560180(local_50,local_28);
    }
    else if (uVar1 == 0x10) {
      FUN_00536490(local_50,(longlong)(char)local_28);
    }
    else if (uVar1 == 0x11) {
      FUN_00536490(local_50,local_28 & 0xff);
    }
    else {
      if (uVar1 != 0x12) goto LAB_0053b9c7;
      FUN_00536490(local_50,local_28 & 0xffff);
    }
  }
  else if (uVar1 == 0x14) {
    FUN_005365e0(local_50,local_28);
  }
  else if (uVar1 == 0x15) {
    FUN_00536610(local_50,local_28);
  }
  else if (uVar1 == 0x100) {
    FUN_00416880(&local_68,local_28);
    FUN_00536420(local_50,local_68);
  }
  else {
    if (uVar1 != 0x102) goto LAB_0053b9c7;
    FUN_00536420(local_50,local_28);
  }
  uVar2 = FUN_00417740(param_3,&DAT_00527bf8);
  local_69 = FUN_0053c240(local_50,param_2,uVar2,1);
LAB_0053b9f5:
  FUN_00414560(&local_68,2);
  FUN_00417740(local_50,&DAT_00527bf8);
  FUN_00460ba0(&local_30);
  return local_69;
}

