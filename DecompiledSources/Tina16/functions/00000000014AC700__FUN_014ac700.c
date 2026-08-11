/* Ghidra address: 014ac700 */
/* Ghidra symbol: FUN_014ac700 */


void FUN_014ac700(longlong *param_1)

{
  undefined2 uVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ushort uVar9;
  undefined8 uVar10;
  undefined1 auStack_b08 [32];
  longlong *local_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined8 local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined8 local_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  undefined8 local_a48;
  undefined8 local_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
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
  longlong local_998;
  undefined8 local_990;
  undefined1 local_988 [2360];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  local_ae0 = 0;
  local_ad8 = 0;
  local_ad0 = 0;
  local_ac8 = 0;
  local_ac0 = 0;
  local_ab8 = 0;
  local_ab0 = 0;
  local_aa8 = 0;
  local_aa0 = 0;
  local_a98 = 0;
  local_a90 = 0;
  local_a88 = 0;
  local_a80 = 0;
  local_a78 = 0;
  local_a70 = 0;
  local_a68 = 0;
  local_a60 = 0;
  local_a58 = 0;
  local_a50 = 0;
  local_a48 = 0;
  local_a40 = 0;
  local_a38 = 0;
  local_a30 = 0;
  local_a28 = 0;
  local_a20 = 0;
  local_a18 = 0;
  local_a10 = 0;
  local_a08 = 0;
  local_a00 = 0;
  local_9f8 = 0;
  local_9f0 = 0;
  local_9e8 = 0;
  local_9e0 = 0;
  local_9d8 = 0;
  local_9d0 = 0;
  local_9c8 = 0;
  local_9c0 = 0;
  local_9b8 = 0;
  local_9b0 = 0;
  local_9a8 = 0;
  local_9a0 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_990 = 0;
  local_998 = 0;
  local_ae8 = param_1;
  FUN_00417580(local_988,&DAT_01d0d0b8);
  lVar8 = *(longlong *)(*local_ae8 + 0x48);
  if (*(longlong *)(*local_ae8 + 0x48) == 0) {
    lVar8 = DAT_0210eae0;
  }
  FUN_01d316c0(*local_ae8,&local_990);
  FUN_00bac3d0(local_30);
  cVar2 = (**(code **)(*local_30[0] + 400))(local_30[0],local_990);
  if (cVar2 != '\0') {
    uVar1 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
    (**(code **)(*local_30[0] + 0x100))(local_30[0],&local_38);
    (**(code **)(*local_38 + 0xd8))(local_38,&local_9a0,L"/storage/config");
    FUN_0041b890(&local_40,local_9a0,&DAT_014ad8b8);
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x100))(local_40,&local_9a8,L"lvon");
      uVar3 = FUN_0043fc50(local_9a8,PTR_DAT_02001120[0x800]);
      *(undefined1 *)(lVar8 + 0xc92) = uVar3;
      (**(code **)(*local_40 + 0x100))(local_40,&local_9b0,L"lvmv");
      uVar10 = FUN_00b8f2f0(local_9b0,*(undefined8 *)(PTR_DAT_02001120 + 0x801));
      *(undefined8 *)(lVar8 + 0xc93) = uVar10;
      (**(code **)(*local_40 + 0x100))(local_40,&local_9b8,L"lvmc");
      uVar10 = FUN_00b8f2f0(local_9b8,*(undefined8 *)(PTR_DAT_02001120 + 0x809));
      *(undefined8 *)(lVar8 + 0xc9b) = uVar10;
      (**(code **)(*local_40 + 0x100))(local_40,&local_9c0,L"lvsc");
      uVar3 = FUN_0043fc50(local_9c0,PTR_DAT_02001120[0x811]);
      *(undefined1 *)(lVar8 + 0xca3) = uVar3;
      (**(code **)(*local_40 + 0x100))(local_40,&local_9c8,L"lvaa");
      uVar3 = FUN_0043fc50(local_9c8,PTR_DAT_02001120[0x812]);
      *(undefined1 *)(lVar8 + 0xca4) = uVar3;
      (**(code **)(*local_40 + 0x100))(local_40,&local_9d0,L"itww");
      uVar10 = FUN_00b8f2f0(local_9d0,*(undefined8 *)(PTR_DAT_02001120 + 0x7f8));
      *(undefined8 *)(lVar8 + 0xc8a) = uVar10;
      (**(code **)(*local_40 + 0x100))(local_40,&local_9d8,L"nlsolver");
      uVar3 = FUN_0043fc50(local_9d8,PTR_DAT_02001120[0x8fe]);
      *(undefined1 *)(lVar8 + 0xd90) = uVar3;
      (**(code **)(*local_40 + 0x100))(local_40,&local_9e0,L"mospwllevel");
      uVar3 = FUN_0043fc50(local_9e0,1);
      *(undefined1 *)(lVar8 + 0xd91) = uVar3;
      *(undefined2 *)(lVar8 + 0x830) = 0;
      (**(code **)(*local_40 + 0x100))(local_40,&local_998,L"acview");
      while (local_998 != 0) {
        uVar9 = *(ushort *)(lVar8 + 0x830);
        plVar7 = &local_998;
        bVar4 = FUN_014ac640(auStack_b08,plVar7);
        if (bVar4 < 0x10) {
          uVar9 = uVar9 | (ushort)((int)CONCAT62((int6)((ulonglong)plVar7 >> 0x10),1) <<
                                  (bVar4 & 0x1f));
        }
        *(ushort *)(lVar8 + 0x830) = uVar9;
      }
      *(undefined2 *)(lVar8 + 0x861) = 0;
      (**(code **)(*local_40 + 0x100))(local_40,&local_998,L"acnetworkszyhview");
      while (local_998 != 0) {
        uVar9 = *(ushort *)(lVar8 + 0x861);
        plVar7 = &local_998;
        bVar4 = FUN_014ac640(auStack_b08,plVar7);
        if (bVar4 < 0x10) {
          uVar9 = uVar9 | (ushort)((int)CONCAT62((int6)((ulonglong)plVar7 >> 0x10),1) <<
                                  (bVar4 & 0x1f));
        }
        *(ushort *)(lVar8 + 0x861) = uVar9;
      }
      *(undefined2 *)(lVar8 + 0x863) = 0;
      (**(code **)(*local_40 + 0x100))(local_40,&local_998,L"acnetworkreflectionview");
      while (local_998 != 0) {
        uVar9 = *(ushort *)(lVar8 + 0x863);
        plVar7 = &local_998;
        bVar4 = FUN_014ac640(auStack_b08,plVar7);
        if (bVar4 < 0x10) {
          uVar9 = uVar9 | (ushort)((int)CONCAT62((int6)((ulonglong)plVar7 >> 0x10),1) <<
                                  (bVar4 & 0x1f));
        }
        *(ushort *)(lVar8 + 0x863) = uVar9;
      }
      *(undefined2 *)(lVar8 + 0x865) = 0;
      (**(code **)(*local_40 + 0x100))(local_40,&local_998,L"acnetworktransmissionview");
      while (local_998 != 0) {
        uVar9 = *(ushort *)(lVar8 + 0x865);
        plVar7 = &local_998;
        bVar4 = FUN_014ac640(auStack_b08,plVar7);
        if (bVar4 < 0x10) {
          uVar9 = uVar9 | (ushort)((int)CONCAT62((int6)((ulonglong)plVar7 >> 0x10),1) <<
                                  (bVar4 & 0x1f));
        }
        *(ushort *)(lVar8 + 0x865) = uVar9;
      }
      *(undefined1 *)(lVar8 + 0x84c) = 0;
      (**(code **)(*local_40 + 0x100))(local_40,&local_998,L"noiseview");
      while (local_998 != 0) {
        bVar4 = *(byte *)(lVar8 + 0x84c);
        uVar10 = FUN_014ac640(auStack_b08,&local_998);
        if ((byte)uVar10 < 8) {
          bVar4 = bVar4 | (byte)((int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1) <<
                                ((byte)uVar10 & 0x1f));
        }
        *(byte *)(lVar8 + 0x84c) = bVar4;
      }
      *(undefined1 *)(lVar8 + 0x8a7) = 0;
      (**(code **)(*local_40 + 0x100))(local_40,&local_998,L"fourierview");
      while (local_998 != 0) {
        bVar4 = *(byte *)(lVar8 + 0x8a7);
        uVar10 = FUN_014ac640(auStack_b08,&local_998);
        if ((byte)uVar10 < 8) {
          bVar4 = bVar4 | (byte)((int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1) <<
                                ((byte)uVar10 & 0x1f));
        }
        *(byte *)(lVar8 + 0x8a7) = bVar4;
      }
      (**(code **)(*local_40 + 0x100))(local_40,&local_9e8,L"phasecorrection");
      uVar3 = FUN_0043fc50(local_9e8,PTR_DAT_02001120[0x819]);
      *(undefined1 *)(lVar8 + 0xcab) = uVar3;
      (**(code **)(*local_40 + 0x100))(local_40,&local_9f0,L"fourierthdoutput");
      FUN_00414ad0(lVar8 + 0xcad,local_9f0);
      (**(code **)(*local_40 + 0x100))(local_40,&local_9f8,L"fourierspeoutput");
      FUN_00414ad0(lVar8 + 0xcb5,local_9f8);
      (**(code **)(*local_40 + 0x100))(local_40,&local_a00,L"fourierthdinitcond");
      uVar3 = FUN_0043fc50(local_a00,PTR_DAT_02001120[0x82b]);
      *(undefined1 *)(lVar8 + 0xcbd) = uVar3;
      (**(code **)(*local_40 + 0x100))(local_40,&local_a08,L"fourierspeinitcond");
      uVar3 = FUN_0043fc50(local_a08,PTR_DAT_02001120[0x82c]);
      *(undefined1 *)(lVar8 + 0xcbe) = uVar3;
      (**(code **)(*local_40 + 0x100))(local_40,&local_a10,&DAT_014adbb0);
      uVar3 = FUN_0043fc50(local_a10,PTR_DAT_02001120[0x297]);
      *(undefined1 *)(lVar8 + 0x729) = uVar3;
      (**(code **)(*local_40 + 0x100))(local_40,&local_a18,&DAT_014adbc4);
      uVar3 = FUN_0043fc50(local_a18,PTR_DAT_02001120[0x901]);
      *(undefined1 *)(lVar8 + 0xd93) = uVar3;
      (**(code **)(*local_40 + 0x100))(local_40,&local_a20,&DAT_014adbd8);
      uVar3 = FUN_0043fc50(local_a20,PTR_DAT_02001120[0x902]);
      *(undefined1 *)(lVar8 + 0xd94) = uVar3;
      (**(code **)(*local_40 + 0x100))(local_40,&local_a28,L"aisettings");
      FUN_00414ad0(lVar8 + 0xd95,local_a28);
      (**(code **)(*local_40 + 0x100))(local_40,&local_a30,L"jsappsettings");
      FUN_00414ad0(lVar8 + 0xd9d,local_a30);
      (**(code **)(*local_40 + 0x100))(local_40,&local_a38,L"marginreferencephase");
      uVar3 = FUN_0043fc50(local_a38,PTR_DAT_02001120[0x913]);
      *(undefined1 *)(lVar8 + 0xda5) = uVar3;
    }
    (**(code **)(*local_38 + 0xd8))(local_38,&local_a40,L"/storage/config/acmultisine");
    FUN_0041b890(&local_48,local_a40,&DAT_014ad8b8);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x100))(local_48,&local_a48,L"fstart");
      uVar10 = FUN_00b8f2f0(local_a48,*(undefined8 *)(PTR_DAT_02001120 + 0x8c0));
      *(undefined8 *)(lVar8 + 0xd52) = uVar10;
      (**(code **)(*local_48 + 0x100))(local_48,&local_a50,L"fstop");
      uVar10 = FUN_00b8f2f0(local_a50,*(undefined8 *)(PTR_DAT_02001120 + 0x8c8));
      *(undefined8 *)(lVar8 + 0xd5a) = uVar10;
      (**(code **)(*local_48 + 0x100))(local_48,&local_a58,L"ampl");
      uVar10 = FUN_00b8f2f0(local_a58,*(undefined8 *)(PTR_DAT_02001120 + 0x8d0));
      *(undefined8 *)(lVar8 + 0xd62) = uVar10;
      (**(code **)(*local_48 + 0x100))(local_48,&local_a60,&PTR_s_StyleManager_TSourceInfo_014add00)
      ;
      uVar10 = FUN_00b8f2f0(local_a60,*(undefined8 *)(PTR_DAT_02001120 + 0x8e0));
      *(undefined8 *)(lVar8 + 0xd72) = uVar10;
      (**(code **)(*local_48 + 0x100))(local_48,&local_a68,L"stime");
      uVar10 = FUN_00b8f2f0(local_a68,*(undefined8 *)(PTR_DAT_02001120 + 0x8d8));
      *(undefined8 *)(lVar8 + 0xd6a) = uVar10;
      (**(code **)(*local_48 + 0x100))(local_48,&local_a70,L"points");
      uVar5 = FUN_0043fc50(local_a70,*(undefined2 *)(PTR_DAT_02001120 + 0x8e8));
      *(undefined2 *)(lVar8 + 0xd7a) = uVar5;
      (**(code **)(*local_48 + 0x100))(local_48,&local_a78,L"cycles");
      uVar6 = FUN_0043fc50(local_a78,*(undefined4 *)(PTR_DAT_02001120 + 0x8ea));
      *(undefined4 *)(lVar8 + 0xd7c) = uVar6;
      (**(code **)(*local_48 + 0x100))(local_48,&local_a80,L"swmode");
      uVar3 = FUN_0043fc50(local_a80,PTR_DAT_02001120[0x8ee]);
      *(undefined1 *)(lVar8 + 0xd80) = uVar3;
      (**(code **)(*local_48 + 0x100))(local_48,&local_a88,L"wfunc");
      uVar3 = FUN_0043fc50(local_a88,PTR_DAT_02001120[0x8f8]);
      *(undefined1 *)(lVar8 + 0xd8a) = uVar3;
      (**(code **)(*local_48 + 0x100))(local_48,&local_a90,L"icond");
      uVar3 = FUN_0043fc50(local_a90,PTR_DAT_02001120[0x8ef]);
      *(undefined1 *)(lVar8 + 0xd81) = uVar3;
      (**(code **)(*local_48 + 0x100))(local_48,&local_a98,&DAT_014addb0);
      FUN_00414ad0(lVar8 + 0xd82,local_a98);
      (**(code **)(*local_48 + 0x100))(local_48,&local_aa0,L"repli");
      uVar3 = FUN_0043fc50(local_aa0,PTR_DAT_02001120[0x8f9]);
      *(undefined1 *)(lVar8 + 0xd8b) = uVar3;
      (**(code **)(*local_48 + 0x100))(local_48,&local_aa8,L"showtr");
      uVar3 = FUN_0043fc50(local_aa8,PTR_DAT_02001120[0x8fa]);
      *(undefined1 *)(lVar8 + 0xd8c) = uVar3;
      *(undefined2 *)(lVar8 + 0xd8d) = 0;
      (**(code **)(*local_48 + 0x100))(local_48,&local_ab0,L"view");
      FUN_00416ba0(&local_998,local_ab0,&DAT_014ade10);
      while (local_998 != 0) {
        uVar9 = *(ushort *)(lVar8 + 0xd8d);
        plVar7 = &local_998;
        bVar4 = FUN_014ac640(auStack_b08,plVar7);
        if (bVar4 < 0x10) {
          uVar9 = uVar9 | (ushort)((int)CONCAT62((int6)((ulonglong)plVar7 >> 0x10),1) <<
                                  (bVar4 & 0x1f));
        }
        *(ushort *)(lVar8 + 0xd8d) = uVar9;
      }
    }
    (**(code **)(*local_38 + 0xd8))(local_38,&local_ab8,L"/storage/config/hb");
    FUN_0041b890(&local_50,local_ab8,&DAT_014ad8b8);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x100))(local_50,&local_ac0,L"basefreq");
      FUN_00414ad0(lVar8 + 0xda6,local_ac0);
      (**(code **)(*local_50 + 0x100))(local_50,&local_ac8,L"numharmonics");
      FUN_00414ad0(lVar8 + 0xdae,local_ac8);
      (**(code **)(*local_50 + 0x100))(local_50,&local_ad0,L"output");
      FUN_00414ad0(lVar8 + 0xdb6,local_ad0);
      (**(code **)(*local_50 + 0x100))(local_50,&local_ad8,L"options");
      FUN_00414ad0(lVar8 + 0xdbe,local_ad8);
      (**(code **)(*local_50 + 0x100))(local_50,&local_ae0,L"format");
      uVar6 = FUN_0043fc50(local_ae0,*(undefined4 *)(PTR_DAT_02001120 + 0x934));
      *(undefined4 *)(lVar8 + 0xdc6) = uVar6;
    }
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = uVar1;
  }
  FUN_00414560(&local_ae0,5);
  FUN_0041b800(&local_ab8);
  FUN_00414560(&local_ab0,0xe);
  FUN_0041b800(&local_a40);
  FUN_00414560(&local_a38,0x13);
  FUN_0041b800(&local_9a0);
  FUN_00414560(&local_998,2);
  FUN_00417740(local_988,&DAT_01d0d0b8);
  FUN_00417840(&local_50,&LAB_00b9fca0,4);
  FUN_0041b800(local_30);
  return;
}

