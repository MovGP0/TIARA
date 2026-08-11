/* Ghidra address: 01d08c80 */
/* Ghidra symbol: FUN_01d08c80 */


undefined8 * FUN_01d08c80(longlong *param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [256];
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 *local_30;
  wchar_t *local_28;
  undefined8 local_20;
  
  local_168 = 0;
  local_170 = 0;
  local_160 = 0;
  local_50 = 0;
  local_158 = 0;
  local_20 = 0;
  local_28 = (wchar_t *)0x0;
  local_30 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_01cfaa80(param_1,&local_28);
  if (local_28 == L"Dummy") {
    bVar6 = true;
  }
  else if (local_28 == (wchar_t *)0x0) {
    bVar6 = false;
  }
  else {
    iVar3 = FUN_0043e420(local_28,L"Dummy");
    bVar6 = iVar3 == 0;
  }
  if (!bVar6) {
    sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (sVar2 == 0x2c) {
      uVar4 = FUN_0172dba0(&PTR_FUN_01729b58,1,param_1,0,&PTR_DAT_01d0918c,1);
      FUN_0172dfc0(uVar4,local_150);
      FUN_004154b0(&local_158,local_150,0);
      FUN_0061d660(&local_50,local_158);
      FUN_00416880(&local_30,local_50);
      iVar3 = FUN_004170c0(L"GREEN",local_30,1);
      if (iVar3 < 1) {
        iVar3 = FUN_004170c0(L"YELLOW",local_30,1);
        if (0 < iVar3) {
          FUN_00414b50(&local_28,L"YLED");
        }
      }
      else {
        FUN_00414b50(&local_28,L"GLED");
      }
      FUN_00410f20(uVar4);
    }
    sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (sVar2 == 0x2d) {
      FUN_00414b50(&local_28,L"IC555IC");
    }
    sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((sVar2 == 0x15) || (sVar2 = (**(code **)(*param_1 + 0xf8))(param_1), sVar2 == 0x55)) {
      FUN_00414b50(&local_28,L"IC741IC");
    }
    plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(**(longlong **)PTR_DAT_02003a60 + 0x10))
              (*(longlong **)PTR_DAT_02003a60,&local_30,L"ComponentButtons",local_28,0);
    if (local_30 == (undefined8 *)0x0) {
      (**(code **)(**(longlong **)PTR_DAT_02003a60 + 0x10))
                (*(longlong **)PTR_DAT_02003a60,&local_30,L"ComponentMenus",local_28,0);
    }
    FUN_004b4b10(plVar5,local_30);
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_160,1);
    FUN_00416cd0(&local_28,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01d09298,local_160);
    FUN_00410f20(plVar5);
  }
  cVar1 = *(char *)((longlong)param_1 + 0xd1);
  if (cVar1 == '\0') {
    FUN_00414b50(&local_38,&PTR_LAB_01d092a8);
  }
  else if (cVar1 == '\x01') {
    FUN_00414b50(&local_38,&DAT_01d092e4);
  }
  else if (cVar1 == '\x02') {
    FUN_00414b50(&local_38,&PTR_DAT_01d092d0);
  }
  else if (cVar1 == '\x03') {
    FUN_00414b50(&local_38,&PTR_LAB_01d092bc);
  }
  uVar4 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
  (**(code **)(*param_1 + 0x68))(param_1,uVar4,local_48);
  FUN_017ff4f0(param_1,&local_20);
  FUN_00416ba0(param_2,local_20,&LAB_01d092f8);
  if (param_3 == '\0') {
    FUN_00416cd0(param_2,3,*param_2,local_28,&LAB_01d092f8);
  }
  FUN_0043f750(&local_168,*(undefined4 *)((longlong)param_1 + 0xc));
  FUN_0043f750(&local_170,(int)param_1[2]);
  FUN_00416cd0(param_2,5,*param_2,local_168,&LAB_01d092f8,local_170,local_38);
  FUN_00414560(&local_170,3);
  FUN_004144d0(&local_158);
  FUN_004144d0(&local_50);
  FUN_00414560(&local_38,4);
  return param_2;
}

