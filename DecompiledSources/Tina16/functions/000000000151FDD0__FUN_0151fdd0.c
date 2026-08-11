/* Ghidra address: 0151fdd0 */
/* Ghidra symbol: FUN_0151fdd0 */


void FUN_0151fdd0(longlong param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xce8) + 0x260))(*(longlong **)(param_1 + 0xce8));
  if (iVar1 != -1) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xce8) + 0x260))(*(longlong **)(param_1 + 0xce8))
    ;
    if (*(char *)(param_1 + 0xeb9) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x160))(*(longlong **)(param_1 + 0xec8),iVar1)
      ;
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0xe8))
                        (*(longlong **)(param_1 + 0xec8));
      if (iVar1 != iVar2) {
        (**(code **)(**(longlong **)(param_1 + 0xec8) + 0xf0))
                  (*(longlong **)(param_1 + 0xec8),iVar1);
        FUN_010f6af0(param_1,2,0,1);
        if (iVar1 == 1) {
          dVar3 = (double)(**(code **)(**(longlong **)(param_1 + 0xec8) + 0x110))
                                    (*(longlong **)(param_1 + 0xec8));
          dVar3 = 1.0 / dVar3;
          dVar4 = 1.0;
        }
        else {
          dVar3 = (double)(**(code **)(**(longlong **)(param_1 + 0xec8) + 0x110))
                                    (*(longlong **)(param_1 + 0xec8));
          dVar4 = dVar3;
        }
        FUN_01506ac0(param_1,dVar3,dVar4);
        FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),0);
      }
    }
  }
  return;
}

