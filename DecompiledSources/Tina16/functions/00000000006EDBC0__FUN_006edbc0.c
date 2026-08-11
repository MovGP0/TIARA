/* Ghidra address: 006edbc0 */
/* Ghidra symbol: FUN_006edbc0 */


void FUN_006edbc0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_c8 [40];
  undefined1 *local_a0;
  int local_8c;
  undefined8 local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_1c;
  
  local_a0 = auStack_c8;
  local_60 = 0;
  uVar2 = FUN_006edb60(param_1);
  cVar1 = FUN_0065be20(uVar2);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x40))(param_1);
    FUN_00419260(&local_60,&DAT_004066f0,1,(longlong)*(int *)(param_1[2] + 0x10));
    local_1c = *(int *)(param_1[2] + 0x10) + -1;
    if (-1 < local_1c) {
      do {
        lVar3 = FUN_006edb10(param_1,local_1c);
        *(undefined4 *)(local_60 + (longlong)local_1c * 4) = *(undefined4 *)(lVar3 + 0x3c);
        uVar2 = FUN_006edb60(param_1);
        local_70 = FUN_0065b870(uVar2);
        thunk_FUN_041b2403(local_70,0x101c,(longlong)local_1c,0);
        local_1c = local_1c + -1;
      } while (local_1c != -1);
    }
    iVar4 = *(int *)(param_1[2] + 0x10);
    local_1c = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar3 = FUN_006edb10(param_1,local_1c);
        *(int *)(lVar3 + 0x3c) = local_1c;
        local_58 = 3;
        local_54 = 0;
        lVar3 = FUN_006edb10(param_1,local_1c);
        local_50 = *(undefined4 *)(lVar3 + 0x38);
        uVar2 = FUN_006edb60(param_1);
        local_78 = FUN_0065b870(uVar2);
        local_80 = &local_58;
        thunk_FUN_041b2403(local_78,0x1061,(longlong)local_1c,local_80);
        local_1c = local_1c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar2 = FUN_006edb60(param_1);
    local_88 = FUN_0065b870(uVar2);
    local_8c = *(int *)(param_1[2] + 0x10);
    thunk_FUN_041b2403(local_88,0x103a,(longlong)local_8c,local_60);
    uVar2 = FUN_006edb60(param_1);
    FUN_006f74d0(uVar2);
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  FUN_00419430(&local_60,&DAT_004066f0);
  return;
}

