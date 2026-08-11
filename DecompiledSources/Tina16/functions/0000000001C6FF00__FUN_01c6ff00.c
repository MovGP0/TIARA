/* Ghidra address: 01c6ff00 */
/* Ghidra symbol: FUN_01c6ff00 */


int FUN_01c6ff00(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  int local_18c;
  undefined8 local_188;
  undefined1 local_180 [256];
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
  wchar_t *local_30 [2];
  
  local_188 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = (wchar_t *)0x0;
  local_38 = 0;
  local_18c = -1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x6d8);
  uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
  plVar7 = (longlong *)
           (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar5);
  if (plVar7 != (longlong *)0x0) {
    local_18c = (int)plVar7[1];
    *(undefined1 *)(param_1 + 0x3f) = 0;
    lVar2 = *(longlong *)(param_1 + 0x50);
    *(int *)(lVar2 + 0x1840) = local_18c;
    uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_40,uVar5);
    FUN_00414ad0(lVar2 + 0x1848,local_40);
    FUN_00414ad0(lVar2 + 0x1850,L"<Auto>");
    *(undefined8 *)(lVar2 + 0x1858) = 0;
    *(undefined1 *)(lVar2 + 0x1860) = 0;
    if (local_18c == 0x39) {
      if ((*plVar7 == 0) || (*(short *)*plVar7 != 0x40)) {
        if ((*plVar7 == 0) || (*(short *)*plVar7 != 0x23)) {
          if (*plVar7 != 0) {
            *(undefined1 *)(param_1 + 0x3f) = 1;
            FUN_00b928f0(&local_188,*plVar7,0);
            FUN_00414ad0(*(longlong *)(param_1 + 0x50) + 0x2760,local_188);
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x3f) = 0;
          lVar2 = *(longlong *)(param_1 + 0x50);
          *(undefined4 *)(lVar2 + 0x1840) = 0x39;
          uVar5 = 0;
          if (*plVar7 != 0) {
            uVar5 = *(undefined4 *)(*plVar7 + -4);
          }
          FUN_00416dc0(&local_70,*plVar7,2,uVar5);
          FUN_00648720(&local_68,local_70);
          FUN_00414ad0(lVar2 + 0x1848,local_68);
          uVar5 = 0;
          if (*plVar7 != 0) {
            uVar5 = *(undefined4 *)(*plVar7 + -4);
          }
          FUN_00416dc0(&local_80,*plVar7,2,uVar5);
          FUN_00648780(&local_78,local_80);
          FUN_00414ad0(lVar2 + 0x1850,local_78);
          *(undefined8 *)(lVar2 + 0x1858) = 0;
          FUN_00416910(local_180,*(undefined8 *)(lVar2 + 0x1848),0xff);
          uVar4 = FUN_017178f0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x2520),local_180);
          *(undefined1 *)(lVar2 + 0x1860) = uVar4;
        }
      }
      else {
        uVar5 = 0;
        if (*plVar7 != 0) {
          uVar5 = *(undefined4 *)(*plVar7 + -4);
        }
        FUN_00416dc0(&local_48,*plVar7,2,uVar5);
        FUN_00648720(local_30,local_48);
        uVar5 = 0;
        if (*plVar7 != 0) {
          uVar5 = *(undefined4 *)(*plVar7 + -4);
        }
        FUN_00416dc0(&local_50,*plVar7,2,uVar5);
        FUN_00648780(&local_38,local_50);
        if (local_30[0] == L"InsertMacro") {
          bVar8 = true;
        }
        else if (local_30[0] == (wchar_t *)0x0) {
          bVar8 = false;
        }
        else {
          iVar6 = FUN_0043e420(local_30[0],L"InsertMacro");
          bVar8 = iVar6 == 0;
        }
        if (bVar8) {
          FUN_00b928f0(&local_58,local_38,0);
          FUN_0177d560(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x18f8),local_58);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x18f8);
          cVar3 = (**(code **)(*plVar1 + 0xa8))(plVar1);
          if (cVar3 != '\0') {
            FUN_00724270(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x18f8),&local_60);
            FUN_00414ad0(*(longlong *)(param_1 + 0x50) + 0x2760,local_60);
            *(undefined1 *)(param_1 + 0x3f) = 1;
          }
        }
      }
    }
  }
  FUN_00414480(&local_188);
  FUN_00414560(&local_80,4);
  FUN_00414480(&local_60);
  FUN_00414560(&local_58,6);
  return local_18c;
}

