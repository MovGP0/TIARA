/* Ghidra address: 01ca3c00 */
/* Ghidra symbol: FUN_01ca3c00 */


void FUN_01ca3c00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_88;
  local_50 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_58 = param_2;
  FUN_007e2d20(param_2,1);
  local_30 = FUN_00b89270();
  FUN_00414480(local_20);
  local_28 = *(undefined8 *)(local_58 + 0x78);
  FUN_005b84f0(local_20,local_28,&DAT_01ca3e28,0);
  FUN_00b89cd0(local_30,&local_48,local_20[0]);
  FUN_00414ad0(param_1 + 0x2508,local_48);
  FUN_00414480(local_20);
  uVar1 = FUN_00b89270();
  FUN_00b8e4a0(uVar1,*(undefined4 *)(param_2 + 0x18));
  FUN_01d3a640(*(undefined8 *)PTR_DAT_02001b18);
  FUN_01d3a9b0(*(undefined8 *)PTR_DAT_020036c8);
  FUN_00c85090(*(undefined8 *)(*(longlong *)PTR_DAT_02002c40 + 0x30));
  FUN_01c691d0(param_1,*(undefined2 *)(param_1 + 0x1810));
  uVar1 = FUN_00b89270();
  FUN_00b898e0(uVar1,param_1);
  FUN_01c914a0(param_1,*(undefined8 *)(param_1 + 0xe10));
  (**(code **)(**(longlong **)(param_1 + 0x24b8) + 0x18))
            (*(longlong **)(param_1 + 0x24b8),L"Schematic Editor",L"LanguageCode",
             *(undefined8 *)(param_1 + 0x2508));
  local_68 = &LAB_01ca3eb8;
  FUN_00416cd0(&local_50,3,L"SetLanguage(",*(undefined8 *)(param_1 + 0x2508));
  FUN_01b1e860(local_50,1);
  FUN_00414560(&local_50,2);
  FUN_00414480(local_20);
  return;
}

