/* Ghidra address: 017d0c90 */
/* Ghidra symbol: FUN_017d0c90 */


void FUN_017d0c90(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                 undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  ulonglong in_stack_ffffffffffffff68;
  longlong local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40 [3];
  
  local_50 = 0;
  local_48 = 0;
  iVar8 = *(int *)(param_1 + 0x2d8);
  iVar6 = 1;
  local_68 = param_2;
  if (0 < iVar8) {
    do {
      lVar4 = FUN_017ff620(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar6 * 8) + 0x128));
      if (lVar4 == 0) {
        lVar4 = (longlong)iVar6;
        plVar1 = *(longlong **)
                  (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128);
        sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
        if ((((sVar3 == 0xf) ||
             (plVar1 = *(longlong **)
                        (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
             sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0x10)) ||
            (plVar1 = *(longlong **)
                       (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
            sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xd9)) ||
           (((plVar1 = *(longlong **)
                        (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
             sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xda ||
             (plVar1 = *(longlong **)
                        (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
             sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xa4)) ||
            ((plVar1 = *(longlong **)
                        (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
             sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xa6 ||
             (plVar1 = *(longlong **)
                        (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
             sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xa7)))))) {
          plVar1 = *(longlong **)
                    (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar6 * 8) +
                    0x128);
          (**(code **)(*plVar1 + 0x288))(plVar1,&local_48);
          lVar4 = (longlong)iVar6;
          plVar1 = *(longlong **)
                    (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128);
          sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
          if (((sVar3 == 0x10) ||
              (plVar1 = *(longlong **)
                         (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
              sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xd9)) ||
             ((plVar1 = *(longlong **)
                         (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
              sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xda ||
              (((plVar1 = *(longlong **)
                           (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
                sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xa4 ||
                (plVar1 = *(longlong **)
                           (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
                sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xa6)) ||
               (plVar1 = *(longlong **)
                          (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
               sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xa7)))))) {
            uVar7 = 1;
          }
          else {
            uVar7 = 2;
          }
          cVar2 = FUN_017d0b70(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) +
                                0x128));
          if (cVar2 != '\0') {
            if (param_3 != 0) {
              in_stack_ffffffffffffff68 = 0;
              local_68 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,3,0,0);
              FUN_004ae7e0(param_3,local_68);
            }
            if (local_68 != 0) {
              uVar5 = FUN_01cc2930(*(undefined8 *)(local_68 + 8),local_48,1,0,
                                   in_stack_ffffffffffffff68 & 0xffffffffffffff00,0,uVar7,0);
              if (param_6 != (longlong *)0x0) {
                FUN_01cc0ae0(uVar5,&local_50);
                (**(code **)(*param_6 + 0x80))(param_6,local_50,uVar5);
              }
              local_40[0] = *(undefined8 **)
                             (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x48)
              ;
              plVar1 = *(longlong **)
                        (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar6 * 8) +
                        0x128);
              sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
              if ((sVar3 == 0xa6) ||
                 (plVar1 = *(longlong **)
                            (*(longlong *)
                              (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar6 * 8) + 0x128),
                 sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0xa7)) {
                uVar5 = 0;
              }
              else {
                uVar5 = *local_40[0];
              }
              FUN_00b909d0(local_40,0x10);
              in_stack_ffffffffffffff68 = param_4;
              FUN_017cfac0(param_1,local_68,local_40[0],uVar5,param_4,param_5,1);
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00414560(&local_50,2);
  return;
}

