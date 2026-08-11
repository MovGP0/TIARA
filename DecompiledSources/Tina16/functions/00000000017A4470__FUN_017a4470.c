/* Ghidra address: 017a4470 */
/* Ghidra symbol: FUN_017a4470 */


void FUN_017a4470(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4,
                 undefined1 *param_5,undefined1 *param_6,undefined1 *param_7,float *param_8)

{
  double dVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_50 [16];
  undefined1 *local_40;
  float local_34;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_1c;
  
  local_40 = auStack_88;
  local_30 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x550));
  local_28 = FUN_006dd580(local_30);
  if (*(int *)(local_28 + 0x18) == 0x65) {
    uVar2 = FUN_006dd8c0(local_30);
    *param_5 = uVar2;
    uVar2 = FUN_006dd8c0(local_28);
    *param_4 = uVar2;
  }
  else {
    *param_5 = 1;
    uVar2 = FUN_006dd8c0(local_30);
    *param_4 = uVar2;
  }
  local_30 = FUN_006dd3e0(local_30);
  uVar2 = FUN_006dd2b0(local_30);
  *param_6 = uVar2;
  local_30 = FUN_006dd3e0(local_30);
  uVar2 = FUN_006dd2b0(local_30);
  *param_7 = uVar2;
  uVar5 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *param_2 = uVar5;
  local_1c = 0;
  iVar3 = FUN_00c3c500(*param_4,*param_5,*param_6,*param_7);
  (**(code **)(*(longlong *)*param_2 + 0x88))
            ((longlong *)*param_2,*(int *)(*(longlong *)(param_1 + 0x780) + 0x94) * iVar3);
  (**(code **)(*(longlong *)*param_2 + 0x70))
            ((longlong *)*param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x780) + 0x90));
  FUN_0060bbf0(*param_2,6);
  lVar6 = FUN_00609e10(*param_2);
  FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),*(undefined4 *)(param_1 + 0x7b4));
  plVar7 = (longlong *)FUN_00609e10(*param_2);
  uVar4 = (**(code **)(*(longlong *)*param_2 + 0x60))((longlong *)*param_2);
  local_68 = (**(code **)(*(longlong *)*param_2 + 0x48))((longlong *)*param_2);
  FUN_00498370(local_50,0,0,uVar4);
  (**(code **)(*plVar7 + 0xa8))(plVar7,local_50);
  if (*(char *)(param_1 + 0x7b3) == '\0') {
    *param_3 = 0;
  }
  else {
    uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
    *param_3 = uVar5;
  }
  local_30 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x550));
  FUN_017a43a0(auStack_88,local_30);
  local_30 = FUN_006dd3e0(local_30);
  FUN_017a43a0(auStack_88,local_30);
  local_30 = FUN_006dd3e0(local_30);
  FUN_017a43a0(auStack_88,local_30);
  dVar1 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x7a0));
  *param_8 = (float)dVar1;
  if (*param_8 <= 1.0) {
    local_34 = 1.0;
  }
  else {
    local_34 = *param_8;
  }
  *param_8 = local_34;
  return;
}

