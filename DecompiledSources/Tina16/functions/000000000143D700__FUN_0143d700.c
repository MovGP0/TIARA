/* Ghidra address: 0143d700 */
/* Ghidra symbol: FUN_0143d700 */


void FUN_0143d700(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar9;
  int local_94;
  int local_84;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_50 = 0;
  iVar8 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x10);
  local_94 = 0;
  if (-1 < iVar8 + -1) {
    do {
      plVar5 = (longlong *)
               FUN_00b94e60(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_94);
      cVar2 = FUN_0198a580(plVar5);
      if (((cVar2 == '\b') && (plVar5 != param_2)) && (*(char *)(plVar5[5] + 0x98) == '\x02')) {
        plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        plVar1 = *(longlong **)(*(longlong *)(plVar5[5] + 0x90) + 0xa0);
        (**(code **)(*plVar1 + 0x38))(plVar1,local_60);
        FUN_01b23780(&local_50,local_60[0],plVar7);
        iVar3 = (**(code **)(**(longlong **)
                               (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x438) +
                            0x28))();
        uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
        local_84 = 0;
        if (-1 < iVar3 + -1) {
          do {
            FUN_004b3cf0(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x438),&local_68,
                         local_84);
            iVar4 = (**(code **)(*plVar7 + 0xb0))(plVar7,local_68);
            if (iVar4 == -1) {
              plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x438)
              ;
              (**(code **)(*plVar1 + 0x18))(plVar1,&local_70,local_84);
              (**(code **)(*plVar6 + 0x78))(plVar6,local_70);
            }
            uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
            local_84 = local_84 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if (local_50 != 0) {
          uVar9 = 0;
          FUN_00416cd0(&local_78,3,L"@ Configuration begin",local_50,L".@ Configuration end");
          (**(code **)(*plVar6 + 0x78))(plVar6,local_78);
        }
        (**(code **)(*plVar5 + 0x50))
                  (plVar5,*(undefined8 *)
                           (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210),&local_38
                  );
        FUN_0149ec30(plVar5,plVar6);
        (**(code **)(*plVar5 + 0x50))
                  (plVar5,*(undefined8 *)
                           (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210),local_48)
        ;
        FUN_00b957c0(&local_38,local_48);
        plVar5 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x210);
        in_stack_ffffffffffffff48 = CONCAT44(uVar9,local_2c);
        (**(code **)(*plVar5 + 0x30))(plVar5,local_38,local_34,local_30,in_stack_ffffffffffffff48);
        FUN_00410f20(plVar7);
        FUN_00410f20(plVar6);
      }
      local_94 = local_94 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00414560(&local_78,4);
  FUN_00414480(&local_50);
  return;
}

