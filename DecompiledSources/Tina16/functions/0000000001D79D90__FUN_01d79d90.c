/* Ghidra address: 01d79d90 */
/* Ghidra symbol: FUN_01d79d90 */


void FUN_01d79d90(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  int *local_98;
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
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_28 = 0;
  local_30 = 0;
  *param_1 = 0;
  *PTR_DAT_02002ce0 = 0;
  local_98 = param_1;
  thunk_FUN_03e6434b(0);
  uVar5 = FUN_00b89270();
  FUN_00b89e10(uVar5);
  uVar3 = FUN_01d77520();
  *(undefined2 *)PTR_DAT_02004a38 = uVar3;
  FUN_01d77ad0(local_98);
  if (*local_98 == 0) {
    FUN_01b23de0();
    FUN_00416ba0(local_40,*(undefined8 *)PTR_DAT_02005010,&DAT_01d7a338);
    FUN_01d79310(local_40[0]);
    FUN_01d0e560(*(undefined8 *)PTR_DAT_02005010);
    FUN_01b490c0();
    FUN_01b490c0();
    FUN_01b490c0();
    FUN_01b49d20();
    FUN_01b46300();
    FUN_01709390();
    FUN_01b47cb0();
    FUN_01ba96e0();
    uVar5 = FUN_00c851d0(&DAT_00c80c40,1);
    *(undefined8 *)PTR_DAT_02002c40 = uVar5;
    FUN_01710730();
    *(undefined4 *)PTR_DAT_02004770 = 0;
    FUN_015668d0();
    FUN_00e04f10();
    FUN_01d42920(L"Startup.ReadIniVhdl",0);
    uVar1 = FUN_00e04c60();
    *PTR_DAT_02004ba0 = uVar1;
    FUN_01d42920(L"Startup.Init_VHDL_DLL",0);
    cVar2 = FUN_00e06a40();
    if (cVar2 == '\0') {
      FUN_0072d730(L"Tina version and vhdl_dll2.dll version mismatch!",0xffffffff,0xffffffff);
      *local_98 = 1;
    }
    else {
      _InitHDLGlobals();
      iVar4 = _HDL_GetGlobalStatus(local_1c,local_20);
      if (iVar4 < 1) {
        FUN_01d42920(L"Startup._SetupData",0);
        FUN_015f61c0();
        cVar2 = FUN_015f63a0();
        if (cVar2 == '\0') {
          *local_98 = 1;
        }
        else {
          FUN_01d42920(L"Startup.__SetupData",0);
          *PTR_DAT_02003778 = 0;
          FUN_00e05d80();
          FUN_00e05e10();
          _TC_SetSendMsgCallBack(FUN_0160dfc0);
          FUN_0160f430();
          FUN_013a9fe0();
          uVar5 = FUN_00c40000(&LAB_00c3b958,1);
          *(undefined8 *)PTR_DAT_02004440 = uVar5;
          FUN_01d79b80(auStack_d8,*(undefined8 *)PTR_DAT_020049a0);
          FUN_00416ba0(&local_50,*(undefined8 *)PTR_DAT_020049a0,L"\\SPICELIB");
          FUN_01d79b80(auStack_d8,local_50);
          FUN_01d79b80(auStack_d8,*(undefined8 *)PTR_DAT_02001340);
          FUN_00416ba0(&local_58,*(undefined8 *)PTR_DAT_02001340,L"\\SPICELIB");
          FUN_01d79b80(auStack_d8,local_58);
          FUN_01d79b80(auStack_d8,*(undefined8 *)PTR_DAT_02004438);
          FUN_00416ba0(&local_60,*(undefined8 *)PTR_DAT_02004438,L"\\SPICELIB");
          FUN_01d79b80(auStack_d8,local_60);
          FUN_01d42920(L"Startup.TheDeviceList",0);
          FUN_0173c730();
          FUN_00416ba0(&local_68,*(undefined8 *)PTR_DAT_02005010,L"\\update.ini");
          uVar5 = FUN_005dc9d0(&PTR_FUN_005d4e78,1,local_68);
          *(undefined8 *)PTR_DAT_02003108 = uVar5;
          FUN_00416ba0(&local_70,*(undefined8 *)PTR_DAT_020049a0,L"\\ComponentFilters.ini");
          uVar5 = FUN_005dc9d0(&PTR_FUN_005d4e78,1,local_70);
          *(undefined8 *)PTR_DAT_02003448 = uVar5;
          uVar5 = FUN_00b89270();
          FUN_00b8e520(uVar5,&local_78,0x80e);
          local_b8 = &DAT_01d7a56c;
          local_b0 = &DAT_01d7a55c;
          local_a8 = &DAT_01d7a57c;
          FUN_00416cd0(PTR_DAT_020030b0,5,local_78,&DAT_01d7a55c);
          local_b8 = &DAT_01d7a58c;
          FUN_00416cd0(PTR_DAT_02001ec8,3,*(undefined8 *)PTR_DAT_020030b0,&DAT_01d7a55c);
          uVar5 = FUN_00b89270();
          FUN_00b8e520(uVar5,&local_80,0x8e);
          FUN_00414ad0(PTR_DAT_02004ec0,local_80);
          iVar4 = 0;
          puVar6 = PTR_DAT_02003ac0;
          do {
            uVar5 = FUN_00b89270();
            FUN_00b8e520(uVar5,&local_88,iVar4 + 0x428);
            FUN_00414ad0(puVar6,local_88);
            iVar4 = iVar4 + 1;
            puVar6 = puVar6 + 8;
          } while (iVar4 != 0x1b);
          FUN_00416ba0(&local_90,*(undefined8 *)PTR_DAT_020049a0,L"\\macrosmokeparams.xml");
          uVar5 = FUN_0175f470(&DAT_0175f2f8,1,local_90);
          *(undefined8 *)PTR_DAT_020016d0 = uVar5;
          FUN_01d42920(L"Startup.End *",0);
        }
      }
      else {
        uVar5 = _HDL_GetGlobalStr();
        FUN_00415430(&local_30,uVar5,0);
        FUN_004156b0(&local_30,"vhdl_dll2.dll: ",local_30);
        FUN_00416880(&local_48,local_30);
        FUN_0072d730(local_48,0xffffffff,0xffffffff);
        *local_98 = 1;
      }
    }
  }
  FUN_00414560(&local_90,0xb);
  FUN_004144d0(&local_30);
  FUN_00414480(&local_28);
  return;
}

