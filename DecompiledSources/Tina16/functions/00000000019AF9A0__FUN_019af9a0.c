/* Ghidra address: 019af9a0 */
/* Ghidra symbol: FUN_019af9a0 */


void FUN_019af9a0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int local_6c;
  undefined8 local_68;
  longlong *local_60 [2];
  undefined8 local_50;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  longlong *local_38;
  undefined8 local_30;
  
  local_68 = 0;
  local_60[0] = (longlong *)0x0;
  local_30 = 0;
  local_38 = (longlong *)0x0;
  local_50 = 0;
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x90) + 0xa0) +
                      0x28))();
  local_6c = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_004b3cf0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x90) + 0xa0),
                   &local_30,local_6c);
      FUN_004b5390(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x90) + 0xa0),
                   &local_38,local_6c);
      plVar4 = *(longlong **)(*(longlong *)(param_3[5] + 0x90) + 0xa0);
      iVar3 = (**(code **)(*plVar4 + 0xb8))(plVar4,local_30);
      if (iVar3 == -1) {
        plVar4 = *(longlong **)(*(longlong *)(param_3[5] + 0x90) + 0xa0);
        (**(code **)(*plVar4 + 0x38))(plVar4,&local_50);
        iVar3 = FUN_004170c0(L"@ Configuration begin",local_50,1);
        if (iVar3 + -1 < 1) {
          plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x90) + 0xa0);
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_68,local_6c);
          plVar4 = *(longlong **)(*(longlong *)(param_3[5] + 0x90) + 0xa0);
          (**(code **)(*plVar4 + 0x78))(plVar4,local_68);
        }
        else {
          plVar4 = *(longlong **)(*(longlong *)(param_3[5] + 0x90) + 0xa0);
          iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
          plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x90) + 0xa0);
          (**(code **)(*plVar1 + 0x18))(plVar1,local_60,local_6c);
          (**(code **)(*plVar4 + 200))(plVar4,iVar3 + -1,local_60[0]);
        }
      }
      else {
        FUN_004b5450(*(undefined8 *)(*(longlong *)(param_3[5] + 0x90) + 0xa0),iVar3,local_38);
      }
      local_6c = local_6c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0199e310(param_1,0,1,0);
  (**(code **)(*param_3 + 0x50))(param_3,*(undefined8 *)(param_1 + 0x210),&local_48);
  (**(code **)(**(longlong **)(param_1 + 0x210) + 0x30))
            (*(longlong **)(param_1 + 0x210),local_48,local_44,local_40,local_3c);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(*(longlong *)(param_3[5] + 0x90) + 0xa0));
  (**(code **)(**(longlong **)(param_1 + 0x438) + 0x10))(*(longlong **)(param_1 + 0x438),plVar4);
  FUN_00410f20(plVar4);
  FUN_00414560(&local_68,2);
  FUN_00414480(&local_50);
  FUN_00414560(&local_38,2);
  return;
}

