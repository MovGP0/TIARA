/* Ghidra address: 01cc6b70 */
/* Ghidra symbol: FUN_01cc6b70 */


void FUN_01cc6b70(longlong param_1,double param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_c8 [40];
  undefined1 *local_a0;
  undefined8 local_98;
  longlong *local_90;
  double *local_88;
  longlong local_78;
  int local_6c;
  double local_68;
  longlong *local_60;
  int local_50;
  int local_4c;
  longlong local_48;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  longlong local_28;
  longlong *local_20;
  
  local_a0 = auStack_c8;
  local_60 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_28 = *(longlong *)(param_1 + 8);
  local_78 = FUN_01d347d0(local_28,0);
  local_90 = *(longlong **)(local_28 + 0x438);
  local_98 = *(undefined8 *)(local_78 + 0x160);
  (**(code **)(*local_90 + 0x50))(local_90,local_98,0);
  local_4c = *(int *)(local_78 + 0x154);
  local_50 = *(int *)(local_78 + 0x150);
  local_30 = *(int *)(local_78 + 0x2c);
  local_2c = 0;
  if (*(char *)(local_28 + 0x434) == '\x03') {
    local_38 = local_4c * 8;
    local_3c = ((local_50 - local_4c) + -1) * 8;
    local_48 = (longlong)(local_30 * (local_50 + 1) * 8);
  }
  else if (*(char *)(local_28 + 0x434) == '\x01') {
    local_38 = (local_4c * 2 + 1) * 8;
    local_3c = ((local_50 - local_4c) + -1) * 0x10;
    local_48 = (longlong)(local_30 * (local_50 * 2 + 1) * 8);
  }
  plVar1 = *(longlong **)(local_28 + 0x438);
  cVar2 = FUN_004113d0(plVar1,&PTR_FUN_0047c498);
  local_20 = plVar1;
  if (cVar2 != '\0') {
    (**(code **)(*local_60 + 0x10))(local_60,local_48);
    FUN_004b6dc0(local_60,0);
    FUN_004b8ba0(local_60,*(undefined8 *)(local_28 + 0x438),local_48);
    FUN_004b6dc0(local_60,0);
    local_20 = local_60;
  }
  iVar4 = *(int *)(local_28 + 0x10);
  local_6c = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar3 = FUN_01d347d0(local_28,local_6c);
      local_88 = (double *)(lVar3 + 0x1a);
      *local_88 = *local_88 + param_2;
      *(double *)(lVar3 + 0x22) = *(double *)(lVar3 + 0x22) + param_2;
      local_6c = local_6c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_2c != local_30) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_68,8);
      (**(code **)(*local_20 + 0x48))(local_20,0xfffffff8,1);
      local_68 = local_68 + param_2;
      (**(code **)(*local_20 + 0x20))(local_20,&local_68,8);
      (**(code **)(*local_20 + 0x48))(local_20,local_38 + local_3c + 8,1);
      local_2c = local_2c + 1;
    } while (local_2c != local_30);
  }
  FUN_00410f20(local_60);
  return;
}

