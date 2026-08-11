/* Ghidra address: 018a8300 */
/* Ghidra symbol: FUN_018a8300 */


void FUN_018a8300(longlong *param_1,longlong param_2,char param_3,undefined1 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong local_30;
  
  local_60 = auStack_118;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_0197c460(param_1,param_2,param_3,param_4);
  lVar2 = (**(code **)(*param_1 + 0x268))(param_1);
  if (lVar2 != 0) {
    local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    FUN_00468700(&local_c0,param_2);
    local_a8 = local_c0;
    uStack_a0 = uStack_b8;
    uStack_98 = uStack_b0;
    FUN_00468700(&local_d8,local_30);
    local_90 = local_d8;
    uStack_88 = uStack_d0;
    uStack_80 = uStack_c8;
    FUN_00468820(&local_f0,1);
    local_78 = local_f0;
    uStack_70 = uStack_e8;
    uStack_68 = uStack_e0;
    FUN_0046c840(&local_48,&local_a8,2);
    uVar3 = (**(code **)(*param_1 + 0x268))(param_1);
    FUN_01973040(uVar3,*(undefined8 *)(param_2 + 0x180),&local_48,1);
    iVar5 = *(int *)(local_30 + 0x10);
    local_4c = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar3 = FUN_004aeac0(local_30,local_4c);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01921f40);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
          uVar3 = FUN_004aeac0(local_30,local_4c);
          (**(code **)(*plVar4 + 0x110))(plVar4,uVar3);
        }
        local_4c = local_4c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00410f20(local_30);
  }
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  FUN_00417840(&local_f0,&DAT_004013d8,3);
  FUN_00460ba0(&local_48);
  return;
}

