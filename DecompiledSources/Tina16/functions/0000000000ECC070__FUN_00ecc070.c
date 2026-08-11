/* Ghidra address: 00ecc070 */
/* Ghidra symbol: FUN_00ecc070 */


void FUN_00ecc070(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong local_res18 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  (**(code **)(*(longlong *)param_1[0xe9] + 0x278))((longlong *)param_1[0xe9]);
  (**(code **)(*(longlong *)param_1[0xea] + 0x278))((longlong *)param_1[0xea]);
  (**(code **)(*(longlong *)param_1[0xe2] + 0x278))((longlong *)param_1[0xe2]);
  (**(code **)(*param_1 + 0x198))(param_1);
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*(longlong *)param_1[0x111] + 0x90))
            ((longlong *)param_1[0x111],param_1[0x11a],plVar5);
  cVar1 = (**(code **)(*(longlong *)param_1[0xf4] + 0x260))((longlong *)param_1[0xf4]);
  if (cVar1 == '\0') {
    if (*(char *)((longlong)param_1 + 0x901) != '\0') {
      while( true ) {
        iVar2 = 0;
        if (local_res18[0] != 0) {
          iVar2 = *(int *)(local_res18[0] + -4);
        }
        if (iVar2 < 2) {
          cVar1 = '\0';
        }
        else {
          iVar2 = 0;
          if (local_res18[0] != 0) {
            iVar2 = *(int *)(local_res18[0] + -4);
          }
          cVar1 = FUN_00ecc050(*(undefined2 *)(local_res18[0] + -2 + (longlong)iVar2 * 2));
        }
        if (cVar1 == '\0') break;
        uVar4 = 0;
        if (local_res18[0] != 0) {
          uVar4 = *(undefined4 *)(local_res18[0] + -4);
        }
        FUN_00416e20(local_res18,uVar4,1);
      }
    }
    FUN_00414b50(&local_30,local_res18[0]);
    iVar2 = (**(code **)(*plVar5 + 0x28))();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_0043e130(local_40,local_30);
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_50,iVar6);
        FUN_0043e130(&local_48,local_50);
        iVar3 = FUN_00416db0(local_40[0],local_48);
        if (iVar3 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_60,iVar6);
          FUN_00ea9ef0(&local_58,local_60);
          (**(code **)(**(longlong **)(param_1[0xe9] + 0x4a0) + 0x78))
                    (*(longlong **)(param_1[0xe9] + 0x4a0),local_58);
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    iVar2 = (**(code **)(*plVar5 + 0x28))();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_70,iVar6);
        FUN_00ea9ef0(&local_68,local_70);
        (**(code **)(**(longlong **)(param_1[0xe9] + 0x4a0) + 0x78))
                  (*(longlong **)(param_1[0xe9] + 0x4a0),local_68);
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00410f20(plVar5);
  iVar2 = (**(code **)(**(longlong **)(param_1[0xe9] + 0x4a0) + 0x28))
                    (*(longlong **)(param_1[0xe9] + 0x4a0));
  if (iVar2 < 1) {
    FUN_00ecbca0(param_1);
    FUN_00414ad0(param_1 + 0x118,param_1[0x119]);
  }
  else {
    FUN_00ea9ef0(&local_78,param_1[0x11e]);
    iVar2 = (**(code **)(**(longlong **)(param_1[0xe9] + 0x4a0) + 0xb0))
                      (*(longlong **)(param_1[0xe9] + 0x4a0),local_78);
    if (iVar2 == -1) {
      (**(code **)(*(longlong *)param_1[0xe9] + 0x268))((longlong *)param_1[0xe9],0);
    }
    else {
      plVar5 = (longlong *)param_1[0xe9];
      FUN_00ea9ef0(&local_80,param_1[0x11e]);
      uVar4 = (**(code **)(*(longlong *)plVar5[0x94] + 0xb0))((longlong *)plVar5[0x94],local_80);
      (**(code **)(*plVar5 + 0x268))(plVar5,uVar4);
    }
    FUN_00eccc30(param_1);
  }
  FUN_00414560(&local_80,9);
  FUN_00414480(&local_30);
  FUN_00414480(local_res18);
  return;
}

