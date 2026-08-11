/* Ghidra address: 018c7c00 */
/* Ghidra symbol: FUN_018c7c00 */


void FUN_018c7c00(longlong param_1)

{
  double dVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int local_40;
  int local_3c;
  
  iVar3 = FUN_0196f500();
  local_40 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar5 = FUN_0196f4e0(*(undefined8 *)(param_1 + 0x40),local_40);
      cVar2 = FUN_004113d0(uVar5,&PTR_FUN_01934910);
      if (cVar2 != '\0') {
        lVar6 = FUN_0196f4e0(*(undefined8 *)(param_1 + 0x40),local_40);
        iVar9 = *(int *)(*(longlong *)(lVar6 + 0x248) + 0x10);
        local_3c = 0;
        if (-1 < iVar9 + -1) {
          do {
            while( true ) {
              lVar8 = FUN_004aeac0(*(undefined8 *)(lVar6 + 0x248),local_3c);
              iVar4 = (**(code **)(**(longlong **)(lVar8 + 0x80) + 0x30))
                                (*(longlong **)(lVar8 + 0x80));
              if (iVar4 < 1) break;
              lVar8 = FUN_004aeac0(*(undefined8 *)(lVar6 + 0x248),local_3c);
              plVar7 = (longlong *)
                       (**(code **)(**(longlong **)(lVar8 + 0x80) + 0x20))
                                 (*(longlong **)(lVar8 + 0x80),0);
              dVar1 = (double)plVar7[0x13];
              (**(code **)(*plVar7 + 0xc0))(plVar7,plVar7[0x27]);
              lVar8 = FUN_004aeac0(*(undefined8 *)(lVar6 + 0x248),local_3c);
              (**(code **)(*plVar7 + 200))(plVar7,*(double *)(lVar8 + 0x98) + dVar1);
            }
            local_3c = local_3c + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
      local_40 = local_40 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

