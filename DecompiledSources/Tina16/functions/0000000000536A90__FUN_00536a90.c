/* Ghidra address: 00536a90 */
/* Ghidra symbol: FUN_00536a90 */


undefined8 FUN_00536a90(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  bVar1 = *(byte *)(param_2 + 1);
  if (bVar1 < 10) {
    if (bVar1 == 9) {
      FUN_00416780(&local_10,*(undefined2 *)param_2);
      FUN_00536420(param_1,local_10);
    }
    else if (bVar1 < 5) {
      if (bVar1 == 4) {
        FUN_004169a0(&local_30,*param_2);
        FUN_00536420(param_1,local_30);
      }
      else if (bVar1 == 0) {
        FUN_00536490(param_1,*(undefined4 *)param_2);
      }
      else if (bVar1 == 1) {
        FUN_005366f0(param_1,*(undefined1 *)param_2);
      }
      else if (bVar1 == 2) {
        FUN_00416760(&local_18,*(undefined1 *)param_2);
        FUN_00536420(param_1,local_18);
      }
      else if (bVar1 == 3) {
        FUN_00536570(param_1,*(undefined8 *)*param_2);
      }
    }
    else if (bVar1 == 5) {
      FUN_005366b0(param_1,*param_2);
    }
    else if (bVar1 == 6) {
      FUN_004167a0(&local_20,*param_2);
      FUN_00536420(param_1,local_20);
    }
    else if (bVar1 == 7) {
      FUN_00536640(param_1,*param_2);
    }
    else if (bVar1 == 8) {
      FUN_005366b0(param_1,*param_2);
    }
  }
  else if (bVar1 < 0xf) {
    if (bVar1 == 0xe) {
      FUN_00560180(param_1,*param_2);
    }
    else if (bVar1 == 10) {
      FUN_004167d0(&local_28,*param_2);
      FUN_00536420(param_1,local_28);
    }
    else if (bVar1 == 0xb) {
      FUN_00536420(param_1,*param_2);
    }
    else if (bVar1 == 0xc) {
      FUN_005365b0(param_1,*(undefined8 *)*param_2);
    }
    else if (bVar1 == 0xd) {
      FUN_00536720(param_1,*param_2);
    }
  }
  else if (bVar1 == 0xf) {
    FUN_00536420(param_1,*param_2);
  }
  else if (bVar1 == 0x10) {
    FUN_005365e0(param_1,*(undefined8 *)*param_2);
  }
  else if (bVar1 == 0x11) {
    FUN_00536420(param_1,*param_2);
  }
  FUN_00414560(&local_30,5);
  return param_1;
}

