/* Ghidra address: 012b47a0 */
/* Ghidra symbol: FUN_012b47a0 */


void FUN_012b47a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
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
      plVar5 = (longlong *)
               FUN_004aeac0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x470),iVar7);
      if (*plVar5 == 0) {
        FUN_004169a0(local_40,(longlong)plVar5 + 0xc);
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x438);
        uVar3 = (**(code **)(*plVar1 + 0xb8))(plVar1,local_40[0]);
        FUN_004169a0(&local_48,(longlong)plVar5 + 0x12f);
        FUN_004b5450(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x438),uVar3
                     ,local_48);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 8);
        iVar4 = FUN_01b07e10(lVar2,*plVar5);
        puVar6 = (undefined8 *)
                 FUN_01b05ad0(*(undefined8 *)
                               (*(longlong *)(lVar2 + 0x2b0) + -8 + (longlong)iVar4 * 8),
                              (char)plVar5[1],*(undefined1 *)((longlong)plVar5 + 9),&local_29,
                              &local_2a,&local_2b);
        *puVar6 = *(undefined8 *)((longlong)plVar5 + 0x127);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_004095f0(*(undefined8 *)(param_1 + 0x10),
               (longlong)
               (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) + 0x470) +
                        0x10) * 2));
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(char *)(param_1 + 0x18) != '\0')) {
    FUN_01440040(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa0),
                 *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1310),0);
    FUN_019af810(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa0),*(undefined1 *)(param_1 + 0x1a))
    ;
  }
  FUN_00414560(&local_48,2);
  return;
}

