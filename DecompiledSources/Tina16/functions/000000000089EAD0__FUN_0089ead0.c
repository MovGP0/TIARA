/* Ghidra address: 0089ead0 */
/* Ghidra symbol: FUN_0089ead0 */


undefined8
FUN_0089ead0(undefined8 param_1,longlong param_2,ushort *param_3,undefined8 param_4,int param_5)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  uint uVar9;
  int local_7c;
  int local_78;
  int local_74;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_7c = 1;
  local_74 = 1;
  iVar6 = 0;
  uVar8 = CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),0x20);
  cVar2 = '\0';
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + -4);
  }
  iVar5 = 0;
  if (param_3 != (ushort *)0x0) {
    iVar5 = *(int *)(param_3 + -2);
  }
  FUN_00414480(param_1);
  local_78 = 1;
  if (0 < iVar4) {
    do {
      uVar1 = *(ushort *)(param_2 + -2 + (longlong)local_78 * 2);
      uVar9 = (uint)uVar1;
      uVar7 = (ushort)uVar8;
      if (uVar1 == *param_3) {
        if (uVar7 == 0x20) {
          FUN_00416dc0(&local_30,param_2,local_78,iVar5);
          cVar2 = FUN_00879070(param_3,local_30);
          if (cVar2 != '\0') {
            local_78 = local_78 + iVar5 + -1;
            iVar6 = local_78;
          }
        }
      }
      else {
        FUN_00416780(&local_38,uVar9);
        cVar3 = FUN_008791b0(local_38,1,param_4);
        if (cVar3 == '\0') {
          FUN_00416780(&local_40,uVar9);
          cVar3 = FUN_008791b0(local_40,1,&DAT_0089ee38);
          if (cVar3 != '\0') {
            if (uVar1 == uVar7) {
              uVar8 = CONCAT62((int6)(uVar8 >> 0x10),0x20);
            }
            else if (uVar7 == 0x20) {
              uVar8 = (ulonglong)uVar9;
            }
          }
        }
        else if (uVar7 == 0x20) {
          iVar6 = local_78;
        }
      }
      local_78 = local_78 + 1;
      local_7c = local_7c + 1;
      FUN_00416780(&local_48,uVar8 & 0xffffffff);
      cVar3 = FUN_008791b0(local_48,1,&DAT_0089ee38);
      if ((cVar3 == '\0') && ((cVar2 != '\0' || ((param_5 < local_7c && (local_74 < iVar6)))))) {
        local_7c = local_78 - iVar6;
        FUN_00416dc0(&local_50,param_2,local_74,(iVar6 - local_74) + 1);
        FUN_00416ad0(param_1,local_50);
        FUN_00416780(&local_58,uVar9);
        cVar3 = FUN_008791b0(local_58,1,&DAT_0089ee38);
        if (cVar3 == '\0') {
          for (; local_78 <= iVar4; local_78 = local_78 + 1) {
            FUN_00416cd0(&local_60,3,param_4,&DAT_0089ee48,&LAB_0089ee58);
            cVar3 = FUN_008791b0(param_2,local_78,local_60);
            if (cVar3 == '\0') break;
          }
          if ((cVar2 == '\0') && (local_78 < iVar4)) {
            FUN_00416ad0(param_1,param_3);
          }
        }
        iVar6 = iVar6 + 1;
        cVar2 = '\0';
        local_74 = iVar6;
      }
    } while (local_78 <= iVar4);
  }
  FUN_00416dc0(&local_68,param_2,local_74,0x7fffffff);
  FUN_00416ad0(param_1,local_68);
  FUN_00414560(&local_68,8);
  return param_1;
}

