/* Ghidra address: 018bc4d0 */
/* Ghidra symbol: FUN_018bc4d0 */


void FUN_018bc4d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  
  local_48 = 0;
  local_40 = 0;
  local_30 = (longlong *)0x0;
  local_38 = 0;
  iVar2 = FUN_01803a10();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_018039f0(param_2,iVar7);
      lVar3 = FUN_018bc4b0(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(lVar3 + 0x20));
      if (lVar3 == 0) {
        lVar3 = FUN_018039f0(param_2,iVar7);
        lVar4 = FUN_018039f0(param_2,iVar7);
        FUN_00416cd0(&local_40,3,*(undefined8 *)(lVar3 + 0x20),&DAT_018bc768,
                     *(undefined8 *)(lVar4 + 0x30));
        plVar5 = (longlong *)FUN_01814490(*(undefined8 *)(param_1 + 0x78),param_3,local_40,1);
      }
      else {
        lVar4 = FUN_018039f0(param_2,iVar7);
        FUN_00416cd0(&local_48,3,*(undefined8 *)(lVar3 + 0x100),&DAT_018bc768,
                     *(undefined8 *)(lVar4 + 0x30));
        plVar5 = (longlong *)FUN_01814490(*(undefined8 *)(param_1 + 0x78),param_3,local_48,1);
        (**(code **)(*plVar5 + 0x50))(plVar5,*(undefined8 *)(lVar3 + 0x10));
        FUN_018b9ee0(*(undefined8 *)(param_1 + 0xa0),plVar5,1);
      }
      cVar1 = FUN_004113d0(plVar5,&PTR_FUN_01925478);
      if (cVar1 != '\0') {
        FUN_019645b0(plVar5);
      }
      uVar6 = FUN_0041b800(&local_30);
      cVar1 = FUN_00452370(plVar5,&LAB_018bc76c,uVar6);
      if (cVar1 != '\0') {
        (**(code **)(*local_30 + 0x20))(local_30,&local_38,2);
        if (local_38 != 0) {
          uVar6 = FUN_01872d10();
          FUN_01873140(uVar6,&local_38,local_30);
        }
        FUN_0041b800(&local_30);
      }
      cVar1 = FUN_0197f9a0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x48),plVar5);
      if (cVar1 == '\0') {
        (**(code **)(*plVar5 + 0xc0))(plVar5,param_3);
        lVar3 = FUN_018039f0(param_2,iVar7);
        plVar5[0x29] = lVar3;
        uVar6 = FUN_018039f0(param_2,iVar7);
        FUN_018bc4d0(param_1,uVar6,plVar5);
        (**(code **)(*plVar5 + 0x248))(plVar5);
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_48,3);
  FUN_0041b800(&local_30);
  return;
}

