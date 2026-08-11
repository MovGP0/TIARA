/* Ghidra address: 011804b0 */
/* Ghidra symbol: FUN_011804b0 */


void FUN_011804b0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined1 local_178 [256];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x278))
            (*(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x7b8));
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x298))
            (*(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x840));
  cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c8) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c8));
  if (cVar2 == '\0') {
    FUN_00414b50(&local_50,L"ACTIVE");
  }
  else {
    FUN_00414b50(&local_50,L"PASSIVE");
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_50);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_50);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L" Common Component Values  ");
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
  (**(code **)(*plVar1 + 0x78))(plVar1,L" Common Component Values  ");
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L" =====================================");
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
  (**(code **)(*plVar1 + 0x78))(plVar1,L" =====================================");
  FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
               *(undefined8 *)(*param_1 + 0x978));
  FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_30);
  FUN_011803f0(local_30,8);
  FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
               *(undefined8 *)(*param_1 + 0x12e0));
  FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_38);
  FUN_011803f0(&local_38,8);
  FUN_00416cd0(&local_60,4,L" C   =",local_30[0],L"      R_A =",local_38);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_60);
  FUN_00416cd0(&local_68,4,L" C   =",local_30[0],L"      R_A =",local_38);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_68);
  FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),*(undefined8 *)*param_1);
  FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_30);
  FUN_011803f0(local_30,8);
  FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),*(undefined8 *)(*param_1 + 8))
  ;
  FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),&local_38);
  FUN_011803f0(&local_38,8);
  if ((*(double *)*param_1 != 0.0) || (*(double *)(*param_1 + 8) != 0.0)) {
    if ((*(double *)*param_1 <= 0.0 && *(double *)*param_1 != 0.0) ||
       (*(double *)(*param_1 + 8) <= 0.0 && *(double *)(*param_1 + 8) != 0.0)) {
      FUN_0072d730(L"Circuit synthesis error. Try another specification.",0xffffffff,0xffffffff);
    }
    else {
      FUN_00416cd0(&local_70,4,L" R_x =",local_30[0],L"      R_y =",local_38);
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_70);
    }
  }
  FUN_00416cd0(&local_78,4,L" R_x =",local_30[0],L"      R_y =",local_38);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_78);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
  (**(code **)(*plVar1 + 0x78))(plVar1,&DAT_01181078);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
  (**(code **)(*plVar1 + 0x78))(plVar1,&DAT_01181078);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L" Stage  R Value     R_B Value    Special");
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
  (**(code **)(*plVar1 + 0x78))(plVar1,L" Stage  R Value     R_B Value    Special");
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L" =====  =========   ==========   =================");
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
  (**(code **)(*plVar1 + 0x78))(plVar1,L" =====  =========   ==========   =================");
  iVar5 = *(int *)(*param_1 + 0x3880);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      FUN_00414480(&local_38);
      FUN_0040e780(local_178,iVar3,2);
      FUN_004169a0(local_30,local_178);
      FUN_00416cd0(&local_38,3,local_38,local_30[0],L".    ");
      lVar4 = (longlong)iVar3;
      FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                   *(undefined8 *)(*param_1 + 0x10 + lVar4 * 8));
      FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_30);
      FUN_011803f0(local_30,8);
      FUN_00416cd0(&local_38,3,local_38,local_30[0],&DAT_01181174);
      FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                   *(undefined8 *)(*param_1 + 0x1c48 + lVar4 * 8));
      FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_30);
      FUN_011803f0(local_30,8);
      FUN_00416cd0(&local_38,3,local_38,local_30[0],&DAT_01181078);
      if (*(double *)(*param_1 + 0x25b0 + lVar4 * 8) != 0.0) {
        FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                     *(undefined8 *)(*param_1 + 0x25b0 + lVar4 * 8));
        FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_30);
        FUN_011803f0(local_30,8);
        FUN_00416cd0(&local_38,4,local_38,L"     Ro = ",local_30[0],&DAT_011811ac);
      }
      if (*(double *)(*param_1 + 0x2f18 + lVar4 * 8) != 0.0) {
        FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),
                     *(undefined8 *)(*param_1 + 0x2f18 + lVar4 * 8));
        FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x850),local_30);
        FUN_011803f0(local_30,8);
        FUN_00416cd0(&local_38,4,local_38,L"     Co = ",local_30[0],&DAT_011811ac);
      }
      if (*(double *)(*param_1 + 0x1c48 + lVar4 * 8) == 0.0) {
        FUN_00416ad0(&local_38,L"     1st Order section");
      }
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x7b8) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_38);
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020044a8 + 0x840) + 0x4d8);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_38);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_78,10);
  FUN_00414480(local_res10);
  return;
}

