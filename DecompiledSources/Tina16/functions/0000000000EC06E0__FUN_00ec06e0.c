/* Ghidra address: 00ec06e0 */
/* Ghidra symbol: FUN_00ec06e0 */


void FUN_00ec06e0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_res10 [3];
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
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(*(longlong *)param_1[0xd8] + 0x278))((longlong *)param_1[0xd8]);
  (**(code **)(*(longlong *)param_1[0xd9] + 0x278))((longlong *)param_1[0xd9]);
  (**(code **)(*(longlong *)param_1[0xf5] + 0x278))((longlong *)param_1[0xf5]);
  (**(code **)(*param_1 + 0x198))(param_1);
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*(longlong *)param_1[0x10a] + 0x90))((longlong *)param_1[0x10a],L"DigitalICs",plVar5)
  ;
  cVar1 = (**(code **)(*(longlong *)param_1[0xdd] + 0x260))((longlong *)param_1[0xdd]);
  if (cVar1 == '\0') {
    FUN_00414b50(&local_30,local_res10[0]);
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
          (**(code **)(**(longlong **)(param_1[0xd8] + 0x4a0) + 0x78))
                    (*(longlong **)(param_1[0xd8] + 0x4a0),local_58);
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
        (**(code **)(**(longlong **)(param_1[0xd8] + 0x4a0) + 0x78))
                  (*(longlong **)(param_1[0xd8] + 0x4a0),local_68);
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00410f20(plVar5);
  iVar2 = (**(code **)(**(longlong **)(param_1[0xd8] + 0x4a0) + 0x28))
                    (*(longlong **)(param_1[0xd8] + 0x4a0));
  if (iVar2 < 1) {
    FUN_00ec0380(param_1);
    FUN_00414ad0(param_1 + 0x10f,param_1[0x110]);
  }
  else {
    FUN_00ea9ef0(&local_78,param_1[0x115]);
    iVar2 = (**(code **)(**(longlong **)(param_1[0xd8] + 0x4a0) + 0xb0))
                      (*(longlong **)(param_1[0xd8] + 0x4a0),local_78);
    if (iVar2 == -1) {
      (**(code **)(*(longlong *)param_1[0xd8] + 0x268))((longlong *)param_1[0xd8],0);
    }
    else {
      plVar5 = (longlong *)param_1[0xd8];
      FUN_00ea9ef0(&local_80,param_1[0x115]);
      uVar4 = (**(code **)(*(longlong *)plVar5[0x94] + 0xb0))((longlong *)plVar5[0x94],local_80);
      (**(code **)(*plVar5 + 0x268))(plVar5,uVar4);
    }
    FUN_00ec1150(param_1);
  }
  FUN_00414560(&local_80,9);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return;
}

