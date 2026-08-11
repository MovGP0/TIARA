/* Ghidra address: 012b4560 */
/* Ghidra symbol: FUN_012b4560 */


void FUN_012b4560(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  local_48 = 0;
  local_40[0] = 0;
  iVar8 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x470) + 0x10);
  iVar7 = 0;
  if (-1 < iVar8 + -1) {
    do {
      plVar4 = (longlong *)
               FUN_004aeac0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x470),iVar7);
      if ((*plVar4 == 0) && (*(char *)((longlong)plVar4 + 0xc) == '\0')) {
        FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1310),0);
      }
      if (*plVar4 == 0) {
        *(undefined1 *)(param_1 + 0x18) = 1;
        FUN_004169a0(local_40,(longlong)plVar4 + 0xc);
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x438);
        iVar3 = (**(code **)(*plVar1 + 0xb8))(plVar1,local_40[0]);
        if (iVar3 == -1) {
          FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1310),0);
        }
        FUN_004b5390(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x438),
                     &local_48,iVar3);
        FUN_00416910((longlong)plVar4 + 0x12f,local_48,0xff);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 8);
        iVar3 = FUN_01b07e10(lVar2,*plVar4);
        uVar6 = *(undefined8 *)(*(longlong *)(lVar2 + 0x2b0) + -8 + (longlong)iVar3 * 8);
        puVar5 = (undefined8 *)
                 FUN_01b05ad0(uVar6,(char)plVar4[1],*(undefined1 *)((longlong)plVar4 + 9),&local_29,
                              &local_2a,&local_2b);
        *(undefined8 *)((longlong)plVar4 + 0x127) = *puVar5;
        FUN_012b4370(*(undefined8 *)(param_1 + 8),uVar6,(char)plVar4[1] + -1);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  uVar6 = FUN_00409570((longlong)
                       (*(int *)(*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x470) + 0x10)
                       * 2));
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  FUN_00414560(&local_48,2);
  return;
}

