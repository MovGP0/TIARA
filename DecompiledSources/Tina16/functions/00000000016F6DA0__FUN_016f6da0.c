/* Ghidra address: 016f6da0 */
/* Ghidra symbol: FUN_016f6da0 */


int FUN_016f6da0(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40 [2];
  short *local_30;
  
  local_48 = 0;
  local_40[0] = 0;
  local_30 = (short *)0x0;
  local_4c = 0;
  if (param_2 != '\0') {
    iVar5 = FUN_019954d0(*(undefined8 *)(param_1 + 0xa0));
    iVar7 = 1;
    if (0 < iVar5) {
      do {
        cVar3 = FUN_017cc990(iVar7,*(undefined8 *)(param_1 + 0x1368));
        if ((cVar3 == '\0') &&
           ((iVar6 = FUN_019954e0(*(undefined8 *)(param_1 + 0xa0)), iVar7 <= iVar6 ||
            (param_2 != '\x02')))) {
          local_4c = local_4c + 1;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if (param_2 != '\0') {
    iVar5 = *(int *)(param_1 + 0x2d8);
    iVar7 = 1;
    if (0 < iVar5) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar7 * 8);
        cVar3 = FUN_0198a580(*(undefined8 *)(lVar1 + 0x128));
        if ((cVar3 == '\x04') && (*(char *)(lVar1 + 5) == '\x02')) {
          uVar2 = *(undefined8 *)(lVar1 + 0x128);
          FUN_01b20020(local_40,uVar2,&LAB_016f7168);
          cVar3 = FUN_017cc9f0(uVar2,local_40[0],*(undefined8 *)(param_1 + 0x1370));
          if (cVar3 == '\0') {
            local_4c = local_4c + 1;
          }
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if (param_3 != '\0') {
    iVar5 = *(int *)(param_1 + 0x2d8);
    iVar7 = 1;
    if (0 < iVar5) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar7 * 8);
        cVar3 = FUN_0198a580(*(undefined8 *)(lVar1 + 0x128));
        if (((cVar3 == '\x04') &&
            ((((**(code **)(**(longlong **)(lVar1 + 0x128) + 0x288))
                         (*(longlong **)(lVar1 + 0x128),&local_30), local_30 == (short *)0x0 ||
              (*local_30 != 0x58)) || (param_2 == '\x01')))) &&
           ((((sVar4 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                                 (*(longlong **)(lVar1 + 0x128)), sVar4 == 0x10 ||
              (sVar4 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                                 (*(longlong **)(lVar1 + 0x128)), sVar4 == 0xd9)) ||
             (sVar4 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                                (*(longlong **)(lVar1 + 0x128)), sVar4 == 0xda)) ||
            (((sVar4 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                                 (*(longlong **)(lVar1 + 0x128)), sVar4 == 0xe ||
              (sVar4 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                                 (*(longlong **)(lVar1 + 0x128)), sVar4 == 0xb)) ||
             (((sVar4 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                                  (*(longlong **)(lVar1 + 0x128)), sVar4 == 0x6e ||
               ((((sVar4 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                                     (*(longlong **)(lVar1 + 0x128)), sVar4 == 0x6e ||
                  (sVar4 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                                     (*(longlong **)(lVar1 + 0x128)), sVar4 == 9)) ||
                 (sVar4 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                                    (*(longlong **)(lVar1 + 0x128)), sVar4 == 0x6b)) ||
                ((sVar4 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                                    (*(longlong **)(lVar1 + 0x128)), sVar4 == 200 ||
                 (sVar4 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                                    (*(longlong **)(lVar1 + 0x128)), sVar4 == 0xd2)))))) ||
              (sVar4 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))
                                 (*(longlong **)(lVar1 + 0x128)), sVar4 == 0xdc)))))))) {
          uVar2 = *(undefined8 *)(lVar1 + 0x128);
          FUN_01b20020(&local_48,uVar2,&LAB_016f7168);
          cVar3 = FUN_017cc9f0(uVar2,local_48,*(undefined8 *)(param_1 + 0x1370));
          if (cVar3 == '\0') {
            local_4c = local_4c + 1;
          }
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_30);
  return local_4c;
}

