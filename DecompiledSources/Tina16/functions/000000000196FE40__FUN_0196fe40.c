/* Ghidra address: 0196fe40 */
/* Ghidra symbol: FUN_0196fe40 */


void FUN_0196fe40(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  lVar4 = FUN_01810fa0(&DAT_018103d8,1,0);
  uVar1 = FUN_004113d0(param_2,&PTR_FUN_0193aeb8);
  *(undefined1 *)(lVar4 + 0x78) = uVar1;
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_0193aeb8);
  *(bool *)(lVar4 + 0x30) = cVar2 == '\0';
  uVar8 = *(undefined8 *)(param_3 + 8);
  cVar2 = FUN_004113d0(uVar8,&PTR_FUN_01918c28);
  if (cVar2 != '\0') {
    *(undefined8 *)(lVar4 + 0x18) = uVar8;
  }
  FUN_01813180(lVar4,local_40,param_3,0,0);
  uVar8 = *(undefined8 *)(param_2 + 8);
  cVar2 = FUN_004113d0(uVar8,&PTR_FUN_01918c28);
  if (cVar2 != '\0') {
    *(undefined8 *)(lVar4 + 0x18) = uVar8;
  }
  FUN_018113d0(lVar4,local_40[0],param_2);
  FUN_01814860(lVar4,*(undefined8 *)(param_1 + 0xa8));
  FUN_00410f20(lVar4);
  local_4c = 0;
  do {
    iVar3 = (**(code **)(**(longlong **)(param_3 + 0x80) + 0x30))(*(longlong **)(param_3 + 0x80));
    if (iVar3 <= local_4c) {
      FUN_00414560(&local_48,2);
      return;
    }
    plVar5 = (longlong *)
             (**(code **)(**(longlong **)(param_3 + 0x80) + 0x20))
                       (*(longlong **)(param_3 + 0x80),local_4c);
    plVar6 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x1e8))
                       (*(longlong **)(param_1 + 0xe0),plVar5[2]);
    local_4c = local_4c + 1;
    if (plVar6 == (longlong *)0x0) goto LAB_0196ffbe;
    cVar2 = FUN_004113d0(plVar6,&PTR_FUN_019342a8);
    if (cVar2 != '\0') goto LAB_0196ffbe;
    if (*(char *)(param_1 + 0xa7) == '\0') {
      FUN_00414b50(&local_48,plVar5[2]);
      (**(code **)(*plVar5 + 0x50))(plVar5,0);
      plVar6 = (longlong *)0x0;
LAB_0196ffbe:
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)(**(code **)(*plVar5 + -0x30))(*plVar5);
        (**(code **)(*plVar6 + 0x78))(plVar6,0xff,param_2);
        if (plVar5[2] == 0) {
          FUN_01951630(plVar6,0);
          plVar7 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x98) + 0x1e8))
                             (*(longlong **)(param_1 + 0x98),plVar6[2]);
          if (plVar7 == (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x50))(plVar5,plVar6[2]);
          }
          else {
            (**(code **)(*plVar7 + 0x50))(plVar7,0);
            (**(code **)(*plVar5 + 0x50))(plVar5,plVar6[2]);
            FUN_01951630(plVar7,0);
          }
          FUN_0196fd80(param_1,local_48,plVar6[2]);
          cVar2 = FUN_004113d0(plVar5,&PTR_FUN_0191d1a8);
          if (cVar2 != '\0') {
            (**(code **)(*plVar5 + 0x2d0))(plVar5,plVar5[2]);
            FUN_0196d3f0(*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x170),plVar6);
          }
        }
        else {
          (**(code **)(*plVar6 + 0x50))(plVar6,plVar5[2]);
        }
        cVar2 = FUN_004113d0(plVar5,&PTR_FUN_0192bd20);
        if (cVar2 != '\0') {
          lVar4 = plVar5[0x55];
          uVar8 = FUN_0196b2d0(&PTR_FUN_01934910,1,*(undefined8 *)(param_1 + 0xe0));
          FUN_01969b30(plVar6,uVar8);
          plVar7 = (longlong *)plVar6[0x55];
          (**(code **)(*plVar7 + 0x10))(plVar7,lVar4);
          FUN_01951630(plVar7,0);
          FUN_0196fe40(param_1,plVar7,lVar4);
          FUN_004aee30(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x80),lVar4);
        }
      }
      FUN_0196fe40(param_1,plVar6,plVar5);
    }
  } while( true );
}

