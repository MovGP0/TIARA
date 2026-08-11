/* Ghidra address: 00ec76a0 */
/* Ghidra symbol: FUN_00ec76a0 */


void FUN_00ec76a0(longlong *param_1,undefined8 param_2,undefined1 *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong lStack_38;
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_30[0] = 0;
  local_48 = 0;
  if (*param_4 == param_1[0xf5]) {
    iVar4 = FUN_0068c230(param_1[0xf5],param_4 + 6,1);
    if ((-1 < iVar4) && ((char)param_1[0x118] != '\0')) {
      cVar3 = FUN_00eaab90(param_1[0x10b],iVar4,local_30);
      if (cVar3 != '\0') {
        FUN_00416ba0(param_4 + 8,L"Original position: ",local_30[0]);
        FUN_0068c2d0(param_1[0xf5],&local_40,iVar4);
        *(undefined4 *)(param_4 + 7) = 100;
        param_4[4] = local_40;
        param_4[5] = lStack_38;
        goto LAB_00ec7777;
      }
    }
    *param_3 = 0;
  }
LAB_00ec7777:
  lVar1 = *param_4;
  if ((lVar1 == param_1[0xd9]) || (lVar1 == param_1[0xd8])) {
    iVar4 = FUN_0068c230(lVar1,param_4 + 6,1);
    if (iVar4 < 0) {
      *param_3 = 0;
    }
    else {
      (**(code **)(**(longlong **)(*param_4 + 0x4a0) + 0x18))
                (*(longlong **)(*param_4 + 0x4a0),&local_48,iVar4);
      uVar8 = FUN_007ffbe0(param_1);
      iVar5 = FUN_005fdff0(uVar8,local_48);
      iVar6 = (**(code **)(*param_1 + 0x1a0))(param_1,10);
      if (*(int *)(*param_4 + 0x98) < iVar5 + iVar6 + 5) {
        FUN_00414ad0(param_4 + 8,local_48);
        FUN_0068c2d0(*param_4,&local_40,iVar4);
        *(undefined4 *)(param_4 + 7) = 100;
        *param_3 = 1;
      }
      else {
        *param_3 = 0;
      }
    }
  }
  plVar2 = (longlong *)param_1[0x103];
  if ((longlong *)*param_4 == plVar2) {
    iVar4 = (**(code **)(*plVar2 + 0x260))(plVar2);
    if (iVar4 < 0) {
      *param_3 = 0;
    }
    else {
      plVar2 = (longlong *)param_1[0x103];
      uVar7 = (**(code **)(*plVar2 + 0x260))(plVar2);
      (**(code **)(*(longlong *)plVar2[0x9e] + 0x18))((longlong *)plVar2[0x9e],&local_50,uVar7);
      FUN_00eae740(&local_48,local_50);
      FUN_00414ad0(param_4 + 8,local_48);
      *param_3 = 1;
      *(undefined4 *)(param_4 + 7) = 100;
    }
  }
  FUN_00414560(&local_50,2);
  FUN_00414480(local_30);
  return;
}

