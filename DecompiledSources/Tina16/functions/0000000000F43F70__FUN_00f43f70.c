/* Ghidra address: 00f43f70 */
/* Ghidra symbol: FUN_00f43f70 */


void FUN_00f43f70(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  short sVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_30 = param_1;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0xf8))(*(longlong **)(param_1 + 0x740));
  cVar2 = FUN_01d42070(uVar4);
  if (cVar2 == '\0') {
    uVar4 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                      (*(longlong **)(local_30 + 0x740));
    cVar2 = FUN_01d420a0(uVar4);
    if (cVar2 == '\0') {
      uVar4 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                        (*(longlong **)(local_30 + 0x740));
      cVar2 = FUN_01d420f0(uVar4);
      if (cVar2 == '\0') {
        sVar5 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                          (*(longlong **)(local_30 + 0x740));
        if (sVar5 != 0xb7) {
          sVar5 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                            (*(longlong **)(local_30 + 0x740));
          if (sVar5 != 0xb4) {
            sVar5 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                              (*(longlong **)(local_30 + 0x740));
            if (sVar5 != 0xb8) {
              sVar5 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                                (*(longlong **)(local_30 + 0x740));
              if (sVar5 != 0xc4) {
                uVar3 = FUN_00b0a890(*(undefined8 *)(local_30 + 0x6d0));
                *(undefined1 *)(local_30 + 0x739) = uVar3;
                *(undefined4 *)(local_30 + 0x508) = 6;
                goto code_r0x00f443df;
              }
            }
          }
        }
      }
    }
  }
  plVar1 = *(longlong **)(local_30 + 0x730);
  sVar5 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))(*(longlong **)(local_30 + 0x740));
  if (sVar5 == 0xc2) {
    FUN_00414ad0(plVar1 + 0x20,&DAT_00f44434);
    FUN_00414ad0(plVar1 + 0x1c,L"S parameter file (Touchstone format) (*.S8P)|*.S8P");
  }
  else {
    sVar5 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                      (*(longlong **)(local_30 + 0x740));
    if (sVar5 == 0xbd) {
      FUN_00414ad0(plVar1 + 0x20,&DAT_00f444bc);
      FUN_00414ad0(plVar1 + 0x1c,L"S parameter file (Touchstone format) (*.S7P)|*.S7P");
    }
    else {
      sVar5 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                        (*(longlong **)(local_30 + 0x740));
      if (sVar5 == 0xbc) {
        FUN_00414ad0(plVar1 + 0x20,&DAT_00f44544);
        FUN_00414ad0(plVar1 + 0x1c,L"S parameter file (Touchstone format) (*.S6P)|*.S6P");
      }
      else {
        sVar5 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                          (*(longlong **)(local_30 + 0x740));
        if (sVar5 == 0xbb) {
          FUN_00414ad0(plVar1 + 0x20,&DAT_00f445cc);
          FUN_00414ad0(plVar1 + 0x1c,L"S parameter file (Touchstone format) (*.S5P)|*.S5P");
        }
        else {
          uVar4 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                            (*(longlong **)(local_30 + 0x740));
          cVar2 = FUN_01d420e0(uVar4);
          if (cVar2 == '\0') {
            sVar5 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                              (*(longlong **)(local_30 + 0x740));
            if (sVar5 != 0xb8) {
              uVar4 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                                (*(longlong **)(local_30 + 0x740));
              cVar2 = FUN_01d420d0(uVar4);
              if (cVar2 == '\0') {
                sVar5 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                                  (*(longlong **)(local_30 + 0x740));
                if (sVar5 != 0xb7) {
                  sVar5 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                                    (*(longlong **)(local_30 + 0x740));
                  if (sVar5 != 0xb4) {
                    sVar5 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                                      (*(longlong **)(local_30 + 0x740));
                    if (sVar5 != 0xc4) {
                      uVar4 = (**(code **)(**(longlong **)(local_30 + 0x740) + 0xf8))
                                        (*(longlong **)(local_30 + 0x740));
                      cVar2 = FUN_01d420a0(uVar4);
                      if (cVar2 == '\0') {
                        FUN_00414ad0(plVar1 + 0x20,&DAT_00f447ec);
                        FUN_00414ad0(plVar1 + 0x1c,
                                     L"S parameter file (Touchstone format) (*.S1P)|*.S1P");
                      }
                      else {
                        FUN_00414ad0(plVar1 + 0x20,&DAT_00f44764);
                        FUN_00414ad0(plVar1 + 0x1c,
                                     L"S parameter file (Touchstone format) (*.S2P)|*.S2P");
                      }
                      goto LAB_00f4432c;
                    }
                  }
                }
              }
              FUN_00414ad0(plVar1 + 0x20,&DAT_00f446dc);
              FUN_00414ad0(plVar1 + 0x1c,L"S parameter file (Touchstone format) (*.S3P)|*.S3P");
              goto LAB_00f4432c;
            }
          }
          FUN_00414ad0(plVar1 + 0x20,&DAT_00f44654);
          FUN_00414ad0(plVar1 + 0x1c,L"S parameter file (Touchstone format) (*.S4P)|*.S4P");
        }
      }
    }
  }
LAB_00f4432c:
  FUN_01b22c50(local_20,5);
  FUN_00724420(plVar1,local_20[0]);
  cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar2 != '\0') {
    FUN_00724270(plVar1,&local_28);
    (**(code **)(**(longlong **)(local_30 + 0x768) + 0xd8))
              (*(longlong **)(local_30 + 0x768),local_28);
    plVar1 = *(longlong **)(local_30 + 0x740);
    uVar6 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    uVar6 = FUN_00f43eb0(auStack_58,uVar6);
    FUN_017002a0(plVar1,*(undefined8 *)(local_30 + 0x768),uVar6);
  }
code_r0x00f443df:
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

