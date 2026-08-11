/* Ghidra address: 0172e7c0 */
/* Ghidra symbol: FUN_0172e7c0 */


void FUN_0172e7c0(longlong param_1,undefined1 param_2,longlong param_3,ushort param_4)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180 [256];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_61 [27];
  undefined1 local_46 [21];
  undefined1 local_31;
  ushort local_2c;
  byte local_29;
  
  local_1b0 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_188 = 0;
  local_190 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  if (*(byte *)(param_3 + 0x33) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) << (*(byte *)(param_3 + 0x33) & 0x1f)
            & 0x90U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    FUN_0172a910(*(undefined8 *)(param_1 + 0x4b8),*(undefined4 *)(param_3 + 0x34));
    FUN_0172a920(*(undefined8 *)(param_1 + 0x4b8),&local_29,1);
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    uVar5 = (uint)local_29;
    if (-1 < (int)(uVar5 - 1)) {
      do {
        FUN_0172a920(*(undefined8 *)(param_1 + 0x4b8),local_61,0x1b);
        FUN_004169a0(&local_70,local_61);
        (**(code **)(*plVar3 + 0x78))(plVar3,local_70);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    FUN_0172a920(*(undefined8 *)(param_1 + 0x4b8),&local_2c,2);
    uVar5 = (uint)local_2c;
    sVar2 = 0;
    if (-1 < (int)(uVar5 - 1)) {
      do {
        FUN_0172a920(*(undefined8 *)(param_1 + 0x4b8),local_46,0x1a);
        cVar1 = FUN_0172e0a0(param_4);
        if (cVar1 == '\0') {
          *(undefined1 *)(param_1 + 0x4b7) = 1;
        }
        else {
          FUN_004169a0(&local_80,local_46);
          FUN_0043e130(&local_78,local_80);
          FUN_00416910(local_180,local_78,0xff);
          cVar1 = FUN_0172e6e0(param_1,param_1 + 0x3b7,local_180);
          if (cVar1 != '\0') {
            uVar4 = FUN_00418560(0x20,&DAT_0170bbf8);
            *(undefined8 *)(param_1 + 0x3a8) = uVar4;
            **(uint **)(param_1 + 0x3a8) = (uint)param_4;
            *(undefined1 *)(*(longlong *)(param_1 + 0x3a8) + 4) = param_2;
            *(undefined1 *)(*(longlong *)(param_1 + 0x3a8) + 5) = local_31;
            *(short *)(*(longlong *)(param_1 + 0x3a8) + 6) = sVar2;
            *(undefined1 *)(*(longlong *)(param_1 + 0x3a8) + 8) = 0;
            *(undefined1 *)(*(longlong *)(param_1 + 0x3a8) + 9) = 0;
            *(undefined1 *)(*(longlong *)(param_1 + 0x3a8) + 10) = 0;
            if (param_4 < 10000) {
              FUN_00414b50(param_1 + 0x3a0,L"|Tina Model");
              FUN_004169a0(&local_1a0,local_46);
              (**(code **)(*plVar3 + 0x18))(plVar3,&local_1a8,local_31);
              FUN_0172e1a0(param_1,&local_198,local_1a0,local_1a8,(uint)param_4);
              FUN_00414ad0(*(longlong *)(param_1 + 0x3a8) + 0x10,local_198);
            }
            else {
              FUN_00414b50(param_1 + 0x3a0,L"|Tina Macro");
              FUN_004169a0(&local_190,local_46);
              FUN_0172e1a0(param_1,&local_188,local_190,0,param_4);
              FUN_00414ad0(*(longlong *)(param_1 + 0x3a8) + 0x10,local_188);
            }
            *(undefined8 *)(*(longlong *)(param_1 + 0x3a8) + 0x18) = 0;
            *(undefined1 *)(param_1 + 0x4b7) = 1;
            FUN_004169a0(&local_1b0,local_46);
            FUN_00416ad0(&local_1b0,*(undefined8 *)(param_1 + 0x3a0));
            (**(code **)(**(longlong **)(param_1 + 0x608) + 0x80))
                      (*(longlong **)(param_1 + 0x608),local_1b0,*(undefined8 *)(param_1 + 0x3a8));
          }
        }
        sVar2 = sVar2 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    FUN_00410f20(plVar3);
  }
  FUN_00414560(&local_1b0,6);
  FUN_00414560(&local_80,3);
  return;
}

