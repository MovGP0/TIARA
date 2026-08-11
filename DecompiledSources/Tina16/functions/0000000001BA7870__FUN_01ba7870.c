/* Ghidra address: 01ba7870 */
/* Ghidra symbol: FUN_01ba7870 */


void FUN_01ba7870(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  plVar1 = *(longlong **)(param_1 + 0x730);
  FUN_01b22c50(&local_20,5);
  FUN_00724420(plVar1,local_20);
  cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar2 != '\0') {
    FUN_00724270(plVar1,&local_28);
    (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0xd8))(*(longlong **)(param_1 + 0x7b8),local_28)
    ;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748))
    ;
    if (iVar3 == 0) {
      FUN_017002a0(*(undefined8 *)(param_1 + 0x778),*(undefined8 *)(param_1 + 0x7b8),1);
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                        (*(longlong **)(param_1 + 0x748));
      if (iVar3 == 1) {
        FUN_017002a0(*(undefined8 *)(param_1 + 0x780),*(undefined8 *)(param_1 + 0x7b8),2);
      }
      else {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                          (*(longlong **)(param_1 + 0x748));
        if (iVar3 == 2) {
          FUN_017002a0(*(undefined8 *)(param_1 + 0x788),*(undefined8 *)(param_1 + 0x7b8),3);
        }
        else {
          iVar3 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                            (*(longlong **)(param_1 + 0x748));
          if (iVar3 == 3) {
            FUN_017002a0(*(undefined8 *)(param_1 + 0x790),*(undefined8 *)(param_1 + 0x7b8),4);
          }
          else {
            iVar3 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                              (*(longlong **)(param_1 + 0x748));
            if (iVar3 == 4) {
              FUN_017002a0(*(undefined8 *)(param_1 + 0x798),*(undefined8 *)(param_1 + 0x7b8),5);
            }
            else {
              iVar3 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                                (*(longlong **)(param_1 + 0x748));
              if (iVar3 == 5) {
                FUN_017002a0(*(undefined8 *)(param_1 + 0x7a0),*(undefined8 *)(param_1 + 0x7b8),6);
              }
              else {
                iVar3 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                                  (*(longlong **)(param_1 + 0x748));
                if (iVar3 == 6) {
                  FUN_017002a0(*(undefined8 *)(param_1 + 0x7a8),*(undefined8 *)(param_1 + 0x7b8),7);
                }
                else {
                  FUN_017002a0(*(undefined8 *)(param_1 + 0x7b0),*(undefined8 *)(param_1 + 0x7b8),8);
                }
              }
            }
          }
        }
      }
    }
    FUN_00724270(plVar1,&local_38);
    FUN_00441920(&local_30,local_38);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x700),local_30);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0xb8),0xff000008);
    *(undefined1 *)(param_1 + 0x7c0) = 1;
  }
  FUN_00414480(&local_38);
  FUN_00414480(&local_30);
  FUN_00414480(&local_28);
  FUN_00414480(&local_20);
  return;
}

