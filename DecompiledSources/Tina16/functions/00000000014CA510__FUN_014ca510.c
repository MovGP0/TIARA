/* Ghidra address: 014ca510 */
/* Ghidra symbol: FUN_014ca510 */


longlong * FUN_014ca510(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  plVar3 = (longlong *)FUN_0198b200(0,&PTR_FUN_01984d18,1,0);
  (**(code **)(*plVar3 + 0x28))(plVar3,*(undefined4 *)(param_2 + 0x10));
  *(undefined1 *)(plVar3 + 4) = 1;
  plVar4 = (longlong *)FUN_0198d430(param_2);
  uVar5 = FUN_0198d430(plVar3);
  (**(code **)(*plVar4 + 8))(plVar4,uVar5);
  iVar9 = *(int *)(param_2 + 0x10);
  iVar8 = 0;
  if (-1 < iVar9 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(param_2,iVar8);
      if ((plVar4 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar4 + 0x118))(plVar4), cVar1 != '\0')) {
        cVar1 = FUN_0198a580(plVar4);
        if (cVar1 == '\x04') {
          sVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
          if (((sVar2 == 0x39) && (cVar1 = FUN_01d04d40(plVar4), cVar1 != '\0')) &&
             ((cVar1 = (char)plVar4[0x34], cVar1 == '\x01' ||
              ((cVar1 == '\x02' || (cVar1 == '\x04')))))) {
            lVar6 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x39);
            FUN_01cfa490(plVar4,lVar6);
            if ((char)plVar4[0x34] == '\x01') {
              uVar5 = FUN_0176a5d0(&PTR_FUN_017611c0,1,lVar6);
              *(undefined8 *)(lVar6 + 0x1a8) = uVar5;
            }
            else if ((char)plVar4[0x34] == '\x02') {
              uVar5 = FUN_0176c970(&PTR_FUN_01761b48,1,lVar6);
              *(undefined8 *)(lVar6 + 0x1a8) = uVar5;
            }
            else {
              uVar5 = FUN_01776df0(&PTR_FUN_017649b8,1,lVar6);
              *(undefined8 *)(lVar6 + 0x1a8) = uVar5;
            }
            (**(code **)(*(longlong *)plVar4[0x35] + 0x68))
                      ((longlong *)plVar4[0x35],*(undefined8 *)(lVar6 + 0x1a8));
            *(longlong *)(*(longlong *)(lVar6 + 0x1a8) + 0x10) = lVar6;
            *(char *)(lVar6 + 0x1a0) = (char)plVar4[0x34];
            if (((char)plVar4[0x34] == '\x01') && (*(longlong *)(plVar4[0x35] + 8) != 0)) {
              lVar7 = FUN_014ca510(param_1,*(undefined8 *)(plVar4[0x35] + 8),lVar6);
              *(longlong *)(*(longlong *)(lVar6 + 0x1a8) + 8) = lVar7;
              (**(code **)(**(longlong **)(lVar7 + 0x438) + 0x10))
                        (*(longlong **)(lVar7 + 0x438),
                         *(undefined8 *)(*(longlong *)(plVar4[0x35] + 8) + 0x438));
            }
            FUN_017ff5f0(lVar6,param_3);
            FUN_017ff4f0(plVar4,local_40);
            FUN_017ff510(lVar6,local_40[0]);
            *(longlong **)(lVar6 + 0x558) = plVar4;
            *(char *)(lVar6 + 0x560) = (char)plVar4[0xac];
            (**(code **)(*plVar3 + 0x20))(plVar3,lVar6);
          }
          else {
            FUN_017ff600(plVar4,param_3);
            FUN_017ff640(plVar4);
            (**(code **)(*plVar3 + 0x20))(plVar3,plVar4);
          }
        }
        else {
          (**(code **)(*plVar3 + 0x20))(plVar3,plVar4);
        }
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  *(undefined1 *)(plVar3 + 4) = 0;
  FUN_00414480(local_40);
  return plVar3;
}

