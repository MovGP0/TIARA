/* Ghidra address: 01418330 */
/* Ghidra symbol: FUN_01418330 */


void FUN_01418330(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  char local_21;
  undefined8 local_20;
  
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  FUN_01417f80(param_1,0);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0xa8))(*(longlong **)(param_1 + 0x6e8));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x6e8),&local_30);
    FUN_00414ad0(param_1 + 0xf90,local_30);
    *(undefined1 *)(param_1 + 0xfa8) = 1;
    FUN_01417bc0();
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x90))(*(longlong **)(param_1 + 0x740));
    (**(code **)(**(longlong **)(param_1 + 0x748) + 0x90))(*(longlong **)(param_1 + 0x748));
    (**(code **)(**(longlong **)(param_1 + 0x750) + 0x90))(*(longlong **)(param_1 + 0x750));
    if (PTR_DAT_020030c0[0xc] == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x740) + 0xd8))
                (*(longlong **)(param_1 + 0x740),*(undefined8 *)(param_1 + 0xf90));
    }
    else {
      plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(*plVar3 + 0xd8))(plVar3,*(undefined8 *)(param_1 + 0xf90));
      FUN_00416cd0(&local_20,3,*(undefined8 *)PTR_DAT_020052a8,&DAT_01418718,L"flash_rom.asm");
      (**(code **)(*plVar3 + 0x100))(plVar3,local_20);
      FUN_00442620(&DAT_0210a50c,local_20);
      FUN_00415dd0(&local_38,*(undefined8 *)(param_1 + 4000),0);
      FUN_004425e0(&DAT_0210b50c,local_38);
      uVar2 = FUN_015ff5b0();
      _compile_asm(uVar2,&DAT_0210b50c,&DAT_0210a50c,&local_21,&DAT_0210bd0c,&local_28);
      if (local_21 == '\0') {
        FUN_01d43440(&local_58,local_28);
        FUN_00416800(&local_60,&DAT_0210bd0c,0x800);
        FUN_00416cd0(&local_50,4,L"Line: ",local_58,&LAB_014187bc,local_60);
        FUN_016fd940(local_50);
        (**(code **)(**(longlong **)(param_1 + 0x740) + 0xd8))
                  (*(longlong **)(param_1 + 0x740),*(undefined8 *)(param_1 + 0xf90));
      }
      else {
        *(undefined4 *)(param_1 + 0xf8c) = 1;
        FUN_00416cd0(&local_40,3,*(undefined8 *)PTR_DAT_020052a8,&DAT_01418718,L"flash_rom.hex");
        (**(code **)(**(longlong **)(param_1 + 0x748) + 0xd8))
                  (*(longlong **)(param_1 + 0x748),local_40);
        FUN_00416cd0(&local_48,3,*(undefined8 *)PTR_DAT_020052a8,&DAT_01418718,L"flash_rom.lst");
        (**(code **)(**(longlong **)(param_1 + 0x750) + 0xd8))
                  (*(longlong **)(param_1 + 0x750),local_48);
        FUN_00414ad0(param_1 + 0xf90,L"flash_rom.hex");
        FUN_00414ad0(param_1 + 0xf98,L"flash_rom.lst");
      }
      FUN_00410f20(plVar3);
    }
    FUN_01419960(param_1);
    *(undefined4 *)(param_1 + 0xf88) = *(undefined4 *)(param_1 + 0xf8c);
  }
  FUN_00414560(&local_60,5);
  FUN_004144d0(&local_38);
  FUN_00414480(&local_30);
  FUN_00414480(&local_20);
  return;
}

