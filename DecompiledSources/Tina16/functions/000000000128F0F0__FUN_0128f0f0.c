/* Ghidra address: 0128f0f0 */
/* Ghidra symbol: FUN_0128f0f0 */


void FUN_0128f0f0(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  longlong *local_res8 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = (longlong *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res8[0] = param_1;
  FUN_0041b910(param_1);
  plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = (**(code **)(*local_res8[0] + 0x18))(local_res8[0]);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      (**(code **)(*local_res8[0] + 0x20))(local_res8[0],&local_50,iVar2);
      FUN_0041b890(&local_30,local_50,&DAT_0128f440);
      (**(code **)(*local_30 + 0x100))(local_30,&local_58,L"points");
      FUN_00416ba0(&local_48,local_58,&DAT_0128f478);
      iVar3 = (**(code **)(*plVar7 + 0xb0))(plVar7,local_48);
      if (iVar3 == -1) {
        (**(code **)(*plVar7 + 0x78))(plVar7,local_48);
        lVar8 = FUN_00410e60(&PTR_FUN_00472dd0,1);
        iVar3 = -1;
        iVar11 = -1;
        while (local_48 != 0) {
          iVar4 = FUN_012421e0(&local_48);
          iVar5 = FUN_012421e0(&local_48);
          if ((iVar11 != iVar4) || (bVar12 = iVar3 != iVar5, iVar3 = iVar5, iVar11 = iVar4, bVar12))
          {
            uVar6 = FUN_00b92120(iVar4,iVar5);
            uVar9 = FUN_00b95a80(uVar6);
            FUN_004ae7e0(lVar8,uVar9);
            iVar3 = iVar5;
            iVar11 = iVar4;
          }
        }
        if (1 < *(int *)(lVar8 + 0x10)) {
          lVar10 = FUN_01992db0(param_2,lVar8,0,0xffffffff,0,0);
          (**(code **)(*local_30 + 0x100))(local_30,&local_38,&PTR_DAT_0128f488);
          if (local_38 != 0) {
            FUN_017ff510(lVar10,local_38);
          }
          (**(code **)(*local_30 + 0x100))(local_30,&local_40,L"groupid");
          if (local_40 != 0) {
            FUN_017ff590(lVar10,local_40);
          }
          (**(code **)(*local_30 + 0x100))(local_30,&local_60,&DAT_0128f4b8);
          uVar1 = FUN_0043fed0(local_60,0);
          *(undefined1 *)(lVar10 + 0x3d9) = uVar1;
          FUN_01284390(lVar10,local_30);
          *(undefined1 *)(lVar10 + 0x3db) = *(undefined1 *)(lVar10 + 0x3da);
        }
        FUN_00410f20(lVar8);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  FUN_00410f20(plVar7);
  FUN_00414560(&local_60,2);
  FUN_0041b800(&local_50);
  FUN_00414560(&local_48,3);
  FUN_0041b800(&local_30);
  FUN_0041b800(local_res8);
  return;
}

