/* Ghidra address: 00ceec60 */
/* Ghidra symbol: FUN_00ceec60 */


void FUN_00ceec60(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  lVar4 = (**(code **)*param_2)(param_2);
  lVar5 = FUN_004b6da0(param_2);
  if (lVar5 < lVar4) {
    FUN_00874520(&local_40);
    do {
      FUN_008793e0(&local_38,param_2,0xffffffff,0,local_40);
      iVar7 = 0;
      iVar8 = 0;
      if (local_38 != 0) {
        iVar8 = *(int *)(local_38 + -4);
      }
      iVar6 = 1;
      if (0 < iVar8) {
        do {
          cVar2 = FUN_008791b0(local_38,iVar6);
          if (cVar2 == '\0') {
            cVar2 = FUN_008791b0(local_38,iVar6);
            if (cVar2 == '\0') {
              bVar1 = false;
            }
            else {
              iVar3 = 0;
              if (local_38 != 0) {
                iVar3 = *(int *)(local_38 + -4);
              }
              bVar1 = iVar6 < iVar3;
            }
            if (bVar1) {
              FUN_00416780(&local_30,*(undefined2 *)(local_38 + -2 + (longlong)iVar6 * 2));
            }
            else {
              FUN_00ceebe0(&local_30,*(undefined2 *)(local_38 + -2 + (longlong)iVar6 * 2));
            }
          }
          else if (((iVar7 == 0) || (0x45 < iVar7)) &&
                  (*(short *)(local_38 + -2 + (longlong)iVar6 * 2) == 0x2e)) {
            FUN_00ceebe0(&local_30,*(undefined2 *)(local_38 + -2 + (longlong)iVar6 * 2));
          }
          else {
            FUN_00416780(&local_30,*(undefined2 *)(local_38 + -2 + (longlong)iVar6 * 2));
          }
          FUN_00878970(param_3,local_30,0xffffffff,1,0);
          iVar3 = 0;
          if (local_30 != 0) {
            iVar3 = *(int *)(local_30 + -4);
          }
          iVar7 = iVar7 + iVar3;
          if (0x45 < iVar7) {
            FUN_00878970(param_3,&DAT_00ceef94,0xffffffff,1,0);
            iVar7 = 0;
          }
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      FUN_00878970(param_3,&LAB_00ceefa8,0xffffffff,1,0);
      lVar5 = FUN_004b6da0(param_2);
    } while (lVar5 < lVar4);
  }
  FUN_0041b800(&local_40);
  FUN_00414560(&local_38,2);
  return;
}

