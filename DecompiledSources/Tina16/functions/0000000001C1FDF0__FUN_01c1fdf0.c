/* Ghidra address: 01c1fdf0 */
/* Ghidra symbol: FUN_01c1fdf0 */


void FUN_01c1fdf0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_48;
  longlong local_40;
  undefined1 local_38 [24];
  
  local_50 = auStack_e8;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  lVar4 = param_1[0xdf];
  FUN_0064dd90(lVar4,&local_58);
  plVar1 = *(longlong **)(lVar4 + 0x4f0);
  iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_58);
  if (iVar2 == -1) {
    lVar4 = param_1[0xdf];
    FUN_0064dd90(lVar4,&local_60);
    plVar1 = *(longlong **)(lVar4 + 0x4f0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_60);
    FUN_0043dc90(local_38);
    FUN_0064dd90(param_1[0xdf],&local_70);
    local_c8 = CONCAT31(local_c8._1_3_,1);
    FUN_00450070(&local_68,local_70,&DAT_01c20194,&DAT_01c201a4);
    (**(code **)(*DAT_021114c8 + 0x18))(DAT_021114c8,L"History",local_68,0);
    (**(code **)(*DAT_021114c8 + 200))(DAT_021114c8);
  }
  FUN_0064dd90(param_1[0xdf],&local_78);
  FUN_004168e0(&local_80,local_78);
  FUN_01bcce90(param_1[0xd9],local_80);
  local_40 = param_1[0xd9];
  FUN_00ddede0(local_40,&local_88,0xcb);
  if (local_88 != 0) {
    FUN_00ddede0(local_40,&local_90,200);
    FUN_0041b890(&local_48,local_90,&LAB_01c201a9);
    lVar4 = param_1[0xd9];
    uVar3 = FUN_0065b870(local_40);
    (**(code **)(*param_1 + 0xe0))(param_1,local_a0);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar4 + 0x570;
    }
    local_c8 = 0;
    local_b8 = local_a0;
    local_c0 = uVar3;
    (**(code **)(*local_48 + 0x58))(local_48,0xfffffffc,0,lVar4);
  }
  FUN_00417840(&local_90,&DAT_00403448,2);
  FUN_00414520(&local_80);
  FUN_00414560(&local_78,2);
  FUN_00414480(&local_68);
  FUN_00414560(&local_60,2);
  FUN_0041b800(&local_48);
  return;
}

