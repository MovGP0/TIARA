/* Ghidra address: 00536720 */
/* Ghidra symbol: FUN_00536720 */


undefined8 FUN_00536720(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  uVar1 = *param_2;
  if (uVar1 < 0xc) {
    if (uVar1 == 0xb) {
      FUN_005366f0(param_1,param_2[4] != 0);
      goto LAB_00536a56;
    }
    if (uVar1 < 7) {
      if (uVar1 == 6) {
        FUN_005365b0(param_1,*(undefined8 *)(param_2 + 4));
        goto LAB_00536a56;
      }
      if (uVar1 < 4) {
        if (uVar1 == 3) {
          FUN_00536490(param_1,*(undefined4 *)(param_2 + 4));
          goto LAB_00536a56;
        }
        if (uVar1 < 2) {
          FUN_00536400(param_1);
          goto LAB_00536a56;
        }
        if (uVar1 == 2) {
          FUN_00536490(param_1,(longlong)(short)param_2[4]);
          goto LAB_00536a56;
        }
      }
      else {
        if (uVar1 == 4) {
          FUN_005364f0(param_1,*(undefined4 *)(param_2 + 4));
          goto LAB_00536a56;
        }
        if (uVar1 == 5) {
          FUN_00536530(param_1,*(undefined8 *)(param_2 + 4));
          goto LAB_00536a56;
        }
      }
    }
    else {
      if (uVar1 == 7) {
        FUN_005600c0(param_1,*(undefined8 *)(param_2 + 4));
        goto LAB_00536a56;
      }
      if (uVar1 == 8) {
        FUN_004167d0(&local_10,*(undefined8 *)(param_2 + 4));
        FUN_00536420(param_1,local_10);
        goto LAB_00536a56;
      }
      if (uVar1 == 9) {
        FUN_00560100(param_1,*(undefined8 *)(param_2 + 4));
        goto LAB_00536a56;
      }
      if (uVar1 == 10) {
        FUN_00560140(param_1,*(undefined4 *)(param_2 + 4));
        goto LAB_00536a56;
      }
    }
  }
  else if (uVar1 < 0x14) {
    if (uVar1 == 0x13) {
      FUN_005364c0(param_1,*(undefined4 *)(param_2 + 4));
      goto LAB_00536a56;
    }
    if (uVar1 == 0xd) {
      FUN_00560180(param_1,*(undefined8 *)(param_2 + 4));
      goto LAB_00536a56;
    }
    if (uVar1 == 0x10) {
      FUN_00536490(param_1,(longlong)(char)param_2[4]);
      goto LAB_00536a56;
    }
    if (uVar1 == 0x11) {
      FUN_00536490(param_1,(char)param_2[4]);
      goto LAB_00536a56;
    }
    if (uVar1 == 0x12) {
      FUN_00536490(param_1,param_2[4]);
      goto LAB_00536a56;
    }
  }
  else {
    if (uVar1 == 0x14) {
      FUN_005365e0(param_1,*(undefined8 *)(param_2 + 4));
      goto LAB_00536a56;
    }
    if (uVar1 == 0x15) {
      FUN_00536610(param_1,*(undefined8 *)(param_2 + 4));
      goto LAB_00536a56;
    }
    if (uVar1 == 0x100) {
      FUN_00416880(&local_18,*(undefined8 *)(param_2 + 4));
      FUN_00536420(param_1,local_18);
      goto LAB_00536a56;
    }
    if (uVar1 == 0x102) {
      FUN_00536420(param_1,*(undefined8 *)(param_2 + 4));
      goto LAB_00536a56;
    }
  }
  uVar2 = FUN_0044d710(&PTR_FUN_0045f120,1,PTR_PTR_02003898);
  FUN_004134c0(uVar2);
LAB_00536a56:
  FUN_00414560(&local_18,2);
  return param_1;
}

