/* Ghidra address: 01635940 */
/* Ghidra symbol: FUN_01635940 */


void FUN_01635940(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_68 = 0;
  local_60[0] = 0;
  local_40[0] = 0;
  local_48 = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xb0);
  iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x38) + 0x10);
  iVar6 = 0;
  if (-1 < iVar8 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x38),iVar6);
      if (*(char *)(lVar3 + 8) == '\x01') {
        lVar4 = FUN_01612bc0(lVar3,1);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(lVar4 + 0xc);
        iVar7 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c) + 1;
        uVar5 = FUN_01612bc0(lVar3,1);
        uVar5 = FUN_0161be50(uVar5,uVar1,local_50,1);
        FUN_0043f750(local_60,iVar7);
        iVar2 = (**(code **)(*param_3 + 0xb0))(param_3,local_60[0]);
        if (iVar2 == -1) {
          FUN_01636fd0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x13980),&local_68,
                       *(undefined4 *)(param_1 + 0x5c));
          FUN_00416ba0(&local_48,local_68,L"_lastval");
          FUN_0043f750(local_40,iVar7);
          (**(code **)(*param_3 + 0x80))(param_3,local_40[0],uVar5);
          if (9999 < iVar7) {
            FUN_01613110(0);
          }
          if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x98) < iVar7) {
            *(int *)(*(longlong *)(param_1 + 0x98) + 0x98) = iVar7;
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_48,2);
  return;
}

