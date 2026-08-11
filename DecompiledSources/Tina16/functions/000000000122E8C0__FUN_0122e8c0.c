/* Ghidra address: 0122e8c0 */
/* Ghidra symbol: FUN_0122e8c0 */


void FUN_0122e8c0(longlong param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x7a8) + 0x278))
            (*(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x7a8));
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x848) + 0x298))
            (*(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x848));
  if ((*(short *)(PTR_DAT_020021e8 + 0x1fa8) == 0x41) ||
     (*(short *)(PTR_DAT_020021e8 + 0x1fa8) == 0x49)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x9c8) + 0x260))(*(longlong **)(param_1 + 0x9c8))
    ;
    if (cVar2 == '\x01') {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))
                        (*(longlong **)(param_1 + 0x798));
      if (2 < iVar3) {
        (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),0);
      }
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))(*(longlong **)(param_1 + 0x798))
    ;
    if (iVar3 == 0) {
      *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6) = 0x42;
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))
                        (*(longlong **)(param_1 + 0x798));
      if (iVar3 == 1) {
        *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6) = 0x43;
      }
      else {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))
                          (*(longlong **)(param_1 + 0x798));
        if (iVar3 == 2) {
          *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6) = 0x45;
        }
        else {
          iVar3 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))
                            (*(longlong **)(param_1 + 0x798));
          if (iVar3 == 3) {
            *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6) = 0x49;
          }
        }
      }
    }
  }
  else {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))(*(longlong **)(param_1 + 0x798))
    ;
    if (iVar3 == 0) {
      *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6) = 0x30;
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))
                        (*(longlong **)(param_1 + 0x798));
      if (iVar3 == 1) {
        *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6) = 0x31;
      }
      else {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))
                          (*(longlong **)(param_1 + 0x798));
        if (iVar3 == 2) {
          *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6) = 0x32;
        }
        else {
          iVar3 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))
                            (*(longlong **)(param_1 + 0x798));
          if (iVar3 == 3) {
            *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6) = 0x33;
          }
          else {
            iVar3 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))
                              (*(longlong **)(param_1 + 0x798));
            if (iVar3 == 4) {
              *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6) = 0x34;
            }
            else {
              iVar3 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))
                                (*(longlong **)(param_1 + 0x798));
              if (iVar3 == 5) {
                *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6) = 0x35;
              }
              else {
                iVar3 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))
                                  (*(longlong **)(param_1 + 0x798));
                if (iVar3 == 6) {
                  *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6) = 0x36;
                }
              }
            }
          }
        }
      }
    }
  }
  sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa6);
  if (sVar1 == 0x42) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x988),L"Butterworth");
  }
  else if (sVar1 == 0x43) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x988),L"Chebishev");
  }
  else if (sVar1 == 0x45) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x988),L"Elliptic");
  }
  else if (sVar1 == 0x49) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x988),L"Inverse Chebishev");
  }
  FUN_01229220(param_1);
  return;
}

