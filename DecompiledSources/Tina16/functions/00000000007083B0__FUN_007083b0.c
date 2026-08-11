/* Ghidra address: 007083b0 */
/* Ghidra symbol: FUN_007083b0 */


void FUN_007083b0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 *local_60;
  undefined1 local_50 [15];
  undefined1 local_41;
  undefined1 local_40 [16];
  int local_30 [2];
  int local_28;
  longlong *local_20;
  
  local_60 = auStack_98;
  thunk_FUN_03e49910(*(undefined8 *)(param_1 + 0x48),local_40);
  iVar2 = FUN_004230a0(local_40);
  if (iVar2 != 0) {
    iVar2 = FUN_004230c0(local_40);
    if (iVar2 != 0) {
      plVar5 = (longlong *)FUN_00777cd0();
      cVar1 = (**(code **)(*plVar5 + 0x90))(plVar5);
      if (cVar1 != '\0') {
        local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
        uVar3 = FUN_004230a0(local_40);
        (**(code **)(*local_20 + 0x88))(local_20,uVar3);
        uVar3 = FUN_004230c0(local_40);
        (**(code **)(*local_20 + 0x70))(local_20,uVar3);
        uVar3 = (**(code **)(*local_20 + 0x60))(local_20);
        uVar4 = (**(code **)(*local_20 + 0x48))(local_20);
        local_78 = CONCAT44(local_78._4_4_,uVar4);
        FUN_00423010(local_30,0,0,uVar3);
        lVar6 = FUN_00609e10(local_20);
        uVar7 = FUN_00777cd0();
        uVar3 = FUN_00778bd0(uVar7,0xff00000f,0);
        FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),uVar3);
        plVar5 = (longlong *)FUN_00609e10(local_20);
        (**(code **)(*plVar5 + 0xa8))(plVar5,local_30);
        iVar2 = FUN_004230a0(local_30);
        local_28 = local_30[0] + iVar2 / 2;
        if (*(char *)(param_1 + 0x60) == '\0') {
          if (*(char *)(param_1 + 0x62) == '\0') {
            local_41 = 10;
          }
          else {
            local_41 = 0xb;
          }
        }
        else {
          local_41 = 0xc;
        }
        plVar5 = (longlong *)FUN_00777cd0(local_28,(longlong)iVar2 % 2 & 0xffffffff);
        (**(code **)(*plVar5 + 0x198))(plVar5,local_50,local_41);
        uVar7 = FUN_00777cd0();
        uVar8 = FUN_00609e10(local_20);
        uVar8 = FUN_005ffa40(uVar8);
        local_78 = 0;
        local_70 = 0;
        FUN_00778dc0(uVar7,uVar8,local_50,local_30);
        uVar3 = (**(code **)(*local_20 + 0x60))(local_20);
        uVar4 = (**(code **)(*local_20 + 0x48))(local_20);
        local_78 = CONCAT44(local_78._4_4_,uVar4);
        FUN_00423010(local_30,0,0,uVar3);
        iVar2 = FUN_004230a0(local_30);
        local_30[0] = local_28 - iVar2 / 2;
        if (*(char *)(param_1 + 0x61) == '\0') {
          if (*(char *)(param_1 + 99) == '\0') {
            local_41 = 0xe;
          }
          else {
            local_41 = 0xf;
          }
        }
        else {
          local_41 = 0x10;
        }
        plVar5 = (longlong *)FUN_00777cd0(local_30[0],(longlong)iVar2 % 2 & 0xffffffff);
        (**(code **)(*plVar5 + 0x198))(plVar5,local_50,local_41);
        uVar7 = FUN_00777cd0();
        uVar8 = FUN_00609e10(local_20);
        uVar8 = FUN_005ffa40(uVar8);
        local_78 = 0;
        local_70 = 0;
        FUN_00778dc0(uVar7,uVar8,local_50,local_30);
        (**(code **)(*param_2 + 0x88))(param_2,0,0,local_20);
        FUN_00410f20(local_20);
      }
    }
  }
  return;
}

