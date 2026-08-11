/* Ghidra address: 00895a70 */
/* Ghidra symbol: FUN_00895a70 */


undefined1 FUN_00895a70(longlong param_1)

{
  short *psVar1;
  char cVar2;
  undefined1 auStack_98 [32];
  int *local_78;
  longlong local_68;
  undefined1 *local_60;
  int *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  int local_34;
  int local_30;
  undefined1 local_29;
  longlong local_28;
  longlong local_20;
  
  local_60 = auStack_98;
  local_68 = 0;
  local_50 = 0;
  local_58 = (int *)0x0;
  local_29 = 1;
  local_34 = 0x3c00;
  local_28 = FUN_004095c0(0x3c00);
LAB_00895ab8:
  do {
    local_78 = &local_34;
    local_30 = (*(code *)PTR_FUN_01e23588)(0,0x2e,0,local_28);
    if (local_30 < 0x70) {
      if (local_30 == 0x6f) {
        FUN_00409620(&local_28,local_34);
        goto LAB_00895ab8;
      }
      if (local_30 == 0) {
        if (local_34 != 0) {
          local_20 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))(*(longlong **)(param_1 + 0x38));
          local_40 = local_28;
          do {
            if ((*(int *)(local_40 + 100) != 0x18) && ((*(uint *)(local_40 + 0x5c) & 8) == 0)) {
              for (local_48 = *(longlong *)(local_40 + 0x18); local_48 != 0;
                  local_48 = *(longlong *)(local_48 + 8)) {
                if (*(int *)(local_48 + 0x28) == 4) {
                  psVar1 = *(short **)(local_48 + 0x10);
                  if (*psVar1 == 2) {
                    FUN_00891ce0(*(undefined8 *)(param_1 + 0x30),&local_50,psVar1 + 2,0);
                    cVar2 = FUN_00879990(6,0);
                    if (cVar2 == '\0') {
                      if (local_20 == 0) {
                        local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
                        FUN_00895890(param_1,local_20);
                      }
                      FUN_004b4060(local_20,&local_58,local_50);
                    }
                    else {
                      FUN_00895840(param_1,&local_58,*(undefined1 *)(local_48 + 0x38));
                    }
                    local_78 = local_58;
                    FUN_0089bad0(&PTR_FUN_00899290,1,*(undefined8 *)(param_1 + 0x38));
                  }
                  else if (*psVar1 == 0x17) {
                    FUN_00891ce0(*(undefined8 *)(param_1 + 0x30),&local_68,psVar1 + 4,1);
                    FUN_0089bba0(&PTR_FUN_00899510,1,*(undefined8 *)(param_1 + 0x38));
                  }
                }
              }
            }
            local_40 = *(longlong *)(local_40 + 8);
          } while (local_40 != 0);
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))(*(longlong **)(param_1 + 0x38));
          FUN_00410f20(local_20);
          FUN_004095f0(local_28);
          goto LAB_00895d2e;
        }
        goto LAB_00895d20;
      }
      if (local_30 == 0x32) {
        local_29 = 0;
LAB_00895d20:
        FUN_00895db0(0,local_60);
LAB_00895d2e:
        FUN_00414480(&local_68);
        FUN_00414560(&local_58,2);
        return local_29;
      }
    }
    else if ((local_30 == 0xe8) || (local_30 == 0x4cc)) goto LAB_00895d20;
    thunk_FUN_041931fb();
    FUN_00874a00();
  } while( true );
}

