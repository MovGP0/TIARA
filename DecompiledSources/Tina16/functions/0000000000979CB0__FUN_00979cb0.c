/* Ghidra address: 00979cb0 */
/* Ghidra symbol: FUN_00979cb0 */


void FUN_00979cb0(longlong *param_1,longlong param_2)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  uint local_44;
  longlong local_40;
  undefined8 local_30;
  int local_24;
  longlong *local_20;
  
  local_50 = auStack_88;
  local_30 = 0;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_2 + 0x80;
  }
  FUN_00978130(param_1,3,lVar3);
  local_20 = (longlong *)FUN_008f7f70(&PTR_FUN_008f67c0,1);
  local_40 = *(longlong *)(param_2 + 0x90);
  local_44 = 0;
  if (local_40 != 0) {
    local_44 = *(uint *)(local_40 + -4) >> 1;
  }
  local_24 = 1;
  for (uVar2 = local_44; uVar2 != 0; uVar2 = uVar2 - 1) {
    sVar1 = *(short *)(*(longlong *)(param_2 + 0x90) + -2 + (longlong)local_24 * 2);
    if (sVar1 == 0xd) {
      (**(code **)(*local_20 + 0x28))(local_20,L"&#xD;");
    }
    else if (sVar1 == 0x26) {
      (**(code **)(*local_20 + 0x28))(local_20,L"&amp;");
    }
    else if (sVar1 == 0x3c) {
      (**(code **)(*local_20 + 0x28))(local_20,L"&lt;");
    }
    else if (sVar1 == 0x3e) {
      (**(code **)(*local_20 + 0x28))(local_20,L"&gt;");
    }
    else {
      (**(code **)(*local_20 + 0x18))(local_20,sVar1);
    }
    local_24 = local_24 + 1;
  }
  (**(code **)(*local_20 + 0x48))(local_20,&local_30);
  FUN_00410f20(local_20);
  local_58 = local_30;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_2 + 0x80;
  }
  local_68 = 0;
  local_60 = 1;
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar3,&local_58);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x80;
  }
  FUN_009780f0(param_1,3,param_2);
  FUN_00414520(&local_30);
  return;
}

