/* Ghidra address: 012a4860 */
/* Ghidra symbol: FUN_012a4860 */


longlong FUN_012a4860(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined8 local_58;
  undefined8 local_50 [2];
  int local_3c;
  longlong local_38;
  undefined1 local_2a;
  byte local_29;
  
  local_58 = 0;
  local_50[0] = 0;
  FUN_0153a7f0(&local_38,&local_3c,4,*(undefined8 *)(param_1[10] + 0x408));
  plVar1 = (longlong *)param_1[1];
  if ((plVar1 != (longlong *)0x0) && (local_38 != 0)) {
    (**(code **)(*plVar1 + 0x90))(plVar1);
    if (local_3c != 0) {
      (**(code **)(*param_1 + 0x70))(param_1,&local_29,&local_2a);
      iVar7 = 0;
      if (-1 < local_3c) {
        iVar9 = local_3c + 1;
        do {
          lVar5 = FUN_01107340(&PTR_FUN_01105a20,1);
          *(undefined1 *)(lVar5 + 0x10) = 1;
          if (iVar7 < local_3c) {
            plVar1 = *(longlong **)(local_38 + (longlong)iVar7 * 8);
            (**(code **)(*plVar1 + 0x288))(plVar1,local_50);
            FUN_00414ad0(lVar5 + 8,local_50[0]);
            lVar8 = (longlong)iVar7;
            plVar1 = *(longlong **)(local_38 + lVar8 * 8);
            sVar4 = (**(code **)(*plVar1 + 0xf8))(plVar1);
            if (sVar4 == 0x3d) {
LAB_012a498f:
              if ((iVar7 == 0) ||
                 (*(longlong *)(local_38 + (longlong)(iVar7 + -1) * 8) !=
                  *(longlong *)(local_38 + (longlong)iVar7 * 8))) {
                if ((iVar7 != local_3c + -1) &&
                   (*(longlong *)(local_38 + (longlong)(iVar7 + 1) * 8) ==
                    *(longlong *)(local_38 + (longlong)iVar7 * 8))) {
                  FUN_00416ad0(lVar5 + 8,L"_Ch1");
                }
              }
              else {
                FUN_00416ad0(lVar5 + 8,L"_Ch2");
              }
            }
            else {
              plVar1 = *(longlong **)(local_38 + lVar8 * 8);
              sVar4 = (**(code **)(*plVar1 + 0xf8))(plVar1);
              if (sVar4 == 0x65) goto LAB_012a498f;
              cVar2 = FUN_01b05ff0(*(undefined8 *)(local_38 + lVar8 * 8));
              if (cVar2 != '\0') goto LAB_012a498f;
              if (*(longlong *)(lVar5 + 8) == 0) {
                FUN_0043f750(&local_58,iVar7);
                FUN_00416ba0(lVar5 + 8,&DAT_012a4bb8,local_58);
                uVar6 = FUN_019a45d0();
                uVar6 = FUN_0198d430(uVar6);
                FUN_017bf050(*(undefined8 *)(local_38 + lVar8 * 8),uVar6,*(undefined8 *)(lVar5 + 8))
                ;
              }
            }
            FUN_010c04f0(lVar5 + 8);
            *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(local_38 + (longlong)iVar7 * 8);
            *(undefined1 *)(lVar5 + 0x148) = 1;
          }
          else {
            (**(code **)(*(longlong *)param_1[1] + 0x148))((longlong *)param_1[1]);
            FUN_00414480(lVar5 + 8);
            *(undefined8 *)(lVar5 + 0x18) = 0;
            *(undefined1 *)(lVar5 + 0x148) = 0;
          }
          uVar3 = FUN_0040c770((double)local_29 / 2.0);
          *(undefined1 *)(lVar5 + 0x2a) = uVar3;
          (**(code **)(*param_1 + 0x78))(param_1,lVar5 + 0x2a,lVar5 + 0x118,1);
          *(undefined1 *)(lVar5 + 0x120) = local_2a;
          *(int *)(lVar5 + 0x80) = iVar7 % 0xb;
          (**(code **)(*(longlong *)param_1[1] + 0x80))
                    ((longlong *)param_1[1],*(undefined8 *)(lVar5 + 8),lVar5);
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      FUN_004095f0(local_38,(longlong)(local_3c * 8));
    }
  }
  lVar5 = param_1[1];
  FUN_00414560(&local_58,2);
  return lVar5;
}

