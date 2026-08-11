/* Ghidra address: 017cd2d0 */
/* Ghidra symbol: FUN_017cd2d0 */


void FUN_017cd2d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  iVar8 = *(int *)(param_1 + 0x10);
  iVar7 = 0;
  if (-1 < iVar8 + -1) {
    do {
      plVar5 = (longlong *)FUN_0198d420(param_1,iVar7);
      cVar2 = FUN_0198a580(plVar5);
      if ((cVar2 == '\x04') && (sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5), sVar3 == 0x39)) {
        if (((*(char *)(plVar5[0x35] + 0x70) == '\x02') && (*(char *)(plVar5[0x35] + 0x115) != '\0')
            ) || ((*(char *)(plVar5[0x35] + 0x70) == '\x01' &&
                  (*(char *)(plVar5[0x35] + 0xb0) != '\0')))) {
          puVar6 = (undefined4 *)FUN_004095c0(8);
          lVar1 = plVar5[0x35];
          *puVar6 = *(undefined4 *)(lVar1 + 100);
          iVar4 = FUN_0176a490(lVar1);
          puVar6[1] = *(int *)(lVar1 + 100) + iVar4 + -1;
          FUN_004ae7e0(param_2,puVar6);
          FUN_01b20020(local_40,plVar5,&LAB_017cd454);
          (**(code **)(*param_3 + 0x78))(param_3,local_40[0]);
        }
        lVar1 = plVar5[0x35];
        if (((*(char *)(lVar1 + 0x70) == '\x01') && (*(char *)(lVar1 + 0xb0) == '\0')) &&
           (*(longlong *)(lVar1 + 8) != 0)) {
          FUN_017cd2d0(*(undefined8 *)(lVar1 + 8),param_2,param_3);
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00414480(local_40);
  return;
}

