/* Ghidra address: 01606940 */
/* Ghidra symbol: FUN_01606940 */


void FUN_01606940(longlong param_1,longlong param_2,undefined8 param_3,wchar_t *param_4,
                 undefined8 param_5,undefined1 param_6,undefined8 param_7,longlong param_8,
                 char param_9,byte param_10)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong local_res10;
  undefined8 local_res18;
  wchar_t *local_res20;
  undefined1 auStack_a28 [32];
  wchar_t *local_a08;
  wchar_t *local_a00;
  wchar_t *local_9f8;
  undefined8 *local_9f0;
  undefined8 local_9e8;
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined8 local_978;
  undefined8 local_970;
  undefined8 local_968;
  undefined1 *local_960;
  longlong *local_958;
  byte local_949;
  undefined8 local_948;
  undefined8 local_940;
  undefined8 local_938;
  undefined8 local_930;
  undefined8 local_928;
  undefined8 local_920;
  longlong local_918;
  undefined4 local_90c;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  wchar_t *local_8f0;
  wchar_t *local_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8 [2];
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined4 local_8a4;
  int local_8a0;
  int local_89c;
  uint local_898;
  uint local_894;
  undefined4 local_890;
  uint local_88c [3];
  int local_880;
  int local_87c;
  longlong local_878;
  undefined8 local_870;
  undefined1 local_862 [1026];
  longlong local_460;
  longlong *local_458;
  longlong *local_450;
  longlong *local_448;
  longlong local_440;
  longlong *local_438;
  longlong *local_430;
  ulonglong local_428;
  undefined1 local_41a [1026];
  
  local_960 = auStack_a28;
  local_9e8 = 0;
  local_9e0 = 0;
  local_9d8 = 0;
  local_9c0 = 0;
  local_9c8 = 0;
  local_9d0 = 0;
  local_9b8 = 0;
  local_9b0 = 0;
  local_9a0 = 0;
  local_9a8 = 0;
  local_998 = 0;
  local_990 = 0;
  local_988 = 0;
  local_978 = 0;
  local_980 = 0;
  local_970 = 0;
  local_968 = 0;
  local_870 = 0;
  local_8b0 = 0;
  local_8b8 = 0;
  local_8c8[0] = 0;
  local_8d0 = 0;
  local_8d8 = 0;
  local_8e0 = 0;
  local_8e8 = (wchar_t *)0x0;
  local_8f0 = (wchar_t *)0x0;
  local_8f8 = 0;
  local_900 = 0;
  local_908 = 0;
  local_940 = 0;
  local_428 = 0;
  local_948 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414610(param_7);
  FUN_00414610(param_8);
  local_440 = 0;
  local_448 = (longlong *)0x0;
  FUN_00414480(&local_8d0);
  local_460 = 0;
  local_438 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_430 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_450 = (longlong *)0x0;
  local_458 = (longlong *)0x0;
  if (param_1 == 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"No component selected!");
    FUN_004134c0(uVar4);
  }
  local_878 = FUN_004113f0(*(undefined8 *)(param_1 + 0x1a8),&PTR_FUN_01763148);
  local_res10 = param_2;
  if (param_2 == 0) {
    local_res10 = *(longlong *)(local_878 + 0x110);
    *(undefined4 *)(local_878 + 0x100) = 3;
  }
  (**(code **)(**(longlong **)(local_res10 + 0x30) + 8))(*(longlong **)(local_res10 + 0x30),0);
  local_a08 = local_res20;
  FUN_00416cd0(local_8c8,3,local_res18,&DAT_01607ab8);
  FUN_00414b50(&local_8b8,local_8c8[0]);
  if (param_8 == 0) {
    FUN_00414b50(&param_8,local_res20);
  }
  FUN_00416ba0(&local_940,local_8b8,&DAT_01607ab8);
  local_88c[0] = 0;
  local_89c = 0;
  iVar2 = FUN_004170c0(L"ESP32C3",*(undefined8 *)(local_878 + 0x40),1);
  if ((iVar2 < 1) &&
     (iVar2 = FUN_004170c0(L"ESP32S3",*(undefined8 *)(local_878 + 0x40),1), iVar2 < 1)) {
    local_949 = 0;
  }
  else {
    local_949 = 1;
  }
  param_10 = param_10 | local_949;
  do {
    cVar1 = FUN_0160df00(local_940,param_5,&local_8e8,local_438);
    if (cVar1 == '\0') {
      uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Debug subdirectory with elf file not found");
      FUN_004134c0(uVar4);
    }
    local_a08 = L"\\";
    FUN_00416cd0(&local_968,3,local_940,local_8e8);
    local_448 = (longlong *)FUN_01604950(local_968,L"*.elf");
    iVar2 = (**(code **)(*local_448 + 0x28))(local_448);
    if (iVar2 == 0) {
      (**(code **)(*local_438 + 0x78))(local_438,local_8e8);
    }
    local_89c = local_89c + 1;
    iVar2 = (**(code **)(*local_448 + 0x28))(local_448);
  } while ((iVar2 < 1) && (local_89c < 0xb));
  iVar2 = (**(code **)(*local_448 + 0x28))(local_448);
  if (iVar2 == 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Elf file not found");
    FUN_004134c0(uVar4);
  }
  iVar2 = FUN_00416db0(param_5,local_8e8);
  if (iVar2 != 0) {
    local_88c[0] = local_88c[0] | 1;
  }
  local_880 = -1;
  iVar2 = (**(code **)(*local_448 + 0x28))();
  local_87c = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_448 + 0x18))(local_448,&local_970,local_87c);
      FUN_00441920(&local_8b0,local_970);
      FUN_0043e1a0(&local_978,local_8b0);
      FUN_0043e1a0(&local_980,param_8);
      iVar3 = FUN_00416db0(local_978,local_980);
      if (iVar3 == 0) {
        local_880 = local_87c;
      }
      local_87c = local_87c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_880 == -1) {
    local_880 = 0;
  }
  (**(code **)(*local_448 + 0x18))(local_448,&local_8b0,local_880);
  cVar1 = FUN_00440a20(local_8b0,1);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_988,L"File not found: ",local_8b0);
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_988);
    FUN_004134c0(uVar4);
  }
  else {
    FUN_004b9f40(*(undefined8 *)(local_res10 + 0x30),local_8b0);
  }
  FUN_00414b50(&local_900,local_8b0);
  FUN_004414c0(&local_990,local_8b0,L".hex");
  FUN_00414b50(&local_8b0,local_990);
  cVar1 = FUN_00440a20(local_8b0,1);
  if (cVar1 == '\0') {
    if (param_10 == 0) {
      FUN_00416ba0(&local_998,L"File not found: ",local_8b0);
      uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_998);
      FUN_004134c0(uVar4);
    }
  }
  else {
    (**(code **)(*local_430 + 0xd8))(local_430,local_8b0);
    (**(code **)(**(longlong **)(local_878 + 0xd0) + 0x10))
              (*(longlong **)(local_878 + 0xd0),local_430);
  }
  if (param_10 == 0) {
    FUN_015fcb30(&local_870,&DAT_0210f7fc);
    uVar4 = FUN_00442620(local_862,local_870);
    FUN_015fcc20(uVar4,&local_460,0,0);
    local_90c = 0x800;
    local_920 = 0;
    FUN_00414b50(&local_428,local_870);
    local_a08 = *(wchar_t **)(local_res10 + 0x10);
    local_a00 = L".elf";
    FUN_00416cd0(&local_8b0,4,local_428,&DAT_01607ab8);
    FUN_004b9df0(*(undefined8 *)(local_res10 + 0x30),local_8b0);
    local_928 = 0;
    uVar4 = FUN_00442620(local_862,local_8b0);
    uVar5 = FUN_00442620(local_41a,local_428);
    local_a08 = (wchar_t *)local_460;
    local_a00 = (wchar_t *)CONCAT44(local_a00._4_4_,local_90c);
    local_9f8 = (wchar_t *)&local_918;
    local_9f0 = &local_920;
    FUN_016068d0(auStack_a28,uVar4,local_928,uVar5);
    if (local_918 == 0) {
      uVar4 = FUN_00b89270();
      FUN_0041ddd0(&local_9a8,PTR_PTR_02002908);
      FUN_00b8e650(uVar4,&local_9a0,L"HDLStrings.Msg_ErrorParsingElfFile",local_9a8);
      uVar4 = FUN_0044d490(&PTR_FUN_015ef458,1,local_9a0);
      FUN_004134c0(uVar4);
    }
    FUN_00414b50(&local_948,local_8b8);
    FUN_01776920(local_878,local_88c[0]);
    uVar4 = FUN_00442620(local_862,local_948);
    _MCUCode_SetCompileOpt(local_918,uVar4,local_88c[0]);
    _Debug_SetFileVersion(local_918,2);
    local_a08 = (wchar_t *)&local_8a0;
    cVar1 = _Debug_CheckAllCU(local_918,&local_930,&local_938,local_88c);
    if (cVar1 == '\0') {
      uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Failed to assign the code!");
      FUN_004134c0(uVar4);
    }
    local_8a4 = 2;
    if (1 < local_8a0) {
      local_8a4 = 3;
    }
    if ((local_88c[0] & 2) != 0) {
      FUN_01605d70(&local_9b0,local_8b8,local_8a4);
      local_a08 = L"mtb_shared";
      FUN_00416cd0(&local_8d0,3,local_9b0,&DAT_01607ab8);
    }
    local_a08 = (wchar_t *)local_428;
    local_a00._0_1_ = 1;
    local_440 = FUN_01605840(local_930,local_938,local_8c8[0],local_8d0);
    local_a08 = (wchar_t *)((ulonglong)local_a08 & 0xffffffffffffff00);
    local_a00 = (wchar_t *)CONCAT71(local_a00._1_7_,1);
    local_9f8 = (wchar_t *)CONCAT71(local_9f8._1_7_,param_6);
    FUN_010b0990(local_res10,local_440,local_8c8[0],local_8d0);
    if (param_9 != '\0') {
      local_958 = (longlong *)FUN_007fc180(&PTR_FUN_015e75a8,1,*(undefined8 *)PTR_DAT_02004030);
      iVar2 = (**(code **)(*local_958 + 0x2d0))(local_958);
      if (iVar2 == 1) {
        local_890 = FUN_015e7b20(local_958);
        cVar1 = FUN_010b1820(local_res10);
        local_894 = (uint)(cVar1 != '\0');
        local_898 = (uint)((local_88c[0] & 2) != 0);
        FUN_015fcd70(&local_8f8,local_870);
        cVar1 = FUN_00b96de0(local_8f8);
        if (cVar1 != '\0') {
          FUN_00442420(local_8f8);
        }
        FUN_00b96df0(local_8f8);
        FUN_00414b50(&local_8f0,local_res20);
        local_a08 = local_8f0;
        FUN_00416cd0(&local_9b8,3,local_8f8,&DAT_01607ab8);
        local_a08 = (wchar_t *)local_8b8;
        local_a00 = local_8e8;
        local_9f8 = (wchar_t *)local_900;
        local_9f0 = (undefined8 *)((ulonglong)local_9f0 & 0xffffffff00000000);
        local_458 = (longlong *)FUN_016062a0(local_res10,local_9b8,L"mtb_shared",local_8f0);
        local_a08 = local_8f0;
        FUN_00416cd0(&local_9c0,3,local_8f8,&DAT_01607ab8);
        local_a08 = local_8f0;
        local_a00 = L"\\";
        local_9f8 = L"mtb_shared";
        FUN_00416cd0(&local_9c8,5,local_8f8,&DAT_01607ab8);
        local_a08 = local_8f0;
        local_a00 = L"\\";
        local_9f8 = local_8f0;
        FUN_00416cd0(&local_9d0,5,local_8f8,&DAT_01607ab8);
        local_a08 = (wchar_t *)local_8b8;
        local_a00 = local_8e8;
        local_9f8 = (wchar_t *)local_900;
        local_9f0 = (undefined8 *)CONCAT44(local_9f0._4_4_,1);
        local_450 = (longlong *)FUN_016062a0(local_res10,local_9c0,local_9c8,local_9d0);
        local_a08 = local_8f0;
        FUN_00416cd0(&local_8e8,3,local_8f8,&DAT_01607ab8);
        FUN_01606080(local_8e8,local_890,local_894,local_898);
        (**(code **)(*local_458 + 0x78))(local_458,L"codetype.ini");
        local_a08 = L"codetype.ini";
        FUN_00416cd0(&local_9d8,3,local_8e8,&DAT_01607ab8);
        (**(code **)(*local_450 + 0x78))(local_450,local_9d8);
        FUN_00724380(local_958[0xda],local_res20);
        cVar1 = (**(code **)(*(longlong *)local_958[0xda] + 0xa8))((longlong *)local_958[0xda]);
        if (cVar1 != '\0') {
          FUN_00724270(local_958[0xda],&local_908);
          FUN_01605ed0(local_908,local_450,local_458);
          local_a08 = local_8f0;
          local_a00 = L"_arch.txt";
          FUN_00416cd0(&local_9e0,4,local_8f8,&DAT_01607ab8);
          (**(code **)(*local_458 + 0x100))(local_458,local_9e0);
          local_a08 = local_8f0;
          local_a00 = L".txt";
          FUN_00416cd0(&local_9e8,4,local_8f8,&DAT_01607ab8);
          (**(code **)(*local_450 + 0x100))(local_450,local_9e8);
        }
      }
      FUN_00410f20(local_958);
    }
    FUN_00410f20(local_430);
    if (local_438 != (longlong *)0x0) {
      FUN_00410f20(local_438);
    }
    if (local_440 != 0) {
      FUN_00410f20(local_440);
    }
    if (local_448 != (longlong *)0x0) {
      FUN_00410f20(local_448);
    }
    if (local_450 != (longlong *)0x0) {
      FUN_00410f20(local_450);
    }
    if (local_458 != (longlong *)0x0) {
      FUN_00410f20(local_458);
    }
    if (local_460 != 0) {
      uVar4 = FUN_00442620(local_862,local_870);
      FUN_015fcd60(local_460,uVar4,0);
    }
  }
  else {
    FUN_01607920(0,local_960);
  }
  FUN_00414560(&local_9e8,0x11);
  FUN_00414560(&local_948,2);
  FUN_00414560(&local_908,9);
  FUN_00414560(&local_8b8,2);
  FUN_00414480(&local_870);
  FUN_00414480(&local_428);
  FUN_00414560(&local_res18,3);
  FUN_00414560(&param_7,2);
  return;
}

