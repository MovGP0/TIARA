/* Ghidra address: 00710040 */
/* Ghidra symbol: FUN_00710040 */


void FUN_00710040(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 *local_b0;
  int local_a4;
  int iStack_a0;
  int local_9c;
  int local_98;
  undefined1 local_94 [19];
  char local_81;
  undefined8 local_80;
  longlong local_78;
  char local_69;
  undefined1 local_68 [72];
  longlong local_20;
  
  local_b0 = auStack_e8;
  local_69 = '\x01';
  iVar1 = *param_2;
  if (iVar1 == 0xf) {
    local_78 = *(longlong *)(param_2 + 2);
    puVar3 = auStack_e8;
    local_20 = local_78;
    if (local_78 == 0) {
      local_78 = thunk_FUN_041804fe(param_1[0x14],local_68);
      puVar3 = local_b0;
    }
    local_b0 = puVar3;
    (**(code **)(*param_1 + 0xa8))(param_1,local_78);
    if (local_20 == 0) {
      thunk_FUN_0416269d(param_1[0x14],local_68);
    }
    local_69 = '\0';
  }
  else if (iVar1 == 0x2b) {
    lVar2 = *(longlong *)(param_2 + 4);
    local_c8 = CONCAT71(local_c8._1_7_,(*(uint *)(lVar2 + 0x10) & 1) != 0);
    local_b0 = auStack_e8;
    FUN_0070f890(param_1,*(undefined8 *)(lVar2 + 0x20),lVar2 + 0x28,*(undefined4 *)(lVar2 + 8));
    local_69 = '\0';
  }
  else if (iVar1 == 0x134) {
    local_b0 = auStack_e8;
    if (((param_1[0xd] == 0) && (local_b0 = auStack_e8, *(longlong *)(param_2 + 4) != 0)) &&
       (local_b0 = auStack_e8, param_1[0xf] == 0)) {
      local_b0 = auStack_e8;
      FUN_00693790(param_1,*(undefined8 *)(param_2 + 4));
    }
  }
  else {
    local_b0 = auStack_e8;
    if (iVar1 == 0x200) {
      local_b0 = auStack_e8;
      if ((char)param_1[7] == '\0') {
        *(undefined1 *)(param_1 + 7) = 1;
        local_b0 = auStack_e8;
        FUN_00786aa0(param_1);
        (**(code **)(*param_1 + 0x70))(param_1);
      }
      local_a4 = (int)(short)param_2[4];
      iStack_a0 = (int)*(short *)((longlong)param_2 + 0x12);
      local_80 = CONCAT44(iStack_a0,local_a4);
      local_81 = *(char *)((longlong)param_1 + 100);
      local_9c = iStack_a0;
      local_98 = local_a4;
      FUN_00692750(param_1,local_94);
      cVar4 = FUN_00423210(local_94,&local_80);
      if (cVar4 == '\0') {
        *(undefined1 *)((longlong)param_1 + 100) = 0;
      }
      else {
        *(undefined1 *)((longlong)param_1 + 100) = 1;
      }
      if (local_81 != *(char *)((longlong)param_1 + 100)) {
        thunk_FUN_03a2fc9d(param_1[0x14],local_94,0);
      }
    }
  }
  if (local_69 != '\0') {
    local_c8 = *(undefined8 *)(param_2 + 4);
    uVar5 = thunk_FUN_03a65bf1(param_1[0x16],param_1[0x14],*param_2,*(undefined8 *)(param_2 + 2));
    *(undefined8 *)(param_2 + 6) = uVar5;
  }
  return;
}

