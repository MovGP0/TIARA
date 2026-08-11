/* Ghidra address: 01a51960 */
/* Ghidra symbol: FUN_01a51960 */


void FUN_01a51960(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  plVar2 = *(longlong **)(param_2 + 0x18);
  cVar4 = FUN_004113d0(plVar2,&LAB_00f22f08);
  if (cVar4 == '\0') {
    cVar4 = FUN_004113d0(plVar2,&LAB_00f22a90);
    if (cVar4 != '\0') {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_28);
      FUN_00414b50(param_1 + 0x128,local_28);
    }
  }
  else {
    (**(code **)(*plVar2 + 0x18))(plVar2,local_20);
    FUN_00414b50(param_1 + 0x128,local_20[0]);
    uVar5 = FUN_0043fc00(*(undefined8 *)(param_1 + 0x128));
    *(undefined4 *)(param_1 + 0x124) = uVar5;
  }
  if (*(longlong *)(param_1 + 0x118) == 0) {
    FUN_00414b50(param_1 + 0x108,*(undefined8 *)(param_1 + 0x110));
  }
  else {
    FUN_00416cd0(param_1 + 0x108,3,*(undefined8 *)(param_1 + 0x118),&DAT_01a51e28,
                 *(undefined8 *)(param_1 + 0x110));
  }
  iVar6 = FUN_00416db0(*(undefined8 *)(param_1 + 0x108),L"llamafile/version");
  if (iVar6 == 0) {
    FUN_00414ad0(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x7e8) + 0x30) + 0x10,
                 *(undefined8 *)(param_1 + 0x128));
  }
  else {
    iVar6 = FUN_00416db0(*(undefined8 *)(param_1 + 0x108),L"llamafile/install_loc");
    if (iVar6 == 0) {
      FUN_00414ad0(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x7e8) + 0x30) +
                   0x18,*(undefined8 *)(param_1 + 0x128));
    }
    else {
      iVar6 = FUN_004170c0(L"llamafile/opts",*(undefined8 *)(param_1 + 0x108),1);
      if ((iVar6 < 1) ||
         (0x1f < *(int *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x7e8) + 0x30) + 8))) {
        iVar6 = FUN_00416db0(*(undefined8 *)(param_1 + 0x108),L"tina_ai/version");
        if (iVar6 == 0) {
          FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x7e8) + 0x18,
                       *(undefined8 *)(param_1 + 0x128));
          FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x2968) + 0x80,
                       *(undefined8 *)(param_1 + 0x128));
        }
        else {
          iVar6 = FUN_00416db0(*(undefined8 *)(param_1 + 0x108),L"tina_ai/versions");
          if (iVar6 == 0) {
            FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x7e8) + 0x20,
                         *(undefined8 *)(param_1 + 0x128));
            FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x2968) + 0x88,
                         *(undefined8 *)(param_1 + 0x128));
          }
          else {
            iVar6 = FUN_00416db0(*(undefined8 *)(param_1 + 0x108),L"ollama/port");
            if (iVar6 == 0) {
              uVar5 = FUN_0043fc00(*(undefined8 *)(param_1 + 0x128));
              *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x7e8) + 0xc) = uVar5;
            }
            else {
              iVar6 = FUN_00416db0(*(undefined8 *)(param_1 + 0x108),L"lmstudio/port");
              if (iVar6 == 0) {
                uVar5 = FUN_0043fc00(*(undefined8 *)(param_1 + 0x128));
                *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x7e8) + 0x10) =
                     uVar5;
              }
              else {
                iVar6 = FUN_00416db0(*(undefined8 *)(param_1 + 0x108),L"app_log");
                if (iVar6 == 0) {
                  uVar5 = FUN_0043fc00(*(undefined8 *)(param_1 + 0x128));
                  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x7e8) + 8) = uVar5
                  ;
                }
                else {
                  iVar6 = FUN_00416db0(*(undefined8 *)(param_1 + 0x108),L"web_models");
                  if (iVar6 == 0) {
                    FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x7e8) + 0x28,
                                 *(undefined8 *)(param_1 + 0x128));
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar7 = FUN_0147b270(&DAT_01479ef8,1,*(undefined8 *)(param_1 + 0x110),
                             *(undefined8 *)(param_1 + 0x128));
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x7e8) + 0x30);
        *(undefined8 *)(lVar3 + 0x20 + (longlong)*(int *)(lVar3 + 8) * 8) = uVar7;
        piVar1 = (int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x7e8) + 0x30)
                        + 8);
        *piVar1 = *piVar1 + 1;
        iVar6 = FUN_004170c0(L"port",*(undefined8 *)(param_1 + 0x108),1);
        if (0 < iVar6) {
          uVar5 = FUN_0043fc00(*(undefined8 *)(param_1 + 0x128));
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x7e8) + 0x30) + 0xc) =
               uVar5;
        }
      }
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

