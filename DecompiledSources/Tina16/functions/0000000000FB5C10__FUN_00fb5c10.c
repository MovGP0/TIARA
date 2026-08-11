/* Ghidra address: 00fb5c10 */
/* Ghidra symbol: FUN_00fb5c10 */


void FUN_00fb5c10(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  uVar4 = FUN_00b90090(*(undefined8 *)(param_1 + 0x778));
  *(undefined8 *)(param_1 + 0xc10) = uVar4;
  uVar4 = FUN_00b90090(*(undefined8 *)(param_1 + 0x780));
  *(undefined8 *)(param_1 + 0xc18) = uVar4;
  FUN_0043e130(local_20,*(undefined8 *)(param_1 + 0xd70));
  iVar1 = FUN_004170c0(L"ATTINY",local_20[0],1);
  if (iVar1 == 0) {
    FUN_0043e130(&local_50,*(undefined8 *)(param_1 + 0xd70));
    iVar1 = FUN_004170c0(L"ATMEGA",local_50,1);
    if (iVar1 == 0) {
      FUN_0043e130(&local_58,*(undefined8 *)(param_1 + 0xd70));
      iVar1 = FUN_004170c0(&LAB_00fb6210,local_58,1);
      if (iVar1 == 0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))
                          (*(longlong **)(param_1 + 0x710));
        *(undefined4 *)(param_1 + 0xc08) = uVar2;
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))
                          (*(longlong **)(param_1 + 0x6d0));
        *(undefined4 *)(param_1 + 0xc04) = uVar2;
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_80);
        uVar2 = FUN_0043fc00(local_80);
        *(undefined4 *)(param_1 + 0xbf4) = uVar2;
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                          (*(longlong **)(param_1 + 0x6e0));
        *(undefined4 *)(param_1 + 0xbf0) = uVar2;
        iVar1 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x260))
                          (*(longlong **)(param_1 + 2000));
        FUN_00fb57e0(param_1,(double)*(int *)(param_1 + 0x818),1.0 / *(double *)(param_1 + 0xd60),
                     (double)*(int *)(param_1 + 0x840 + (longlong)iVar1 * 4));
        lVar3 = FUN_0040c770();
        *(double *)(param_1 + 0xc10) = (double)lVar3;
        goto code_r0x00fb612d;
      }
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8))
    ;
    *(undefined4 *)(param_1 + 0xc04) = uVar2;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8))
    ;
    if ((((iVar1 == 5) || (iVar1 == 6)) || (iVar1 == 7)) || ((iVar1 == 0xe || (iVar1 == 0xf)))) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))
                        (*(longlong **)(param_1 + 0x798));
      *(undefined4 *)(param_1 + 0xc08) = uVar2;
    }
    else if ((((iVar1 == 1) || ((iVar1 == 2 || (iVar1 == 3)))) || (iVar1 == 8)) ||
            (((iVar1 == 9 || (iVar1 == 10)) || (iVar1 == 0xb)))) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x260))
                        (*(longlong **)(param_1 + 0x7a0));
      *(undefined4 *)(param_1 + 0xc08) = uVar2;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x260))
                        (*(longlong **)(param_1 + 0x7c8));
      *(undefined4 *)(param_1 + 0xc08) = uVar2;
    }
    if (((iVar1 == 8) || (iVar1 == 10)) || ((iVar1 == 0xc || (iVar1 == 0xe)))) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x808),&local_60);
      uVar2 = FUN_0043fc00(local_60);
      *(undefined4 *)(param_1 + 0xc00) = uVar2;
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_68);
      uVar2 = FUN_0043fc00(local_68);
      *(undefined4 *)(param_1 + 0xbf4) = uVar2;
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_70);
    uVar2 = FUN_0043fc00(local_70);
    *(undefined4 *)(param_1 + 0xbf8) = uVar2;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7b8),&local_78);
    uVar2 = FUN_0043fc00(local_78);
    *(undefined4 *)(param_1 + 0xbfc) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0))
    ;
    *(undefined4 *)(param_1 + 0xbf0) = uVar2;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x790) + 0x260))(*(longlong **)(param_1 + 0x790))
    ;
    *(undefined4 *)(param_1 + 0xc08) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x260))(*(longlong **)(param_1 + 0x7b0))
    ;
    *(undefined4 *)(param_1 + 0xc04) = uVar2;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x260))(*(longlong **)(param_1 + 0x7b0))
    ;
    if (iVar1 == 1) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_28);
      uVar2 = FUN_0043fc00(local_28);
      *(undefined4 *)(param_1 + 0xbf8) = uVar2;
    }
    if (iVar1 == 2) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_30);
      uVar2 = FUN_0043fc00(local_30);
      *(undefined4 *)(param_1 + 0xbf4) = uVar2;
    }
    if (iVar1 == 3) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_38);
      uVar2 = FUN_0043fc00(local_38);
      *(undefined4 *)(param_1 + 0xbf4) = uVar2;
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_40);
      uVar2 = FUN_0043fc00(local_40);
      *(undefined4 *)(param_1 + 0xbf8) = uVar2;
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7b8),&local_48);
    uVar2 = FUN_0043fc00(local_48);
    *(undefined4 *)(param_1 + 0xbfc) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708))
    ;
    *(undefined4 *)(param_1 + 0xbf0) = uVar2;
  }
code_r0x00fb612d:
  FUN_00414560(&local_80,5);
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_48,5);
  FUN_00414480(local_20);
  return;
}

