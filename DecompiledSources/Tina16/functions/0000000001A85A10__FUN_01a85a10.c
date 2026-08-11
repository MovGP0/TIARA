/* Ghidra address: 01a85a10 */
/* Ghidra symbol: FUN_01a85a10 */


void FUN_01a85a10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined1 local_b0 [16];
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
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50[0] = 0;
  local_58 = 0;
  puVar9 = &local_38;
  puVar12 = &local_40;
  cVar4 = FUN_01ae68a0(*(undefined8 *)(param_1 + 0x798),&local_20,&local_28,&local_30,puVar9,puVar12
                      );
  uVar13 = (undefined4)((ulonglong)puVar12 >> 0x20);
  uVar6 = (undefined4)((ulonglong)puVar9 >> 0x20);
  if (cVar4 != '\0') {
    if (*(longlong *)(param_1 + 0x798) == 0) {
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
      FUN_01a794b0(param_1,param_2);
    }
    else {
      uVar7 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
      *(undefined8 *)(param_1 + 0xff0) = uVar7;
      lVar2 = *(longlong *)(param_1 + 0xff0);
      *(undefined1 *)(*(longlong *)(lVar2 + 0x90) + 0x98) = 1;
      *(undefined1 *)(lVar2 + 0x99) = 1;
      *(undefined1 *)(lVar2 + 0xa0) = 1;
      plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x90) + 0x80);
      (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(param_1 + 0x1038));
      uVar7 = CONCAT44(uVar6,2);
      uVar10 = CONCAT44(uVar13,0xffffffe2);
      FUN_00f05f60(&local_58,local_38,0x3ff0000000000000,1,uVar7,uVar10,0xffffffe2);
      uVar13 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_00416ba0(local_50,L"Starting time: ",local_58);
      plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x90) + 0xa0);
      (**(code **)(*plVar8 + 0x78))(plVar8,local_50[0]);
      uVar10 = CONCAT44(uVar6,2);
      FUN_00f05f60(&local_68,local_40,0x3ff0000000000000,1,uVar10,CONCAT44(uVar13,0xffffffe2),
                   0xffffffe2);
      FUN_00416ba0(&local_60,L"Ending time: ",local_68);
      plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x90) + 0xa0);
      (**(code **)(*plVar8 + 0x78))(plVar8,local_60);
      uVar7 = FUN_00b89270();
      FUN_00b8e520(uVar7,&local_70,0x82d);
      uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      FUN_00b8fd60(&local_78,local_20,*PTR_DAT_02005310,0,uVar10);
      FUN_00416ad0(&local_70,local_78);
      plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x90) + 0xa0);
      (**(code **)(*plVar8 + 0x78))(plVar8,local_70);
      uVar7 = FUN_00b89270();
      FUN_00b8e520(uVar7,&local_80,0x82e);
      uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      FUN_00b8fd60(&local_88,local_28,*PTR_DAT_02005310,0,uVar10);
      FUN_00416ad0(&local_80,local_88);
      plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x90) + 0xa0);
      (**(code **)(*plVar8 + 0x78))(plVar8,local_80);
      uVar7 = FUN_00b89270();
      FUN_00b8e520(uVar7,&local_90,0x82f);
      uVar11 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      FUN_00b8fd60(&local_98,local_30,*PTR_DAT_02005310,0,uVar11);
      FUN_00416ad0(&local_90,local_98);
      plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x90) + 0xa0);
      (**(code **)(*plVar8 + 0x78))(plVar8,local_90);
      plVar8 = (longlong *)FUN_01aebb40(&PTR_FUN_01466f90,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_0146a9a0(plVar8,*(undefined8 *)(param_1 + 0xff0));
      FUN_0082a6c0(plVar8[0xda],1);
      FUN_0146a6e0(plVar8,*(undefined8 *)PTR_DAT_02004030);
      iVar5 = (**(code **)(*plVar8 + 0x2d0))(plVar8);
      if (iVar5 != 2) {
        iVar5 = (**(code **)(**(longlong **)(plVar8[0xdd] + 0x4d8) + 0x28))
                          (*(longlong **)(plVar8[0xdd] + 0x4d8));
        if (iVar5 != 0) {
          FUN_01a5eb60(*(undefined8 *)(param_1 + 0xff0),plVar8[0x11c]);
          (**(code **)(**(longlong **)(param_1 + 0x1038) + 0x10))
                    (*(longlong **)(param_1 + 0x1038),
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xff0) + 0x90) + 0x80));
          local_a0 = FUN_00498310(0xffffff9c,0xffffff9c);
          (**(code **)(**(longlong **)(param_1 + 0xff0) + 200))
                    (*(longlong **)(param_1 + 0xff0),&local_a0);
          *(undefined4 *)(param_1 + 0x1018) = 0xffffff9c;
          *(undefined4 *)(param_1 + 0x101c) = 0xffffff9c;
          uVar6 = FUN_01a5ee60(*(undefined8 *)(param_1 + 0xff0),*(undefined8 *)(param_1 + 0x780));
          *(undefined4 *)(param_1 + 0x1014) = uVar6;
          uVar6 = FUN_01a5eed0(*(undefined8 *)(param_1 + 0xff0),*(undefined8 *)(param_1 + 0x780));
          *(undefined4 *)(param_1 + 0x1010) = uVar6;
          plVar3 = *(longlong **)(param_1 + 0xff0);
          plVar3[0x11] = *(longlong *)(param_1 + 0x798);
          (**(code **)(*plVar3 + 0xe8))(plVar3);
          FUN_01a5f250(*(undefined8 *)(param_1 + 0xff0));
          FUN_00410f20(plVar8);
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
          FUN_0064e140(param_1,5);
          iVar5 = *(int *)(param_1 + 0x1018);
          iVar1 = *(int *)(param_1 + 0x101c);
          FUN_00498350(local_b0,0,0,0,uVar11 & 0xffffffff00000000);
          FUN_01a8dd40(*(undefined8 *)(param_1 + 0x780),iVar5,iVar1,
                       iVar5 + *(int *)(param_1 + 0x1014),iVar1 + *(int *)(param_1 + 0x1010),
                       local_b0);
          *(undefined1 *)(param_1 + 0x7a8) = 6;
          goto LAB_01a85fc6;
        }
      }
      FUN_00410f20(*(undefined8 *)(param_1 + 0xff0));
      *(undefined8 *)(param_1 + 0xff0) = 0;
      FUN_00410f20(plVar8);
    }
  }
LAB_01a85fc6:
  FUN_00414560(&local_98,10);
  return;
}

