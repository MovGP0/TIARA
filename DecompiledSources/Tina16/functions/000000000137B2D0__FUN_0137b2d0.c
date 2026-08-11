/* Ghidra address: 0137b2d0 */
/* Ghidra symbol: FUN_0137b2d0 */


longlong FUN_0137b2d0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int local_8c;
  int local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  int local_4c;
  longlong local_48;
  byte local_39 [9];
  
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_8c = 1;
  cVar2 = (char)param_1[0x13];
  if ((cVar2 == '\x04') || (cVar2 == '\x0f')) {
    FUN_0153a7f0(&local_48,&local_4c,5,*(undefined8 *)(param_1[10] + 0x408));
  }
  else {
    if (cVar2 != '\b') goto LAB_0137b5f7;
    FUN_0153a7f0(&local_48,&local_4c,6,*(undefined8 *)(param_1[10] + 0x408));
    local_8c = 4;
  }
  plVar1 = (longlong *)param_1[1];
  if (((plVar1 != (longlong *)0x0) && (local_48 != 0)) &&
     ((**(code **)(*plVar1 + 0x90))(plVar1), local_4c != 0)) {
    (**(code **)(*param_1 + 0x78))(param_1,local_39);
    local_7c = 0;
    iVar8 = local_4c;
    if (-1 < local_4c + -1) {
      do {
        iVar4 = 0;
        if (-1 < local_8c + -1) {
          puVar7 = &DAT_01f387b4;
          iVar9 = local_8c;
          do {
            lVar5 = FUN_01106eb0(&PTR_FUN_011051a8,1);
            lVar6 = (longlong)local_7c;
            cVar2 = FUN_01b05ff0(*(undefined8 *)(local_48 + lVar6 * 8));
            if (cVar2 == '\0') {
              plVar1 = *(longlong **)(local_48 + lVar6 * 8);
              (**(code **)(*plVar1 + 0x288))(plVar1,&local_68);
              FUN_00414ad0(lVar5 + 8,local_68);
            }
            else {
              plVar1 = *(longlong **)(local_48 + lVar6 * 8);
              (**(code **)(*plVar1 + 0x288))(plVar1,local_60);
              FUN_00414ad0(lVar5 + 8,local_60[0]);
              if ((local_7c == 0) ||
                 (*(longlong *)(local_48 + (longlong)(local_7c + -1) * 8) !=
                  *(longlong *)(local_48 + (longlong)local_7c * 8))) {
                if ((local_7c != local_4c + -1) &&
                   (*(longlong *)(local_48 + (longlong)(local_7c + 1) * 8) ==
                    *(longlong *)(local_48 + (longlong)local_7c * 8))) {
                  FUN_00416ad0(lVar5 + 8,L"_Ch1");
                }
              }
              else {
                FUN_00416ad0(lVar5 + 8,L"_Ch2");
              }
            }
            FUN_010c04f0(lVar5 + 8);
            if ((char)param_1[0x13] == '\b') {
              FUN_004169a0(&local_70,puVar7);
              FUN_00416ad0(lVar5 + 8,local_70);
            }
            uVar3 = FUN_0040c770((double)local_39[0] / 2.0);
            *(undefined1 *)(lVar5 + 0x2a) = uVar3;
            *(int *)(lVar5 + 0x80) = ((local_7c + 1) * (iVar4 + 1) + -1) % 0xb;
            *(bool *)(lVar5 + 0x11) = (char)param_1[0x13] == '\b';
            *(undefined1 *)(lVar5 + 0x38) = 1;
            (**(code **)(*(longlong *)param_1[1] + 0x80))
                      ((longlong *)param_1[1],*(undefined8 *)(lVar5 + 8),lVar5);
            iVar4 = iVar4 + 1;
            puVar7 = puVar7 + 0xb;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        local_7c = local_7c + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  (**(code **)(*(longlong *)param_1[1] + 0x148))((longlong *)param_1[1]);
  local_78 = param_1[1];
LAB_0137b5f7:
  FUN_00414560(&local_70,3);
  return local_78;
}

