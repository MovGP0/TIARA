/* Ghidra address: 0095a320 */
/* Ghidra symbol: FUN_0095a320 */


void FUN_0095a320(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [36];
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_40;
  int local_3c;
  undefined8 *local_38;
  longlong local_30;
  undefined1 local_24 [4];
  longlong *local_20;
  
  local_50 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  *param_3 = 1;
  *param_2 = 1;
  iVar3 = (**(code **)**(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x30))();
  local_64 = iVar3 + -1;
  local_3c = 0;
  if (-1 < local_64) {
    do {
      local_64 = iVar3;
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x30);
      local_30 = (**(code **)(*plVar1 + 0x28))(plVar1,local_3c);
      if (*(char *)(local_30 + 0x38) == '\x03') {
        if (*(longlong *)(local_30 + 0x30) == 0) {
          *param_2 = 0;
          cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                            (*(longlong **)(param_1 + 0x70),0x74,local_30);
          if (cVar2 == '\0') {
            *param_3 = 0;
            break;
          }
        }
        else if (*(char *)(*(longlong *)(local_30 + 0x30) + 0x29) == '\0') {
          local_20 = (longlong *)FUN_00410e60(&PTR_FUN_008f5158,1);
          FUN_008f9470(local_20,1);
          *(undefined1 *)(local_20 + 2) = 2;
          iVar3 = (**(code **)(**(longlong **)(*(longlong *)(local_30 + 0x30) + 0x38) + 0x20))();
          local_40 = 0;
          if (-1 < iVar3 + -1) {
            do {
              plVar1 = *(longlong **)(*(longlong *)(local_30 + 0x30) + 0x38);
              lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,local_40);
              if (*(char *)(lVar4 + 0x10) == '\x03') {
                plVar1 = *(longlong **)(*(longlong *)(local_30 + 0x30) + 0x38);
                local_38 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1,local_40);
                if (*(char *)((longlong)local_38 + 0x29) == '\x01') {
                  (**(code **)*local_38)(local_38,&local_58);
                  cVar2 = (**(code **)(*local_20 + 0xb0))(local_20,local_58,local_24);
                  if (cVar2 == '\0') {
                    (**(code **)*local_38)(local_38,&local_60);
                    (**(code **)(*local_20 + 0x68))(local_20,local_60);
                  }
                  else {
                    *param_2 = 0;
                    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                      (*(longlong **)(param_1 + 0x70),0x12,local_30);
                    if (cVar2 == '\0') {
                      *param_3 = 0;
                      goto LAB_0095a5e2;
                    }
                  }
                }
                else {
                  *param_2 = 0;
                  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                    (*(longlong **)(param_1 + 0x70),0x74,local_30);
                  if (cVar2 == '\0') {
                    *param_3 = 0;
                    goto LAB_0095a5e2;
                  }
                }
              }
              else {
                *param_2 = 0;
                cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                                  (*(longlong **)(param_1 + 0x70),0x74,local_30);
                if (cVar2 == '\0') {
                  *param_3 = 0;
LAB_0095a5e2:
                  FUN_0095a660(0,local_50);
                  goto LAB_0095a640;
                }
              }
              local_40 = local_40 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          FUN_00410f20(local_20);
        }
        else {
          *param_2 = 0;
          cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
                            (*(longlong **)(param_1 + 0x70),0x74,local_30,0);
          if (cVar2 == '\0') {
            *param_3 = 0;
            break;
          }
        }
      }
      local_3c = local_3c + 1;
      local_64 = local_64 + -1;
      iVar3 = local_64;
    } while (local_64 != 0);
  }
LAB_0095a640:
  FUN_004145c0(&local_60,2);
  return;
}

