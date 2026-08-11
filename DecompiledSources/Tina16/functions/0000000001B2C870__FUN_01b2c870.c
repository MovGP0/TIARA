/* Ghidra address: 01b2c870 */
/* Ghidra symbol: FUN_01b2c870 */


void FUN_01b2c870(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong local_res8 [4];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  int local_3c [3];
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00414480(param_2);
  FUN_00416ad0(local_res8,&DAT_01b2cc48);
  iVar8 = 0;
  if (local_res8[0] != 0) {
    iVar8 = *(int *)(local_res8[0] + -4);
  }
  iVar6 = 0;
  local_3c[0] = 1;
  uVar5 = CONCAT62((int6)((ulonglong)unaff_RDI >> 0x10),0x20);
  iVar3 = 1;
  if (0 < iVar8) {
    do {
      uVar4 = uVar5;
      if (local_3c[0] < 10) {
        uVar1 = *(ushort *)(local_res8[0] + -2 + (longlong)iVar3 * 2);
        uVar4 = (ulonglong)uVar1;
        if (iVar6 == 1) {
          if ((uVar1 < 0x30) || (0x39 < uVar1)) {
            FUN_00416780(&local_48,uVar5 & 0xffffffff);
            FUN_01b2c390(&local_50,PTR_DAT_020013a0,local_3c,local_48);
            FUN_00416ad0(param_2,local_50);
            if ((uVar1 < 0x41) || (0x5a < uVar1)) {
              iVar6 = 0;
            }
            else {
              iVar6 = 1;
            }
          }
          else if ((0x2f < uVar1) && (uVar1 < 0x3a)) {
            FUN_00416780(local_60,uVar5 & 0xffffffff);
            FUN_00416780(&local_68,uVar4);
            FUN_00416ba0(&local_48,local_60[0],local_68);
            FUN_01b2c390(&local_50,PTR_DAT_020013a0,local_3c,local_48);
            FUN_00416ad0(param_2,local_50);
            iVar6 = 2;
          }
        }
        else if ((uVar1 < 0x41) || (0x5a < uVar1)) {
          iVar6 = 0;
        }
        else {
          iVar6 = 1;
        }
        if (iVar6 == 0) {
          FUN_00416780(&local_70,uVar4);
          FUN_00416ad0(param_2,local_70);
        }
        if (iVar6 == 2) {
          iVar6 = 0;
        }
        FUN_01b2c600(param_2,PTR_DAT_020013a0,local_3c[0] + -1);
      }
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + -1;
      uVar5 = uVar4;
    } while (iVar8 != 0);
  }
  *(int *)(DAT_02110d00 + 0x764) = local_3c[0] + -1;
  FUN_0043f750(&local_78,local_3c[0] + -1);
  FUN_0064de00(*(undefined8 *)(DAT_02110d00 + 0x730),local_78);
  iVar8 = local_3c[0] + -1;
  FUN_0064de00(*(undefined8 *)(DAT_02110d00 + 0x718),&DAT_01b2cc58);
  if (0 < iVar8) {
    puVar7 = (undefined8 *)(PTR_DAT_020013a0 + (longlong)iVar8 * 8 + -8);
    iVar3 = iVar8;
    do {
      if (iVar3 < iVar8) {
        uVar2 = *(undefined8 *)(DAT_02110d00 + 0x718);
        FUN_0064dd90(uVar2,&local_80);
        FUN_00416ad0(&local_80,&DAT_01b2cc68);
        FUN_0064de00(uVar2,local_80);
      }
      uVar2 = *(undefined8 *)(DAT_02110d00 + 0x718);
      FUN_0064dd90(uVar2,&local_88);
      FUN_00416ad0(&local_88,*puVar7);
      FUN_0064de00(uVar2,local_88);
      iVar3 = iVar3 + -1;
      puVar7 = puVar7 + -1;
    } while (iVar3 != 0);
  }
  uVar2 = *(undefined8 *)(DAT_02110d00 + 0x718);
  FUN_0064dd90(uVar2,&local_90);
  FUN_00416ad0(&local_90,&LAB_01b2cc78);
  FUN_0064de00(uVar2,local_90);
  FUN_00414560(&local_90,3);
  FUN_00414560(&local_78,4);
  FUN_00414560(&local_50,2);
  FUN_00414480(local_res8);
  return;
}

