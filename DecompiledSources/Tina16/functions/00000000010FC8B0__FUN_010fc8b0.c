/* Ghidra address: 010fc8b0 */
/* Ghidra symbol: FUN_010fc8b0 */


void FUN_010fc8b0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  short *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_60 = 0;
  local_40 = (short *)0x0;
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  local_30[0] = 0;
  FUN_010fcfd0(param_1[0x166]);
  iVar2 = (**(code **)(*(longlong *)param_1[0x161] + 0x28))();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*(longlong *)param_1[0x161] + 0x18))((longlong *)param_1[0x161],local_30,iVar6);
      FUN_0044f900(&PTR_DAT_010fcb58,local_30[0]);
      (**(code **)(*(longlong *)param_1[0x161] + 0x18))((longlong *)param_1[0x161],&local_38,iVar6);
      FUN_0044f900(&LAB_010fcb6c,local_38);
      uVar4 = (**(code **)(*(longlong *)param_1[0x161] + 0x30))((longlong *)param_1[0x161],iVar6);
      iVar3 = (**(code **)(**(longlong **)(param_1[0x166] + 8) + 0xc0))
                        (*(longlong **)(param_1[0x166] + 8),uVar4);
      if (iVar3 == -1) {
        uVar4 = (**(code **)(*param_1 + 0x458))(param_1);
        uVar5 = (**(code **)(*(longlong *)param_1[0x161] + 0x30))((longlong *)param_1[0x161],iVar6);
        cVar1 = FUN_00f1e290(uVar4,uVar5);
        if ((cVar1 == '\0') &&
           (((**(code **)(*(longlong *)param_1[0x161] + 0x18))
                       ((longlong *)param_1[0x161],&local_40,iVar6), *local_40 != 0x56 ||
            ((**(code **)(*(longlong *)param_1[0x161] + 0x18))
                       ((longlong *)param_1[0x161],&local_48,iVar6),
            *(short *)(local_48 + 2) != 0x50)))) {
          (**(code **)(*(longlong *)param_1[0x161] + 0x18))
                    ((longlong *)param_1[0x161],&local_50,iVar6);
          iVar3 = FUN_0044f900(&PTR_DAT_010fcb58,local_50);
          if (iVar3 != 1) {
            (**(code **)(*(longlong *)param_1[0x161] + 0x18))
                      ((longlong *)param_1[0x161],&local_58,iVar6);
            iVar3 = FUN_0044f900(&LAB_010fcb6c,local_58);
            if (iVar3 != 1) goto LAB_010fcb08;
          }
        }
        (**(code **)(*(longlong *)param_1[0x161] + 0x18))
                  ((longlong *)param_1[0x161],&local_60,iVar6);
        uVar4 = (**(code **)(*(longlong *)param_1[0x161] + 0x30))((longlong *)param_1[0x161],iVar6);
        (**(code **)(**(longlong **)(param_1[0x166] + 8) + 0x80))
                  (*(longlong **)(param_1[0x166] + 8),local_60,uVar4);
      }
LAB_010fcb08:
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_60,7);
  return;
}

