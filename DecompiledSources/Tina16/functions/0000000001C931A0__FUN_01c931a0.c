/* Ghidra address: 01c931a0 */
/* Ghidra symbol: FUN_01c931a0 */


void FUN_01c931a0(longlong param_1)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_60;
  char local_51;
  longlong local_50;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  longlong *local_20;
  
  local_70 = auStack_a8;
  local_78 = 0;
  local_60 = 0;
  cVar1 = FUN_01c8cee0(param_1);
  if (cVar1 == '\0') {
    local_20 = (longlong *)FUN_01993ec0(*(undefined8 *)(param_1 + 0x27a8));
    if (local_20 != (longlong *)0x0) {
      cVar1 = FUN_0198a580(local_20);
      plVar7 = local_20;
      if (cVar1 == '\x04') {
        cVar1 = FUN_01d04d40(local_20);
        if (cVar1 == '\0') {
          local_50 = plVar7[0xa2];
          if (local_50 == 0) {
            uVar2 = (**(code **)(*local_20 + 0xf8))(local_20);
            FUN_0043f750(&local_78,uVar2);
            sVar3 = FUN_00c40790(*(undefined8 *)PTR_DAT_02004440,local_78);
            local_24 = (int)sVar3;
            if (local_24 == -1) {
              local_50 = 0;
              FUN_00414480(&local_60);
            }
            else {
              local_50 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02004440,local_24);
              FUN_00414b50(&local_60,*(undefined8 *)(local_50 + 0x20));
            }
            local_51 = '\x01';
          }
          else {
            local_51 = '\0';
            FUN_00414480(&local_60);
          }
          if (local_50 != 0) {
            uVar6 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
            (**(code **)(*plVar7 + 0x68))(plVar7,uVar6,local_48);
            cVar1 = FUN_01c92b70(param_1,local_50);
            if (cVar1 != '\0') {
              uVar4 = FUN_00c41060(local_50,&local_28);
              FUN_01d01990(plVar7,uVar4);
              FUN_01d01aa0(plVar7,local_28);
              uVar6 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
              (**(code **)(*plVar7 + 0x68))(plVar7,uVar6,&local_38);
              FUN_00b957c0(&local_38,local_48);
              plVar7 = (longlong *)FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
              local_88 = local_2c;
              (**(code **)(*plVar7 + 0x30))(plVar7,local_38,local_34,local_30);
              if (local_51 != '\0') {
                FUN_00c40270(*(undefined8 *)PTR_DAT_02004440,local_60);
              }
            }
          }
        }
        else {
          lVar5 = FUN_01768e50(plVar7[0x35],0);
          if (lVar5 != 0) {
            local_50 = FUN_01768e50(plVar7[0x35],0);
            uVar6 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
            (**(code **)(*plVar7 + 0x68))(plVar7,uVar6,local_48);
            cVar1 = FUN_01c92b70(param_1,local_50);
            if (cVar1 != '\0') {
              FUN_01768da0(plVar7[0x35],local_50);
              uVar6 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
              (**(code **)(*plVar7 + 0x68))(plVar7,uVar6,&local_38);
              FUN_00b957c0(&local_38,local_48);
              plVar7 = (longlong *)FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
              local_88 = local_2c;
              (**(code **)(*plVar7 + 0x30))(plVar7,local_38,local_34,local_30);
            }
          }
        }
      }
    }
  }
  FUN_00414480(&local_78);
  FUN_00414480(&local_60);
  return;
}

