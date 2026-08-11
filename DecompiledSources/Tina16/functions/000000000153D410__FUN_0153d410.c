/* Ghidra address: 0153d410 */
/* Ghidra symbol: FUN_0153d410 */


longlong FUN_0153d410(undefined8 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  int *local_res10;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_98;
  undefined1 *local_90;
  longlong local_78;
  undefined4 local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  
  local_90 = auStack_c8;
  local_98 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_20 = 0;
  FUN_010d56f0(&local_40);
  local_a8 = L"img2array.py";
  FUN_00416cd0(&local_48,3,local_40,&DAT_0153d7c4);
  cVar1 = FUN_00440a20(local_48,1);
  if (cVar1 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"img2array.py: file not found");
    FUN_004134c0(uVar3);
  }
  local_a8 = (wchar_t *)0x0;
  local_20 = FUN_0153c940(&DAT_0153c5c8,1,0,local_48);
  FUN_0153cb20(local_20);
  FUN_0153cbf0(local_20,0x60,0x60,local_res8);
  cVar1 = FUN_0153cb70(local_20,&local_50);
  if (cVar1 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"img_array.dat: not found");
    FUN_004134c0(uVar3);
  }
  (**(code **)(*local_28 + 0xd8))(local_28,local_50);
  iVar2 = (**(code **)(*local_28 + 0x28))(local_28);
  if (iVar2 != 2) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Dat file: syntax error");
    FUN_004134c0(uVar3);
  }
  (**(code **)(*local_28 + 0x18))(local_28,&local_58,1);
  FUN_004b4b10(local_30,local_58);
  iVar2 = (**(code **)(*local_30 + 0x28))(local_30);
  *local_res10 = iVar2 * 4;
  local_78 = FUN_00409570((longlong)*local_res10);
  iVar2 = (**(code **)(*local_30 + 0x28))();
  local_6c = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_30 + 0x18))(local_30,&local_98,local_6c);
      local_70 = FUN_0043fc00(local_98);
      *(undefined4 *)(local_78 + (longlong)local_6c * 4) = local_70;
      local_6c = local_6c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_38 = local_78;
  if (local_20 != 0) {
    FUN_00410f20(local_20);
  }
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00414480(&local_98);
  FUN_00414560(&local_68,6);
  FUN_00414480(&local_res8);
  return local_38;
}

