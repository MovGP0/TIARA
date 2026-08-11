/* Ghidra address: 018ca000 */
/* Ghidra symbol: FUN_018ca000 */


void FUN_018ca000(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  int local_2c;
  
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40) + 0x288) == '\0') {
    iVar6 = *(int *)(param_2 + 0x10);
    local_2c = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar5 = FUN_004aeac0(param_2,local_2c);
        plVar1 = *(longlong **)(lVar5 + 600);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x2f8))(plVar1);
          *(undefined4 *)(lVar5 + 0x228) = 1;
          *(undefined4 *)(lVar5 + 0x22c) = 1;
          FUN_019694e0(lVar5,1);
          *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x10) = *(undefined4 *)(lVar5 + 0x228);
          *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x14) = *(undefined4 *)(lVar5 + 0x22c);
          bVar3 = true;
          FUN_018c7b00(*(undefined8 *)(param_1 + 0x50),lVar5);
          while (cVar4 = (**(code **)(**(longlong **)(lVar5 + 600) + 0x310))
                                   (*(longlong **)(lVar5 + 600)), cVar4 == '\0') {
            if (bVar3) {
              (**(code **)(**(longlong **)(param_1 + 0x50) + 0x58))
                        (*(longlong **)(param_1 + 0x50),*(undefined8 *)(lVar5 + 0x210));
              FUN_018cb440(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(lVar5 + 0x210));
            }
            lVar2 = *(longlong *)(lVar5 + 0x220);
            if (lVar2 != 0) {
              if (bVar3) {
                FUN_018c7d80(*(undefined8 *)(param_1 + 0x50),lVar5,lVar2,0,1);
              }
              else {
                FUN_018c8420(*(undefined8 *)(param_1 + 0x50),lVar5,lVar2,0,0);
              }
            }
            bVar3 = false;
            *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x10) = *(undefined4 *)(lVar5 + 0x228);
            *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x14) = *(undefined4 *)(lVar5 + 0x22c);
            (**(code **)(**(longlong **)(param_1 + 0x50) + 0x58))
                      (*(longlong **)(param_1 + 0x50),lVar5);
            FUN_018c8920(*(undefined8 *)(param_1 + 0x50),lVar5);
            *(int *)(lVar5 + 0x228) = *(int *)(lVar5 + 0x228) + 1;
            *(int *)(lVar5 + 0x22c) = *(int *)(lVar5 + 0x22c) + 1;
            FUN_018ca000(param_1,*(undefined8 *)(lVar5 + 0x208));
            if (*(char *)(lVar5 + 0x270) != '\0') {
              (**(code **)(**(longlong **)(param_1 + 0x50) + 0x58))
                        (*(longlong **)(param_1 + 0x50),*(undefined8 *)(lVar5 + 0x218));
            }
            (**(code **)(**(longlong **)(lVar5 + 600) + 0x300))(*(longlong **)(lVar5 + 600));
            if (((*(int *)(lVar5 + 0x278) != 0) &&
                (*(int *)(lVar5 + 0x278) < *(int *)(lVar5 + 0x228))) ||
               (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40) + 0x288) != '\0'))
            break;
          }
          if (*(longlong *)(lVar5 + 0x220) != 0) {
            FUN_018c7fc0(*(undefined8 *)(param_1 + 0x50),*(longlong *)(lVar5 + 0x220),0);
          }
          if ((!bVar3) &&
             (FUN_018cb510(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(lVar5 + 0x210)),
             *(char *)(lVar5 + 0x270) == '\0')) {
            (**(code **)(**(longlong **)(param_1 + 0x50) + 0x58))
                      (*(longlong **)(param_1 + 0x50),*(undefined8 *)(lVar5 + 0x218));
          }
          if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40) + 0x288) != '\0') {
            return;
          }
        }
        local_2c = local_2c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

