/* Ghidra address: 01baacc0 */
/* Ghidra symbol: FUN_01baacc0 */


void FUN_01baacc0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
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
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18[0]);
  lVar2 = FUN_004095c0(0x200);
  FUN_01baa850(param_1,&local_50,local_res18);
  FUN_00416910(lVar2,local_50,0xff);
  FUN_004169a0(&local_60,lVar2);
  FUN_00450070(&local_58,local_60,&DAT_01bab0e0,&DAT_01bab0f0,1);
  FUN_00416910(lVar2,local_58,0xff);
  if (param_4 == '\0') {
    FUN_004169a0(&local_70,lVar2);
    FUN_00416cd0(&local_68,3,*(undefined8 *)PTR_DAT_020049a0,L"\\MacroLib\\",local_70);
    FUN_00416910(lVar2,local_68,0xff);
  }
  else if (param_4 == '\x01') {
    FUN_004169a0(&local_80,lVar2);
    FUN_00416cd0(&local_78,3,*(undefined8 *)PTR_DAT_02001340,L"\\MacroLib\\",local_80);
    FUN_00416910(lVar2,local_78,0xff);
  }
  else if (param_4 == '\x02') {
    FUN_004169a0(&local_90,lVar2);
    FUN_00416cd0(&local_88,3,*(undefined8 *)PTR_DAT_02004438,L"\\MacroLib\\",local_90);
    FUN_00416910(lVar2,local_88,0xff);
  }
  iVar1 = FUN_004170c0(&DAT_01bab128,local_res18[0],1);
  if (iVar1 == 0) {
    FUN_01baa850(param_1,&local_98,local_res18);
    FUN_00416910(lVar2 + 0x100,local_98,0xff);
  }
  else {
    *(undefined8 *)(lVar2 + 0x100) = 0x6e7265746e495b0a;
    *(undefined2 *)(lVar2 + 0x108) = 0x6c61;
    *(undefined1 *)(lVar2 + 0x10a) = 0x5d;
  }
  iVar1 = FUN_00414f50(lVar2 + 0x100,&DAT_01bab130,(ulonglong)*(byte *)(lVar2 + 0x100) + 1);
  if (iVar1 != 0) {
    FUN_004169a0(&local_a0,lVar2 + 0x100);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))
                      (*(longlong **)(param_1 + 0x18),local_a0);
    if (iVar1 == -1) {
      plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_004b67b0(plVar3,1);
      FUN_004169a0(&local_a8,lVar2 + 0x100);
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))
                (*(longlong **)(param_1 + 0x18),local_a8,plVar3);
    }
    else {
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                         (*(longlong **)(param_1 + 0x18),iVar1);
    }
    (**(code **)(*plVar3 + 0x78))(plVar3,local_res10);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),local_res10,lVar2);
  FUN_00414560(&local_a8,0x10);
  FUN_00414560(&local_res10,2);
  return;
}

