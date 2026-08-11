/* Ghidra address: 006e8890 */
/* Ghidra symbol: FUN_006e8890 */


void FUN_006e8890(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_30;
  undefined8 local_28;
  int local_20;
  int local_1c;
  
  local_50 = 0;
  local_28 = 0;
  local_30 = 0;
  local_68 = param_1;
  local_5c = param_2;
  local_58 = param_3;
  if (param_2 < 0) goto LAB_006e8a43;
  uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  local_20 = thunk_FUN_041b2403(uVar4,0xbb,(longlong)local_5c,0);
  if (local_20 < 0) {
    uVar4 = FUN_0065b870(*(undefined8 *)(local_68 + 0x38));
    local_20 = thunk_FUN_041b2403(uVar4,0xbb,(longlong)(local_5c + -1),0);
    if (local_20 < 0) goto LAB_006e8a43;
    uVar4 = FUN_0065b870(*(undefined8 *)(local_68 + 0x38));
    iVar1 = thunk_FUN_041b2403(uVar4,0xc1,(longlong)local_20,0);
    if (iVar1 == 0) goto LAB_006e8a43;
    local_20 = local_20 + iVar1;
    FUN_00414b50(&local_28,&LAB_006e8abc);
  }
  else {
    FUN_00414b50(&local_28,&DAT_006e8aa8);
  }
  local_1c = local_20;
  uVar4 = FUN_0065b870(*(undefined8 *)(local_68 + 0x38));
  FUN_004701a0(uVar4,0x437,0,&local_20);
  local_48 = local_58;
  local_40 = 0x11;
  FUN_00442f70(&local_30,local_28,&local_48,0);
  uVar4 = FUN_0065b870(*(undefined8 *)(local_68 + 0x38));
  FUN_00470120(uVar4,0xc2,0,local_30);
  iVar2 = (**(code **)(**(longlong **)(local_68 + 0x38) + 0x278))(*(longlong **)(local_68 + 0x38));
  iVar1 = 0;
  if (local_30 != 0) {
    iVar1 = *(int *)(local_30 + -4);
  }
  iVar3 = FUN_006e8830(auStack_88,local_30);
  if (iVar2 != (local_1c + iVar1) - iVar3) {
    FUN_0041ddd0(&local_50,PTR_PTR_02001c00);
    uVar4 = FUN_0044d490(&PTR_FUN_00472738,1,local_50);
    FUN_004134c0(uVar4);
  }
LAB_006e8a43:
  FUN_00414480(&local_50);
  FUN_00414560(&local_30,2);
  return;
}

