/* Ghidra address: 0180aa30 */
/* Ghidra symbol: FUN_0180aa30 */


void FUN_0180aa30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_40 = auStack_b8;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_90 = 0;
  local_88 = 0;
  local_50 = 0;
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_20 = FUN_01804390(&DAT_01802268,1);
  FUN_01804870(local_20,param_2,0);
  local_30 = *(longlong *)(local_20 + 0x28);
  iVar1 = FUN_00416db0(*(undefined8 *)(local_30 + 0x20),L"Resources");
  if (iVar1 == 0) {
    FUN_01803cc0(local_30,&local_48,L"CodePage");
    uVar2 = FUN_0043fc00(local_48);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    iVar1 = FUN_01803a10();
    local_24 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar4 = FUN_018039f0(local_30,local_24);
        iVar3 = FUN_00416db0(*(undefined8 *)(lVar4 + 0x20),L"StrRes");
        if (iVar3 == 0) {
          if (*(char *)(local_20 + 0x38) == '\0') {
            uVar5 = FUN_018039f0(local_30,local_24);
            FUN_01803cc0(uVar5,&local_50,L"Name");
            uVar5 = FUN_018039f0(local_30,local_24);
            FUN_01803cc0(uVar5,&local_60,L"Text");
            FUN_018033c0(&local_58,local_60);
            FUN_004168e0(&local_68,local_58);
            FUN_01809700(param_1,local_50,local_68);
          }
          else {
            uVar5 = FUN_018039f0(local_30,local_24);
            FUN_01803cc0(uVar5,&local_70,L"Name");
            uVar5 = FUN_018039f0(local_30,local_24);
            FUN_01803cc0(uVar5,&local_88,L"Text");
            FUN_018033c0(&local_80,local_88);
            FUN_00415dd0(&local_90,local_80,0);
            FUN_0041d9e0(&local_78,local_90);
            FUN_01809700(param_1,local_70,local_78);
          }
        }
        local_24 = local_24 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00410f20(local_20);
  FUN_0180ae20(param_1);
  FUN_004144d0(&local_90);
  FUN_00414560(&local_88,2);
  FUN_00414520(&local_78);
  FUN_00414480(&local_70);
  FUN_00414520(&local_68);
  FUN_00414560(&local_60,4);
  return;
}

