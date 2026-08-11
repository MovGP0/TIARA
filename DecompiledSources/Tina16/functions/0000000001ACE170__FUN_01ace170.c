/* Ghidra address: 01ace170 */
/* Ghidra symbol: FUN_01ace170 */


undefined8 FUN_01ace170(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  
  cVar1 = FUN_01d2dd00(param_1 + 0xa0,param_2,param_3);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
    iVar5 = 1;
    if (0 < iVar2) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),iVar5 + -1);
        cVar1 = FUN_004113d0(uVar3,&DAT_01cdd500);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                             (*(longlong **)(param_1 + 0xd8),iVar5 + -1);
          cVar1 = (**(code **)(*plVar4 + 0x88))
                            (plVar4,*(undefined8 *)(param_1 + 0x80),param_2,param_3);
          if (cVar1 != '\0') {
            return 1;
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x88))
                      (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x80),param_2,
                       param_3);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x88))
                        (*(longlong **)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x80),param_2,
                         param_3);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0x88))
                          (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0x80),param_2,
                           param_3);
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x88))
                            (*(longlong **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x80),param_2,
                             param_3);
          if (cVar1 == '\0') {
            plVar4 = *(longlong **)(param_1 + 0xf0);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar1 = (**(code **)(*plVar4 + 0x88))
                                  (plVar4,*(undefined8 *)(param_1 + 0x80),param_2,param_3),
               cVar1 == '\0')) {
              plVar4 = *(longlong **)(param_1 + 0xf8);
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar1 = (**(code **)(*plVar4 + 0x88))
                                    (plVar4,*(undefined8 *)(param_1 + 0x80),param_2,param_3),
                 cVar1 == '\0')) {
                iVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))
                                  (*(longlong **)(param_1 + 0xe0));
                iVar5 = 1;
                if (0 < iVar2) {
                  do {
                    plVar4 = (longlong *)
                             (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                                       (*(longlong **)(param_1 + 0xe0),iVar5 + -1);
                    cVar1 = (**(code **)(*plVar4 + 0x88))
                                      (plVar4,*(undefined8 *)(param_1 + 0x80),param_2,param_3);
                    if (cVar1 != '\0') {
                      return 1;
                    }
                    iVar5 = iVar5 + 1;
                    iVar2 = iVar2 + -1;
                  } while (iVar2 != 0);
                }
                uVar3 = 0;
              }
              else {
                uVar3 = 1;
              }
            }
            else {
              uVar3 = 1;
            }
          }
          else {
            uVar3 = 1;
          }
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

