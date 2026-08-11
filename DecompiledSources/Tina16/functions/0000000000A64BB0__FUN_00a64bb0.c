/* Ghidra address: 00a64bb0 */
/* Ghidra symbol: FUN_00a64bb0 */


void FUN_00a64bb0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [4];
  int local_6c;
  longlong local_68;
  longlong local_60 [8];
  
  local_a0 = 0;
  local_68 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417600(local_60,&DAT_00401390,7);
  FUN_00417600(&local_98,&DAT_00401390,5);
  FUN_00414b50(&local_98,L"transparent");
  FUN_00414b50(&local_90,&DAT_00a65100);
  FUN_00414b50(&local_88,L"repeat");
  FUN_00414b50(&local_80,L"scroll");
  FUN_00414b50(&local_78,L"0% 0%");
  FUN_00a64550(local_res10,local_60,6,&local_6c);
  if (-1 < local_6c + -1) {
    plVar4 = local_60;
    iVar5 = local_6c;
    do {
      iVar2 = FUN_004170c0(L"rgb(",*plVar4,1);
      if (iVar2 < 1) {
        iVar2 = FUN_004170c0(L"rgba(",*plVar4,1);
        if (iVar2 < 1) {
          iVar2 = FUN_004170c0(L"hsla(",*plVar4,1);
          if (iVar2 < 1) {
            iVar2 = FUN_004170c0(L"hsl(",*plVar4,1);
            if (iVar2 < 1) {
              iVar2 = FUN_004170c0(L"url(",*plVar4,1);
              if (0 < iVar2) {
                if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) != 0) {
                  FUN_00a63b70(*(undefined8 *)(param_1 + 0x30),&local_a0,*plVar4);
                  FUN_00414ad0(plVar4,local_a0);
                }
                FUN_00414b50(&local_90,*plVar4);
              }
            }
            else {
              FUN_00414b50(&local_98,*plVar4);
            }
          }
          else {
            FUN_00414b50(&local_98,*plVar4);
          }
        }
        else {
          FUN_00414b50(&local_98,*plVar4);
        }
      }
      else {
        FUN_00414b50(&local_98,*plVar4);
      }
      plVar4 = plVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar3 = FUN_00417840(local_60,&DAT_00401390,7);
  FUN_00a640f0(local_res10[0],uVar3,6,&local_6c);
  if (-1 < local_6c + -1) {
    plVar4 = local_60;
    iVar5 = local_6c;
    do {
      iVar2 = FUN_00416db0(*plVar4,&DAT_00a65100);
      if (iVar2 == 0) {
        FUN_00414b50(&local_90,*plVar4);
        FUN_00414480(plVar4);
      }
      else {
        cVar1 = FUN_00a602d0(*plVar4,1,local_70);
        if (cVar1 != '\0') {
          FUN_00414b50(&local_98,*plVar4);
          FUN_00414480(plVar4);
        }
      }
      plVar4 = plVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (**(code **)**(undefined8 **)(param_1 + 0x30))
            (*(undefined8 **)(param_1 + 0x30),L"background-color",local_98,
             *(undefined1 *)(param_1 + 0x58));
  (**(code **)**(undefined8 **)(param_1 + 0x30))
            (*(undefined8 **)(param_1 + 0x30),L"background-image",local_90,
             *(undefined1 *)(param_1 + 0x58));
  if (-1 < local_6c + -1) {
    plVar4 = local_60;
    iVar5 = local_6c;
    do {
      iVar2 = FUN_004170c0(L"repeat",*plVar4,1);
      if (0 < iVar2) {
        FUN_00414b50(&local_88,*plVar4);
        FUN_00414480(plVar4);
      }
      plVar4 = plVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (**(code **)**(undefined8 **)(param_1 + 0x30))
            (*(undefined8 **)(param_1 + 0x30),L"background-repeat",local_88,
             *(undefined1 *)(param_1 + 0x58));
  if (-1 < local_6c + -1) {
    plVar4 = local_60;
    iVar5 = local_6c;
    do {
      iVar2 = FUN_00416db0(*plVar4,L"fixed");
      if (iVar2 == 0) {
LAB_00a64f37:
        FUN_00414b50(&local_80,*plVar4);
        FUN_00414480(plVar4);
      }
      else {
        iVar2 = FUN_00416db0(*plVar4,L"scroll");
        if (iVar2 == 0) goto LAB_00a64f37;
      }
      plVar4 = plVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (**(code **)**(undefined8 **)(param_1 + 0x30))
            (*(undefined8 **)(param_1 + 0x30),L"background-attachment",local_80,
             *(undefined1 *)(param_1 + 0x58));
  iVar5 = 0;
  FUN_00414480(&local_68);
  local_6c = local_6c + -1;
  if (-1 < local_6c) {
    plVar4 = local_60 + local_6c;
    do {
      if (*plVar4 != 0) {
        FUN_00416cd0(&local_68,3,*plVar4,&DAT_00a652c0,local_68);
        iVar5 = iVar5 + 1;
        if (1 < iVar5) break;
      }
      local_6c = local_6c + -1;
      plVar4 = plVar4 + -1;
    } while (local_6c != -1);
  }
  if (local_68 != 0) {
    FUN_00414b50(&local_78,local_68);
  }
  (**(code **)**(undefined8 **)(param_1 + 0x30))
            (*(undefined8 **)(param_1 + 0x30),L"background-position",local_78,
             *(undefined1 *)(param_1 + 0x58));
  FUN_00414480(&local_a0);
  FUN_00417840(&local_98,&DAT_00401390,5);
  FUN_00414480(&local_68);
  FUN_00417840(local_60,&DAT_00401390,7);
  FUN_00414480(local_res10);
  return;
}

