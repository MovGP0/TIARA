/* Ghidra address: 010f20b0 */
/* Ghidra symbol: FUN_010f20b0 */


void FUN_010f20b0(longlong param_1,longlong param_2,undefined4 param_3,longlong *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_00414610(param_7);
  local_2c = FUN_01cbfd30(param_2,param_3);
  lVar3 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(param_2 + 0x10));
  uVar5 = local_2c;
  lVar3 = FUN_01d3a410(*(undefined8 *)PTR_DAT_02001b18,
                       *(short *)(lVar3 + 0x9e) + (ushort)(byte)local_2c);
  bVar1 = *(byte *)(lVar3 + 0x33);
  bVar2 = local_2c._1_1_;
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      if (local_2c._2_1_ < 5) {
        if (local_2c._2_1_ == 4) {
LAB_010f264b:
          FUN_00de8980(&local_98,local_2c._1_1_ + 0x230,param_7);
          FUN_00416ba0(param_5,local_98,&DAT_010f27bc);
        }
        else if (local_2c._2_1_ == 1) {
          FUN_00de8980(&local_80,local_2c._1_1_ + 0x22b,param_7);
          FUN_00416ba0(param_5,local_80,&DAT_010f27bc);
        }
        else if (local_2c._2_1_ == 2) {
          FUN_00de8980(&local_88,local_2c._1_1_ + 0x23c,param_7);
          FUN_00416ba0(param_5,local_88,&DAT_010f27bc);
        }
        else if (local_2c._2_1_ == 3) {
          FUN_00de8980(&local_90,local_2c._1_1_ + 0x233,param_7);
          FUN_00416ba0(param_5,local_90,&DAT_010f27bc);
        }
      }
      else if (local_2c._2_1_ == 5) {
        FUN_00de8980(&local_a0,local_2c._1_1_ + 0x240,param_7);
        FUN_00416ba0(param_5,local_a0,&DAT_010f27bc);
      }
      else if (local_2c._2_1_ == 6) {
        FUN_00de8980(&local_a8,local_2c._1_1_ + 0x23e,param_7);
        FUN_00416ba0(param_5,local_a8,&DAT_010f27bc);
      }
      else if (local_2c._2_1_ == 7) goto LAB_010f264b;
      (**(code **)(**(longlong **)(param_1 + 0x438) + 0x18))
                (*(longlong **)(param_1 + 0x438),&local_38,8);
      FUN_00b8fd60(&local_b0,local_38,*PTR_DAT_02005310,0,1);
      FUN_00416ad0(&local_b0,&DAT_010f27bc);
      FUN_00415dd0(param_6,local_b0,0);
      goto code_r0x010f2757;
    }
    if (bVar1 == 3) goto LAB_010f221c;
    if (bVar1 != 4) goto code_r0x010f2757;
  }
  else {
    if (bVar1 == 6) {
LAB_010f221c:
      lVar3 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(param_2 + 0x10));
      FUN_01d3a430(*(undefined8 *)PTR_DAT_02001b18,&local_40,*(int *)(lVar3 + 0x9e) + (uVar5 & 0xff)
                   ,param_7);
      FUN_00416ba0(param_5,local_40,&DAT_010f27bc);
      (**(code **)(**(longlong **)(param_1 + 0x438) + 0x18))
                (*(longlong **)(param_1 + 0x438),&local_38,8);
      FUN_00b8fd60(&local_48,local_38,*PTR_DAT_02005310,0,1);
      FUN_00416ad0(&local_48,&DAT_010f27bc);
      FUN_00415dd0(param_6,local_48,0);
      goto code_r0x010f2757;
    }
    if (bVar1 != 7) goto code_r0x010f2757;
  }
  uVar5 = uVar5 & 0xff;
  bVar1 = local_2c._3_1_;
  if (local_2c._1_1_ == 0xff) {
    FUN_0172d7d0(*(undefined2 *)(param_2 + 0x10),uVar5,local_2c._3_1_,local_2c._2_1_,param_4);
    FUN_00414480(param_5);
    FUN_004144d0(param_6);
    uVar5 = (uint)bVar1;
    iVar4 = 0;
    if (-1 < (int)(uVar5 - 1)) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x438) + 0x18))
                  (*(longlong **)(param_1 + 0x438),&local_38,8);
        (**(code **)(*param_4 + 0x18))(param_4,&local_50,iVar4);
        FUN_00416cd0(param_5,3,*param_5,local_50,&DAT_010f27bc);
        FUN_00416880(&local_60,*param_6);
        FUN_00b8fd60(&local_68,local_38,*PTR_DAT_02005310,0,1);
        FUN_00416cd0(&local_58,3,local_60,local_68,&DAT_010f27bc);
        FUN_00415dd0(param_6,local_58,0);
        iVar4 = iVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    FUN_0172d7d0(*(undefined2 *)(param_2 + 0x10),uVar5,local_2c._3_1_,local_2c._2_1_,param_4);
    (**(code **)(*param_4 + 0x18))(param_4,&local_70,bVar2);
    FUN_00416ba0(param_5,local_70,&DAT_010f27bc);
    (**(code **)(**(longlong **)(param_1 + 0x438) + 0x18))
              (*(longlong **)(param_1 + 0x438),&local_38,8);
    FUN_00b8fd60(&local_78,local_38,*PTR_DAT_02005310,0,1);
    FUN_00416ad0(&local_78,&DAT_010f27bc);
    FUN_00415dd0(param_6,local_78,0);
  }
code_r0x010f2757:
  FUN_00414560(&local_b0,0xf);
  FUN_00414480(&param_7);
  return;
}

