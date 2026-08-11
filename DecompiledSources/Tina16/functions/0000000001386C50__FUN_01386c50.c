/* Ghidra address: 01386c50 */
/* Ghidra symbol: FUN_01386c50 */


void FUN_01386c50(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 *local_50;
  longlong *local_48;
  int local_3c;
  undefined8 local_38;
  undefined1 local_30 [8];
  double local_28;
  int local_1c [3];
  
  local_50 = auStack_88;
  uVar5 = *(undefined8 *)(param_1 + 0xe88);
  cVar1 = FUN_004113d0(uVar5,&PTR_FUN_01377a50);
  if (cVar1 != '\0') {
    local_48 = (longlong *)FUN_004113f0(uVar5,&PTR_FUN_01377a50);
    if ((*(char *)(param_1 + 0x7fa) == '\b') ||
       ((*(char *)(param_1 + 0x7fa) == '\x04' &&
        (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xbf0) + 0x260))
                           (*(longlong **)(param_1 + 0xbf0)), cVar1 == '\0')))) {
      *(undefined1 *)((longlong)local_48 + 0x189) = 1;
    }
    else if (*(char *)(param_1 + 0x7ec) == '\0') {
      FUN_0137e930(local_48,param_1 + 0x880);
      if (*(char *)((longlong)local_48 + 0x16c) != '\0') {
        *(int *)(local_48 + 0x2d) = (int)local_48[0x2d] + 1;
      }
      (**(code **)(*local_48 + 0x128))(local_48,local_1c,param_1 + 0xe74);
      (**(code **)(*local_48 + 0x110))(local_48,local_30,&local_28);
      if (((double)local_1c[0] / 2.0) / local_28 <= (double)local_48[0x2e]) {
        *(undefined1 *)((longlong)local_48 + 0x189) = 1;
        iVar2 = (**(code **)(*local_48 + 0xb8))(local_48);
        if (iVar2 == 0) {
          FUN_0137f4e0(local_48);
        }
        else {
          FUN_010e4300(param_1,8,1000,0);
          FUN_010e4480(param_1,1000);
          local_3c = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x188))
                               (*(longlong **)(param_1 + 0xe88),param_1 + 0x880);
          if (local_3c == 0) {
            if (*(char *)(*(longlong *)(param_1 + 0xbd0) + 0x328) != '\0') {
              local_68 = 1;
              (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x80))
                        (*(longlong **)(param_1 + 0xe88),*(longlong *)(param_1 + 0x870) + 0x2a,
                         &local_38,*(undefined1 *)(param_1 + 0xe90));
              FUN_00b90440(*(undefined8 *)(param_1 + 0xcb8),local_38);
            }
            FUN_010e44f0(param_1);
            FUN_010f67e0(param_1,1,1);
            *(undefined1 *)(param_1 + 0xe45) = 0;
            iVar2 = (**(code **)(**(longlong **)(param_1 + 0xe38) + 0x260))
                              (*(longlong **)(param_1 + 0xe38));
            if (0 < iVar2) {
              uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))
                                (*(longlong **)(param_1 + 0x7d8));
              uVar4 = (**(code **)(**(longlong **)(param_1 + 0xe38) + 0x260))
                                (*(longlong **)(param_1 + 0xe38));
              uVar5 = FUN_0137e350(*(undefined8 *)(param_1 + 0xe88),uVar3,uVar4);
              *(undefined8 *)(param_1 + 0xb60) = uVar5;
              FUN_010f6ef0(param_1);
            }
          }
          FUN_010e4410(param_1,param_1);
          if (local_3c == -1) {
            uVar5 = FUN_0044d490(&PTR_FUN_01384358,1,L"Signal Analyzer: Read Data Failed!");
            FUN_004134c0(uVar5);
          }
          *(undefined1 *)((longlong)local_48 + 0x16e) = 0;
          *(undefined1 *)((longlong)local_48 + 0x16c) = 0;
          *(undefined1 *)((longlong)local_48 + 0x16d) = 1;
          FUN_01cc60b0(local_48[0x32],0);
        }
        local_48[0x2e] = 0;
        *(undefined4 *)(local_48 + 0x2d) = 0;
      }
    }
    return;
  }
  return;
}

