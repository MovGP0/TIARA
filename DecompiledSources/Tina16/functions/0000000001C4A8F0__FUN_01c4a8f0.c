/* Ghidra address: 01c4a8f0 */
/* Ghidra symbol: FUN_01c4a8f0 */


char FUN_01c4a8f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  undefined8 local_res10 [3];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined1 *local_40;
  char local_29;
  
  local_40 = auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  local_29 = 1;
  uVar2 = FUN_00c7c6a0(local_res10[0],L"topology",1);
  uVar3 = *(int *)(*(longlong *)(param_1 + 0x6b8) + 0x4a8) + 1;
  local_29 = (uVar2 & uVar3) == uVar3;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0));
  if (cVar1 != '\0') {
    if ((local_29 == '\0') || (iVar4 = FUN_00c7c6a0(local_res10[0],L"auto",0), iVar4 != 1)) {
      local_29 = '\0';
    }
    else {
      local_29 = '\x01';
    }
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x260))(*(longlong **)(param_1 + 0x788));
  if (cVar1 != '\0') {
    if ((local_29 == '\0') || (iVar4 = FUN_00c7c6a0(local_res10[0],L"pmbus",0), iVar4 != 1)) {
      local_29 = '\0';
    }
    else {
      local_29 = '\x01';
    }
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_48);
  if (local_48 != 0) {
    if (local_29 != '\0') {
      dVar5 = (double)FUN_01c4a5e0(local_res10[0],L"vinmin");
      dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
      if (dVar5 <= dVar6) {
        local_29 = '\x01';
        goto LAB_01c4aa93;
      }
    }
    local_29 = '\0';
  }
LAB_01c4aa93:
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_50);
  if (local_50 != 0) {
    if (local_29 != '\0') {
      dVar5 = (double)FUN_01c4a5e0(local_res10[0],L"vinmax");
      dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
      if (dVar6 <= dVar5) {
        local_29 = '\x01';
        goto LAB_01c4aaf0;
      }
    }
    local_29 = '\0';
  }
LAB_01c4aaf0:
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_58);
  if (local_58 != 0) {
    if (local_29 == '\0') {
LAB_01c4ab44:
      local_29 = '\0';
    }
    else {
      dVar5 = (double)FUN_01c4a5e0(local_res10[0],L"voutmin");
      dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6f8));
      if (dVar6 < dVar5) goto LAB_01c4ab44;
      local_29 = '\x01';
    }
    if (local_29 != '\0') {
      dVar5 = (double)FUN_01c4a5e0(local_res10[0],L"voutmax");
      dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6f8));
      if (dVar6 <= dVar5) {
        local_29 = '\x01';
        goto LAB_01c4ab8c;
      }
    }
    local_29 = '\0';
  }
LAB_01c4ab8c:
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x710),&local_60);
  if (local_60 != 0) {
    if (local_29 != '\0') {
      dVar5 = (double)FUN_01c4a5e0(local_res10[0],L"iout");
      dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x710));
      if (dVar6 <= dVar5) {
        local_29 = '\x01';
        goto LAB_01c4abe9;
      }
    }
    local_29 = '\0';
  }
LAB_01c4abe9:
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x738),&local_68);
  if (local_68 != 0) {
    if (local_29 != '\0') {
      dVar5 = (double)FUN_01c4a5e0(local_res10[0],L"freqmin");
      dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x738));
      if (dVar5 <= dVar6) {
        local_29 = '\x01';
        goto LAB_01c4ac46;
      }
    }
    local_29 = '\0';
  }
LAB_01c4ac46:
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x750),&local_70);
  if (local_70 != 0) {
    if (local_29 != '\0') {
      dVar5 = (double)FUN_01c4a5e0(local_res10[0],L"freqmax");
      dVar6 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x750));
      if (dVar6 <= dVar5) {
        local_29 = '\x01';
        goto code_r0x01c4ace4;
      }
    }
    local_29 = '\0';
  }
code_r0x01c4ace4:
  FUN_00414480(&local_78);
  FUN_00414560(&local_70,6);
  FUN_0041b800(local_res10);
  return local_29;
}

