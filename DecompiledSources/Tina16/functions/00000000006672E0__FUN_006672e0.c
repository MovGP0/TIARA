/* Ghidra address: 006672e0 */
/* Ghidra symbol: FUN_006672e0 */


void FUN_006672e0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  int local_78;
  char local_72;
  char local_71;
  longlong local_70;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  code *local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_b0 = auStack_d8;
  do {
    if (*(char *)(param_1 + 0x59) == '\0') {
      return;
    }
    local_72 = '\x01';
    local_50 = (longlong *)FUN_00667120(auStack_d8);
    local_70 = *(longlong *)(param_1 + 0x50);
    if (local_50 != (longlong *)0x0) {
      cVar2 = FUN_0065be20(local_50);
      if (cVar2 != '\0') {
        uVar5 = FUN_0065b870(local_50);
        (**(code **)PTR_DAT_02003560)(uVar5,0xff00,0,3);
      }
      FUN_004d1e10(*(undefined4 *)(local_50[0x93] + 0xa0));
      if (*(char *)(local_50[0x93] + 0xa4) != '\0') {
        do {
          do {
            do {
              do {
                if (*(char *)(param_1 + 0x1a) != '\0') goto code_r0x00667747;
                local_71 = '\0';
                cVar2 = FUN_0065be20(local_50);
                if (cVar2 != '\0') {
                  local_a0 = local_50;
                  local_a8 = *(undefined8 *)(*local_50 + 0x260);
                  FUN_004d1a50(param_1,&local_a8);
                  uVar5 = FUN_0065b870(local_50);
                  thunk_FUN_03ab0e43(uVar5,4);
                }
                if (local_72 != '\0') {
                  local_72 = '\0';
                  local_64 = 1;
                  do {
                    cVar2 = FUN_0065be20(local_50);
                    if (cVar2 != '\0') {
                      uVar5 = FUN_0065b870(local_50);
                      uVar3 = FUN_0040c840(((double)local_64 / 10.0) * 255.0);
                      (**(code **)PTR_DAT_02003560)(uVar5,0xff00,uVar3,3);
                    }
                    local_80 = FUN_004afa30(*(undefined8 *)(param_1 + 0x48));
                    local_78 = *(int *)(local_80 + 0x10);
                    local_20 = *(longlong *)(param_1 + 0x48);
                    FUN_00412130(*(undefined8 *)(local_20 + 0x10));
                    if (1 < local_78) {
                      local_50 = (longlong *)FUN_00667120(auStack_d8);
                      local_71 = '\x01';
                      FUN_00666ba0(local_70);
                      break;
                    }
                    FUN_004d1e10(0x14);
                    local_64 = local_64 + 1;
                  } while (local_64 != 0xb);
                }
              } while (local_71 != '\0');
              uVar3 = FUN_004d1410();
              *(undefined4 *)(param_1 + 0x5c) = uVar3;
              cVar2 = FUN_0065be20(local_50);
              if (cVar2 != '\0') {
                uVar5 = FUN_0065b870(local_50);
                (**(code **)PTR_DAT_02003560)(uVar5,0xff00,0xff,3);
              }
              while (*(char *)(local_50[0x93] + 0xa4) != '\0') {
                FUN_004d1e10(0x14);
                local_88 = FUN_004afa30(*(undefined8 *)(param_1 + 0x48));
                local_78 = *(int *)(local_88 + 0x10);
                local_28 = *(longlong *)(param_1 + 0x48);
                FUN_00412130(*(undefined8 *)(local_28 + 0x10));
                if (1 < local_78) {
                  local_50 = (longlong *)FUN_00667120(auStack_d8);
                  local_71 = '\x01';
                  FUN_00666ba0(local_70);
                  break;
                }
                uVar1 = *(uint *)(local_50[0x93] + 0xa8);
                if ((uVar1 != 0xffffffff) &&
                   (iVar4 = FUN_004d1410(), uVar1 < (uint)(iVar4 - *(int *)(param_1 + 0x5c)))) {
                  FUN_006667a0(local_50[0x93]);
                }
              }
            } while (local_71 != '\0');
            local_64 = 10;
            do {
              cVar2 = FUN_0065be20(local_50);
              if (cVar2 != '\0') {
                uVar5 = FUN_0065b870(local_50);
                uVar3 = FUN_0040c840(((double)local_64 / 10.0) * 255.0);
                (**(code **)PTR_DAT_02003560)(uVar5,0xff00,uVar3,3);
              }
              local_90 = FUN_004afa30(*(undefined8 *)(param_1 + 0x48));
              local_78 = *(int *)(local_90 + 0x10);
              local_30 = *(longlong *)(param_1 + 0x48);
              FUN_00412130(*(undefined8 *)(local_30 + 0x10));
              if (1 < local_78) {
                local_50 = (longlong *)FUN_00667120(auStack_d8);
                local_71 = '\x01';
                FUN_00666ba0(local_70);
                break;
              }
              FUN_004d1e10(0x14);
              local_64 = local_64 + -1;
            } while (local_64 != -1);
          } while (local_71 != '\0');
          local_98 = FUN_004afa30(*(undefined8 *)(param_1 + 0x48));
          local_78 = *(int *)(local_98 + 0x10);
          local_38 = *(longlong *)(param_1 + 0x48);
          FUN_00412130(*(undefined8 *)(local_38 + 0x10));
        } while (local_78 != 1);
      }
code_r0x00667747:
      local_40 = local_50;
      local_48 = FUN_00410f20;
      FUN_004d1a50(param_1,&local_48);
      local_58 = FUN_004afa30(*(undefined8 *)(param_1 + 0x48));
      FUN_004ae870(local_58,0);
      local_60 = *(longlong *)(param_1 + 0x48);
      FUN_00412130(*(undefined8 *)(local_60 + 0x10));
    }
    if ((*(char *)(local_70 + 0xb8) == '\0') &&
       (*(char *)(*(longlong *)PTR_DAT_02004030 + 0x148) == '\0')) {
      FUN_00618b90(*(undefined8 *)(param_1 + 0x60));
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))
                (*(longlong **)(param_1 + 0x60),0xffffffff);
    }
  } while( true );
}

