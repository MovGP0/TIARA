/* Ghidra address: 01b2c600 */
/* Ghidra symbol: FUN_01b2c600 */


void FUN_01b2c600(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  short sVar6;
  longlong lVar7;
  short sVar8;
  undefined8 *puVar9;
  int iVar10;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  bVar4 = true;
  while (bVar4) {
    bVar4 = false;
    iVar10 = param_3 + -1;
    local_70 = 1;
    puVar9 = param_2;
    if (0 < iVar10) {
      do {
        lVar7 = (longlong)(local_70 + 1);
        iVar5 = FUN_00416d10(*puVar9,param_2[lVar7 + -1]);
        if (0 < iVar5) {
          bVar4 = true;
          FUN_00414b50(local_40,*puVar9);
          FUN_00414b50(&local_48,param_2[lVar7 + -1]);
          FUN_00414ad0(puVar9,local_48);
          FUN_00414ad0(param_2 + lVar7 + -1,local_40[0]);
          uVar1 = (undefined2)((uint)local_70 >> 0x10);
          sVar6 = (short)local_70 + 0x40;
          uVar2 = CONCAT22(uVar1,sVar6);
          sVar8 = (short)local_70 + 0x41;
          uVar3 = CONCAT22(uVar1,sVar8);
          while( true ) {
            FUN_00416780(&local_58,uVar2);
            iVar5 = FUN_004170c0(local_58,*param_1,1);
            if (iVar5 < 1) break;
            lVar7 = FUN_00414de0(param_1);
            FUN_00416780(&local_50,uVar2);
            iVar5 = FUN_004170c0(local_50,*param_1,1);
            *(undefined2 *)(lVar7 + -2 + (longlong)iVar5 * 2) = 0x5f;
          }
          while( true ) {
            FUN_00416780(&local_68,uVar3);
            iVar5 = FUN_004170c0(local_68,*param_1,1);
            if (iVar5 < 1) break;
            lVar7 = FUN_00414de0(param_1);
            FUN_00416780(&local_60,uVar3);
            iVar5 = FUN_004170c0(local_60,*param_1,1);
            *(short *)(lVar7 + -2 + (longlong)iVar5 * 2) = sVar6;
          }
          while (iVar5 = FUN_004170c0(&LAB_01b2c868,*param_1,1), 0 < iVar5) {
            lVar7 = FUN_00414de0(param_1);
            iVar5 = FUN_004170c0(&LAB_01b2c868,*param_1,1);
            *(short *)(lVar7 + -2 + (longlong)iVar5 * 2) = sVar8;
          }
        }
        local_70 = local_70 + 1;
        iVar10 = iVar10 + -1;
        puVar9 = puVar9 + 1;
      } while (iVar10 != 0);
    }
  }
  FUN_00414560(&local_68,6);
  return;
}

