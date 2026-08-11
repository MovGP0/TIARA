/* Ghidra address: 0115fb90 */
/* Ghidra symbol: FUN_0115fb90 */


void FUN_0115fb90(longlong *param_1)

{
  longlong *plVar1;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [264];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x7c8) + 0x278))
            (*(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x7c8));
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x838) + 0x298))
            (*(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x838));
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7c8) + 0x4a0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"*********  Edge Frequency Response  *********");
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x838) + 0x4d8);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"*********  Edge Frequency Response  *********");
  if (*(int *)(*param_1 + 0xc0) == 2) {
    FUN_0040fb60(local_148,*(undefined8 *)(*param_1 + 0x28),10,2);
    FUN_004169a0(local_20,local_148);
    FUN_0040fb60(local_148,*(undefined8 *)(*param_1 + 0x30),10,2);
    FUN_004169a0(&local_28,local_148);
    FUN_0040fb60(local_148,*(undefined8 *)(*param_1 + 0x68),10,2);
    FUN_004169a0(&local_30,local_148);
    FUN_0040fb60(local_148,*(undefined8 *)(*param_1 + 0x70),10,2);
    FUN_004169a0(&local_38,local_148);
    FUN_00416cd0(&local_150,4,L"Mag(Wp1) = ",local_20[0],L"   Mag(Ws1) = ",local_28);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7c8) + 0x4a0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_150);
    FUN_00416cd0(&local_158,4,L"Mag(Wp1) = ",local_20[0],L"   Mag(Ws1) = ",local_28);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x838) + 0x4d8);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_158);
    FUN_00416cd0(&local_160,4,L"Ang(Wp1) = ",local_30,L"   Ang(Ws1) = ",local_38);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7c8) + 0x4a0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_160);
    FUN_00416cd0(&local_168,4,L"Ang(Wp1) = ",local_30,L"   Ang(Ws1) = ",local_38);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x838) + 0x4d8);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_168);
  }
  else if (*(int *)(*param_1 + 0xc0) == 4) {
    FUN_0040fb60(local_148,*(undefined8 *)(*param_1 + 0x28),10,2);
    FUN_004169a0(local_20,local_148);
    FUN_0040fb60(local_148,*(undefined8 *)(*param_1 + 0x30),10,2);
    FUN_004169a0(&local_28,local_148);
    FUN_0040fb60(local_148,*(undefined8 *)(*param_1 + 0x38),10,2);
    FUN_004169a0(&local_30,local_148);
    FUN_0040fb60(local_148,*(undefined8 *)(*param_1 + 0x40),10,2);
    FUN_004169a0(&local_38,local_148);
    FUN_00416cd0(&local_170,4,L"Mag(Wp1) = ",local_20[0],L"  Mag(Wp2) = ",local_28);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7c8) + 0x4a0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_170);
    FUN_00416cd0(&local_178,4,L"Mag(Wp1) = ",local_20[0],L"  Mag(Wp2) = ",local_28);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x838) + 0x4d8);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_178);
    FUN_00416cd0(&local_180,4,L"Mag(Ws1) = ",local_30,L"  Mag(Ws2) = ",local_38);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7c8) + 0x4a0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_180);
    FUN_00416cd0(&local_188,4,L"Mag(Ws1) = ",local_30,L"  Mag(Ws2) = ",local_38);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x838) + 0x4d8);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_188);
    FUN_0040fb60(local_148,*(undefined8 *)(*param_1 + 0x68),10,2);
    FUN_004169a0(local_20,local_148);
    FUN_0040fb60(local_148,*(undefined8 *)(*param_1 + 0x70),10,2);
    FUN_004169a0(&local_28,local_148);
    FUN_0040fb60(local_148,*(undefined8 *)(*param_1 + 0x78),10,2);
    FUN_004169a0(&local_30,local_148);
    FUN_0040fb60(local_148,*(undefined8 *)(*param_1 + 0x80),10,2);
    FUN_004169a0(&local_38,local_148);
    FUN_00416cd0(&local_190,4,L"Ang(Wp1) = ",local_20[0],L"  Ang(Wp2) = ",local_28);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7c8) + 0x4a0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_190);
    FUN_00416cd0(&local_198,4,L"Ang(Wp1) = ",local_20[0],L"  Ang(Wp2) = ",local_28);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x838) + 0x4d8);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_198);
    FUN_00416cd0(&local_1a0,4,L"Ang(Ws1) = ",local_30,L"  Ang(Ws2) = ",local_38);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7c8) + 0x4a0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_1a0);
    FUN_00416cd0(&local_1a8,4,L"Ang(Ws1) = ",local_30,L"  Ang(Ws2) = ",local_38);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x838) + 0x4d8);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_1a8);
  }
  FUN_00414560(&local_1a8,0xc);
  FUN_00414560(&local_40,5);
  return;
}

