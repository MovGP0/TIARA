/* Ghidra address: 016c44c0 */
/* Ghidra symbol: FUN_016c44c0 */


void FUN_016c44c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  undefined1 local_170 [256];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414630(param_2);
  FUN_00414630(local_res18);
  iVar8 = *(int *)(*(longlong *)(param_1 + 0xa08) + 0x10);
  iVar7 = 0;
  if (-1 < iVar8 + -1) {
    do {
      lVar5 = FUN_01d347d0(*(undefined8 *)(param_1 + 0xa08),iVar7);
      if (*(longlong *)(lVar5 + 0x20) == 0) {
        if (*(longlong *)(lVar5 + 0x10) != 0) {
          FUN_004169a0(&local_178,*(longlong *)(lVar5 + 0x10));
          lVar1 = local_178;
          FUN_00416880(&local_180,local_res10);
          if (local_180 == lVar1) {
            bVar9 = true;
          }
          else {
            FUN_00416880(&local_188,local_res10);
            if ((local_188 == 0) || (lVar1 == 0)) {
              bVar9 = false;
            }
            else {
              FUN_00416880(&local_190,local_res10);
              iVar4 = FUN_0043e420(local_190,lVar1);
              bVar9 = iVar4 == 0;
            }
          }
          if (bVar9) {
            FUN_00415560(local_170,local_res18,0xff);
            uVar6 = FUN_00b95c80(local_170);
            *(undefined8 *)(lVar5 + 0x28) = uVar6;
            break;
          }
        }
      }
      else {
        FUN_004154b0(&local_30,*(longlong *)(lVar5 + 0x20),0);
        FUN_00416880(local_40,local_30);
        cVar2 = FUN_005b8460(&LAB_016c486c,local_40[0]);
        if (cVar2 != '\0') {
          uVar3 = 0;
          if (local_30 != 0) {
            uVar3 = *(undefined4 *)(local_30 + -4);
          }
          FUN_00415ad0(&local_30,local_30,3,uVar3);
        }
        FUN_00416880(&local_48,local_res10);
        FUN_00416880(&local_50,local_30);
        if (local_48 == local_50) {
          bVar9 = true;
        }
        else {
          FUN_00416880(&local_58,local_res10);
          if ((local_58 == 0) || (FUN_00416880(&local_60,local_30), local_60 == 0)) {
            bVar9 = false;
          }
          else {
            FUN_00416880(&local_68,local_res10);
            FUN_00416880(&local_70,local_30);
            iVar4 = FUN_0043e420(local_68,local_70);
            bVar9 = iVar4 == 0;
          }
        }
        if (bVar9) {
          FUN_00415560(local_170,local_res18,0xff);
          uVar6 = FUN_00b95c80(local_170);
          *(undefined8 *)(lVar5 + 0x28) = uVar6;
          break;
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00414560(&local_190,4);
  FUN_00414560(&local_70,7);
  FUN_004144d0(&local_30);
  FUN_00414590(&local_res10,2);
  return;
}

