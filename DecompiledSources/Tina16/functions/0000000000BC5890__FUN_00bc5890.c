/* Ghidra address: 00bc5890 */
/* Ghidra symbol: FUN_00bc5890 */


undefined1 FUN_00bc5890(undefined8 param_1,longlong param_2,uint *param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_59 = 1;
  bVar2 = true;
  iVar6 = 0;
  if (param_2 != 0) {
    iVar6 = *(int *)(param_2 + -4);
  }
  iVar5 = 1;
  if (0 < iVar6) {
    do {
      lVar7 = (longlong)iVar5;
      sVar1 = *(short *)(param_2 + -2 + lVar7 * 2);
      if (sVar1 == 0x2d) {
        bVar2 = false;
      }
      else {
        FUN_00416780(&local_30,sVar1);
        iVar3 = FUN_004170c0(local_30,&PTR_DAT_00bc5ac8,1);
        if (iVar3 < 1) {
          FUN_00416780(&local_38,*(undefined2 *)(param_2 + -2 + lVar7 * 2));
          iVar3 = FUN_004170c0(local_38,&DAT_00bc5adc,1);
          if (iVar3 < 1) {
            FUN_00416780(&local_40,*(undefined2 *)(param_2 + -2 + lVar7 * 2));
            iVar3 = FUN_004170c0(local_40,&PTR_DAT_00bc5af0,1);
            if (iVar3 < 1) {
              FUN_00416780(&local_48,*(undefined2 *)(param_2 + -2 + lVar7 * 2));
              iVar3 = FUN_004170c0(local_48,&PTR_DAT_00bc5b04,1);
              if (iVar3 < 1) {
                FUN_00416780(&local_50,*(undefined2 *)(param_2 + -2 + lVar7 * 2));
                iVar3 = FUN_004170c0(local_50,&PTR_DAT_00bc5b18,1);
                if (iVar3 < 1) {
                  FUN_00416780(&local_58,*(undefined2 *)(param_2 + -2 + lVar7 * 2));
                  iVar3 = FUN_004170c0(local_58,&DAT_00bc5b2c,1);
                  if (iVar3 < 1) {
                    local_59 = 0;
                    break;
                  }
                  uVar4 = 0x20;
                }
                else {
                  uVar4 = 0x10;
                }
              }
              else {
                uVar4 = 8;
              }
            }
            else {
              uVar4 = 4;
            }
          }
          else {
            uVar4 = 2;
          }
        }
        else {
          uVar4 = 1;
        }
        if (bVar2) {
          *param_3 = *param_3 | uVar4;
        }
        else {
          *param_3 = *param_3 & ~uVar4;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_58,6);
  return local_59;
}

