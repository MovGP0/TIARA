/* Ghidra address: 01869830 */
/* Ghidra symbol: FUN_01869830 */


longlong * FUN_01869830(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_70 [16];
  undefined1 *local_60;
  char local_49;
  int local_48;
  int local_44;
  undefined4 local_40;
  char local_39;
  byte *local_38;
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_a8;
  local_20 = (longlong *)0x0;
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060bbf0(local_20,param_3);
  uVar2 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)(*local_20 + 0x88))(local_20,uVar2);
  uVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*local_20 + 0x70))(local_20,uVar2);
  local_49 = param_3 == '\a';
  (**(code **)(*local_20 + 0x80))(local_20,local_49);
  uVar5 = FUN_00609e10(local_20);
  FUN_005fdf10(uVar5);
  lVar6 = FUN_00609e10(local_20);
  FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),0xffffff);
  plVar7 = (longlong *)FUN_00609e10(local_20);
  uVar2 = (**(code **)(*local_20 + 0x60))(local_20);
  local_88 = (**(code **)(*local_20 + 0x48))(local_20);
  FUN_004238d0(local_70,0,0,uVar2);
  (**(code **)(*plVar7 + 0xa8))(plVar7,local_70);
  plVar7 = (longlong *)FUN_00609e10(local_20);
  uVar2 = (**(code **)(*local_20 + 0x60))(local_20);
  local_88 = (**(code **)(*local_20 + 0x48))(local_20);
  FUN_004238d0(local_70,0,0,uVar2);
  (**(code **)(*plVar7 + 0x110))(plVar7,local_70,param_2);
  uVar5 = FUN_00609e10(local_20);
  FUN_005fe090(uVar5);
  if (local_49 != '\0') {
    local_28 = (longlong *)(**(code **)(param_1 + 0xa0))(param_1,param_2);
    cVar1 = FUN_00609f90(local_28);
    if (cVar1 == '\x01') {
      iVar3 = (**(code **)(*local_28 + 0x48))();
      local_44 = 0;
      if (-1 < iVar3 + -1) {
        do {
          local_38 = (byte *)FUN_0060a050(local_28,local_44);
          local_30 = FUN_0060a050(local_20,local_44);
          local_48 = 0;
          iVar4 = (**(code **)(*local_20 + 0x60))();
          local_40 = 0;
          if (-1 < iVar4 + -1) {
            do {
              local_39 = -(*local_38 >> (7U - (char)local_48 & 0x1f) & 1);
              *(char *)(local_30 + 3) = local_39;
              local_48 = local_48 + 1;
              if (7 < local_48) {
                local_38 = local_38 + 1;
                local_48 = 0;
              }
              local_30 = local_30 + 4;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          local_44 = local_44 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_00410f20(local_28);
    }
  }
  return local_20;
}

