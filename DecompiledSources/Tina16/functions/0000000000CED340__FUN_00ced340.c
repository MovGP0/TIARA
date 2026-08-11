/* Ghidra address: 00ced340 */
/* Ghidra symbol: FUN_00ced340 */


undefined1 FUN_00ced340(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_71;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  char local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  byte *local_30;
  
  local_68 = 0;
  local_70 = (longlong *)0x0;
  local_58 = 0;
  local_60 = 0;
  local_30 = (byte *)0x0;
  local_71 = 0;
  FUN_00419430(param_4,&DAT_0086e978);
  local_50 = &DAT_00ced74c;
  local_48 = &DAT_00ced75c;
  local_40 = &DAT_00ced76c;
  iVar4 = FUN_00874bb0(param_2,&local_50,2,0);
  if (iVar4 == 0) {
    iVar4 = 1;
    while( true ) {
      iVar6 = 0;
      if (param_3 != 0) {
        iVar6 = *(int *)(param_3 + -4);
      }
      if (iVar6 < iVar4) break;
      sVar1 = *(short *)(param_3 + -2 + (longlong)iVar4 * 2);
      if (sVar1 == 0x5f) {
        FUN_00878df0(param_4,0x20);
      }
      else {
        if (sVar1 == 0x3d) {
          iVar6 = 0;
          if (param_3 != 0) {
            iVar6 = *(int *)(param_3 + -4);
          }
          bVar2 = iVar4 + 2 <= iVar6;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          FUN_00416dc0(&local_60,param_3,iVar4 + 1,2);
          FUN_00416ba0(&local_58,&DAT_00ced77c,local_60);
          uVar5 = FUN_00877cc0(local_58,0x20);
          FUN_00878df0(param_4,uVar5);
          iVar4 = iVar4 + 2;
        }
        else {
          FUN_00878df0(param_4);
        }
      }
      iVar4 = iVar4 + 1;
    }
    local_71 = 1;
  }
  else if (iVar4 == 1) {
    iVar4 = 0;
    if (param_3 != 0) {
      iVar4 = *(int *)(param_3 + -4);
    }
    iVar4 = iVar4 / 4;
    if (0 < iVar4) {
      FUN_00419260(&local_30,&DAT_0086e978,1,3);
      iVar6 = 0;
      if (-1 < iVar4 + -1) {
        do {
          iVar3 = iVar6 * 4;
          local_34 = FUN_00ced180(*(undefined2 *)(param_3 + -2 + (longlong)(iVar3 + 1) * 2));
          local_33 = FUN_00ced180(*(undefined2 *)(param_3 + -2 + (longlong)(iVar3 + 2) * 2));
          local_32 = FUN_00ced180(*(undefined2 *)(param_3 + -2 + (longlong)(iVar3 + 3) * 2));
          local_31 = FUN_00ced180(*(undefined2 *)(param_3 + -2 + (longlong)(iVar3 + 4) * 2));
          *local_30 = local_34 * '\x04' | local_33 >> 4;
          local_30[1] = local_33 << 4 | local_32 >> 2;
          local_30[2] = local_32 << 6 | local_31;
          if (*(short *)(param_3 + -2 + (longlong)(iVar3 + 4) * 2) == 0x3d) {
            if (*(short *)(param_3 + -2 + (longlong)(iVar3 + 3) * 2) == 0x3d) {
              FUN_00878df0(param_4,*local_30);
            }
            else {
              FUN_00878d40(param_4,local_30,0,2);
            }
            break;
          }
          FUN_00878d40(param_4,local_30,0,3);
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    local_71 = 1;
  }
  else if (iVar4 == 2) {
    FUN_00874520(&local_70);
    (**(code **)(*local_70 + 0x70))(local_70,&local_68,param_3);
    FUN_004194b0(param_4,local_68,&DAT_0086e978);
    local_71 = 1;
  }
  FUN_0041b800(&local_70);
  FUN_00419430(&local_68,&DAT_0086e978);
  FUN_00414560(&local_60,2);
  FUN_00419430(&local_30,&DAT_0086e978);
  return local_71;
}

