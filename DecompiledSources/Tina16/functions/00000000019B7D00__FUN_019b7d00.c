/* Ghidra address: 019b7d00 */
/* Ghidra symbol: FUN_019b7d00 */


void FUN_019b7d00(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = *param_1;
  local_40 = param_1[1];
  local_38 = param_1[2];
  local_30 = param_1[3];
  if (*(char *)(param_2 + 0x92) == '\0') {
    if (*(char *)(param_2 + 0xb1) == '\0') {
      FUN_00416cd0(&local_50,5,L"\\i(W,",*(undefined8 *)(param_2 + 0x68),&DAT_019b84a0,&DAT_019b84b4
                   ,&DAT_019b84c4);
    }
    else {
      if (*(longlong *)(param_2 + 0x68) == 0) {
        if (*(char *)(param_2 + 0xb4) == '\0') {
          FUN_00414b50(&local_50,&DAT_019b8440);
        }
        else {
          FUN_00414b50(&local_50,&DAT_019b8450);
        }
      }
      else {
        FUN_00414b50(&local_50,*(undefined8 *)(param_2 + 0x68));
      }
      if (*(char *)(param_2 + 0xb2) == '\0') {
        FUN_00416ad0(&local_50,L"(s)=");
      }
      else {
        FUN_00416ad0(&local_50,&DAT_019b8460);
      }
    }
    if (*(char *)(param_2 + 0xb3) == '\0') {
      FUN_00414b50(&local_58,local_50);
      iVar4 = FUN_019b5ce0(local_48,param_2);
      iVar5 = FUN_019b5ce0(local_40,param_2);
      if (iVar4 + iVar5 < 0xfb) {
        FUN_00416ba0(&local_58,local_50,&DAT_019b8524);
        FUN_019b7a60(&local_58,local_48,param_2);
        FUN_00416ad0(&local_58,&DAT_019b8538);
        FUN_019b7a60(&local_58,local_40,param_2);
        FUN_00416ad0(&local_58,&DAT_019b8514);
        if (*PTR_DAT_020052b8 != '\0') {
          FUN_00416ad0(&local_58,L"=\\f(");
          FUN_019b7a60(&local_58,local_38,param_2);
          FUN_00416ad0(&local_58,&DAT_019b8538);
          FUN_019b7a60(&local_58,local_30,param_2);
          FUN_00416ad0(&local_58,&DAT_019b8514);
        }
        (**(code **)(**(longlong **)(param_2 + 0xe38) + 0x78))
                  (*(longlong **)(param_2 + 0xe38),local_58);
      }
      else {
        FUN_00416ba0(&local_88,local_58,&DAT_019b84e8);
        (**(code **)(**(longlong **)(param_2 + 0xe38) + 0x78))
                  (*(longlong **)(param_2 + 0xe38),local_88);
        FUN_019b7b10(local_48,param_2);
        plVar1 = *(longlong **)(param_2 + 0xe38);
        iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
        plVar2 = *(longlong **)(param_2 + 0xe38);
        iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_90,iVar5 + -1);
        FUN_00416ad0(&local_90,L")/(|");
        (**(code **)(*plVar1 + 0x40))(plVar1,iVar4 + -1,local_90);
        FUN_019b7b10(local_40,param_2);
        plVar1 = *(longlong **)(param_2 + 0xe38);
        iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
        plVar2 = *(longlong **)(param_2 + 0xe38);
        iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_98,iVar5 + -1);
        FUN_00416ad0(&local_98,&DAT_019b8514);
        (**(code **)(*plVar1 + 0x40))(plVar1,iVar4 + -1,local_98);
        if (*PTR_DAT_020052b8 != '\0') {
          FUN_00416ba0(&local_a0,local_58,&DAT_019b84e8);
          (**(code **)(**(longlong **)(param_2 + 0xe38) + 0x78))
                    (*(longlong **)(param_2 + 0xe38),local_a0);
          FUN_019b7b10(local_38,param_2);
          plVar1 = *(longlong **)(param_2 + 0xe38);
          iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
          plVar2 = *(longlong **)(param_2 + 0xe38);
          iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
          (**(code **)(*plVar2 + 0x18))(plVar2,&local_a8,iVar5 + -1);
          FUN_00416ad0(&local_a8,L")/(|");
          (**(code **)(*plVar1 + 0x40))(plVar1,iVar4 + -1,local_a8);
          FUN_019b7b10(local_30,param_2);
          plVar1 = *(longlong **)(param_2 + 0xe38);
          iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
          plVar2 = *(longlong **)(param_2 + 0xe38);
          iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
          (**(code **)(*plVar2 + 0x18))(plVar2,&local_b0,iVar5 + -1);
          FUN_00416ad0(&local_b0,&DAT_019b8514);
          (**(code **)(*plVar1 + 0x40))(plVar1,iVar4 + -1,local_b0);
        }
      }
    }
    else {
      FUN_00414b50(&local_58,local_50);
      iVar4 = FUN_019b5ce0(local_48,param_2);
      uVar3 = local_48;
      if (iVar4 < 0xfb) {
        iVar4 = FUN_019b5ce0(local_48,param_2);
        FUN_019b79b0(&local_58,uVar3,0,iVar4 + -1,param_2);
        FUN_00416ad0(&local_50,local_58);
        uVar3 = local_38;
        if (*PTR_DAT_020052b8 == '\0') {
          (**(code **)(**(longlong **)(param_2 + 0xe38) + 0x78))
                    (*(longlong **)(param_2 + 0xe38),local_50);
        }
        else {
          iVar4 = FUN_019b5ce0(local_38,param_2);
          FUN_019b79b0(&local_60,uVar3,0,iVar4 + -1,param_2);
          FUN_00416cd0(&local_80,3,local_50,&DAT_019b8460,local_60);
          (**(code **)(**(longlong **)(param_2 + 0xe38) + 0x78))
                    (*(longlong **)(param_2 + 0xe38),local_80);
        }
      }
      else {
        FUN_00416ba0(local_70,local_58,&DAT_019b84d8);
        (**(code **)(**(longlong **)(param_2 + 0xe38) + 0x78))
                  (*(longlong **)(param_2 + 0xe38),local_70[0]);
        FUN_019b7b10(local_48,param_2);
        if (*PTR_DAT_020052b8 != '\0') {
          FUN_00416ba0(&local_78,local_58,&DAT_019b84d8);
          (**(code **)(**(longlong **)(param_2 + 0xe38) + 0x78))
                    (*(longlong **)(param_2 + 0xe38),local_78);
          FUN_019b7b10(local_38,param_2);
        }
      }
    }
  }
  FUN_00414560(&local_b0,9);
  FUN_00414560(&local_60,3);
  return;
}

