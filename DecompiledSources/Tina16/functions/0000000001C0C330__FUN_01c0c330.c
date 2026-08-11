/* Ghidra address: 01c0c330 */
/* Ghidra symbol: FUN_01c0c330 */


void FUN_01c0c330(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_90;
  int local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_60 [16];
  undefined1 *local_50;
  longlong local_40;
  longlong *local_38;
  undefined8 local_2c;
  undefined4 local_24;
  longlong *local_20;
  
  local_50 = auStack_b8;
  local_2c = *param_2;
  plVar4 = (longlong *)FUN_01c07120(param_1);
  cVar1 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
  if ((cVar1 == '\0') && (*(char *)((longlong)param_1 + 0x363) != '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*(longlong *)param_1[100] + 0x70))((longlong *)param_1[100]);
        if (cVar1 != '\0') {
          local_40 = *(longlong *)(param_1[0x62] + 0x80);
          local_24 = *(undefined4 *)(*(longlong *)(local_40 + 0x18) + 0x28);
          local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
          lVar5 = FUN_01bfd980(param_1[100]);
          if (lVar5 != 0) {
            local_38 = (longlong *)
                       (**(code **)(*param_1 + 0x218))
                                 (param_1,0,*(undefined4 *)(param_1[100] + 0xa0));
            if ((local_38 != (longlong *)0x0) && (-1 < *(int *)(param_1[100] + 0xa0))) {
              iVar2 = (**(code **)(*local_38 + 0x90))(local_38);
              if (*(int *)(param_1[100] + 0xa0) < iVar2) {
                uVar6 = FUN_01c07120(param_1);
                lVar5 = FUN_01c03e40(uVar6);
                uVar3 = FUN_00635930(*(undefined4 *)(lVar5 + 0xb4),0xffffffce);
                FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),uVar3);
                (**(code **)(*local_20 + 0x88))(local_20,*(undefined4 *)((longlong)local_38 + 0x94))
                ;
                (**(code **)(*local_20 + 0x70))(local_20,*(undefined4 *)((longlong)local_38 + 0x94))
                ;
                plVar4 = (longlong *)FUN_00609e10(local_20);
                plVar7 = (longlong *)FUN_00609e10(local_20);
                (**(code **)(*plVar7 + 0x20))(plVar7,local_60);
                (**(code **)(*plVar4 + 0xa8))(plVar4,local_60);
                if ((char)local_38[0x1c] == '\x01') {
                  uVar6 = FUN_00609e10(local_20);
                  local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(param_1[100] + 0xa0));
                  local_90 = CONCAT31(local_90._1_3_,2);
                  local_88 = CONCAT31(local_88._1_3_,1);
                  local_80 = CONCAT31(local_80._1_3_,1);
                  FUN_007d6cc0(local_38,uVar6,0,0);
                }
                else {
                  uVar6 = FUN_00609e10(local_20);
                  local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(param_1[100] + 0xa0));
                  local_90 = CONCAT31(local_90._1_3_,1);
                  FUN_007d6c70(local_38,uVar6,0,0);
                }
                uVar6 = FUN_005ffa40(param_1[0x62]);
                uVar8 = FUN_005fdb10(*(undefined8 *)(param_1[0x62] + 0x80));
                uVar9 = (**(code **)(*local_20 + 0xe8))(local_20);
                local_98 = 0;
                local_90 = (int)local_2c + 1;
                local_88 = local_2c._4_4_ + 1;
                local_80 = 0;
                local_78 = 0;
                local_70 = 0x84;
                thunk_FUN_03abf120(uVar6,uVar8,0,uVar9);
              }
            }
          }
          FUN_00410f20(local_20);
          FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),local_24);
          cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
          if (cVar1 == '\0') {
            local_2c = CONCAT44(local_2c._4_4_ + -1,(int)local_2c + -1);
          }
        }
      }
    }
  }
  if (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) &&
     (*(char *)((longlong)param_1 + 0x366) == '\x02')) {
    cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_01c0a3f0();
      if (cVar1 != '\0') {
        local_2c = CONCAT44(local_2c._4_4_ + 1,(int)local_2c + 1);
      }
    }
  }
  FUN_01c04950(param_1,&local_2c);
  return;
}

