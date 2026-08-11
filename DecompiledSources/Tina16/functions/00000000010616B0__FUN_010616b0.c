/* Ghidra address: 010616b0 */
/* Ghidra symbol: FUN_010616b0 */


void FUN_010616b0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res20;
  undefined *puVar4;
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
  undefined8 local_30 [2];
  
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414480(param_1 + 0x78);
  FUN_00414480(&local_48);
  iVar2 = 0;
  do {
    FUN_0105cf90(param_1,&local_38,1,iVar2);
    FUN_0105cf90(param_1,&local_40,5,iVar2);
    cVar1 = FUN_00440a20(local_38,1);
    if (cVar1 != '\0') {
      FUN_00416cd0(&local_48,3,local_48,local_40,&DAT_01061f8c);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 3);
  (**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_1 + 0x100));
  if (*(int *)(param_1 + 0x68) == 1) {
    FUN_00416cd0(param_1 + 0x78,7,&DAT_01061f9c,*(undefined8 *)(param_1 + 0x78),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x30),
                 *(undefined8 *)(param_1 + 0x80),L"g++.exe",&DAT_01061f9c);
  }
  else {
    FUN_00416cd0(param_1 + 0x78,7,&DAT_01061f9c,*(undefined8 *)(param_1 + 0x78),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x30),
                 *(undefined8 *)(param_1 + 0x80),L"gcc.exe",&DAT_01061f9c);
  }
  FUN_00416ad0(param_1 + 0x78,&DAT_01061f8c);
  FUN_0105e6d0(param_1,&local_50,*(undefined8 *)(param_1 + 0x20),0,0x3b);
  FUN_00416ad0(param_1 + 0x78,local_50);
  FUN_00416ad0(param_1 + 0x78,&DAT_01061f8c);
  FUN_00416cd0(local_30,3,L"Debug\\",local_res20,L".elf");
  puVar4 = &DAT_01061f8c;
  FUN_00416cd0(param_1 + 0x78,4,*(undefined8 *)(param_1 + 0x78),&DAT_01062018,local_30[0],
               &DAT_01061f8c);
  iVar2 = (**(code **)(*param_3 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_3 + 0x18))(param_3,&local_60,iVar3);
      FUN_00441920(&local_58,local_60);
      puVar4 = &DAT_01062048;
      FUN_00416cd0(local_30,4,*(undefined8 *)(param_1 + 0x108),L"\\Debug\\",local_58,&DAT_01062048);
      cVar1 = FUN_00440a20(local_30[0],1);
      if (cVar1 != '\0') {
        (**(code **)(*param_3 + 0x18))(param_3,&local_70,iVar3);
        FUN_00441920(&local_68,local_70);
        puVar4 = &DAT_01062048;
        FUN_00416cd0(param_1 + 0x78,4,*(undefined8 *)(param_1 + 0x78),L"Debug\\",local_68,
                     &DAT_01062048);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00416ad0(param_1 + 0x78,local_48);
  if (*(int *)(param_1 + 0x68) == 1) {
    FUN_00416cd0(&local_38,3,&DAT_0106205c,*(undefined8 *)(param_1 + 0x88),&DAT_01061f9c,puVar4);
    FUN_01059b00(&local_38);
    FUN_00416ad0(param_1 + 0x78,local_38);
    FUN_00416ad0(param_1 + 0x78,&DAT_01061f8c);
    FUN_00416cd0(param_1 + 0x78,4,*(undefined8 *)(param_1 + 0x78),&DAT_01062070,
                 *(undefined8 *)(param_1 + 0x90),L"\\flash_with_bootloader.ld\"");
    FUN_00416ad0(param_1 + 0x78,&DAT_01061f8c);
  }
  else if (*(int *)(param_1 + 0x68) == 3) {
    FUN_00416cd0(&local_38,3,&DAT_0106205c,*(undefined8 *)(param_1 + 0x88),&DAT_01061f9c,puVar4);
    FUN_01059b00(&local_38);
    FUN_00416ad0(param_1 + 0x78,local_38);
    FUN_00416ad0(param_1 + 0x78,&DAT_01061f8c);
    FUN_00416cd0(param_1 + 0x78,4,*(undefined8 *)(param_1 + 0x78),&DAT_01062070,
                 *(undefined8 *)(param_1 + 0x90),L"\\armgcc_s110_nrf51822_xxaa.ld\"");
    FUN_00416ad0(param_1 + 0x78,&DAT_01061f8c);
  }
  (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(param_1 + 0x78));
  FUN_00414480(param_1 + 0x78);
  FUN_00416cd0(param_1 + 0x78,7,&DAT_01061f9c,*(undefined8 *)(param_1 + 0x78),
               *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18),
               *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x30),*(undefined8 *)(param_1 + 0x80)
               ,L"objcopy.exe",&DAT_01061f9c);
  FUN_00416ad0(param_1 + 0x78,&DAT_01061f8c);
  FUN_0105e6d0(param_1,&local_78,*(undefined8 *)(param_1 + 0x28),0,0x3b);
  FUN_00416ad0(param_1 + 0x78,local_78);
  FUN_00416ad0(param_1 + 0x78,&DAT_01061f8c);
  FUN_00416cd0(param_1 + 0x78,5,*(undefined8 *)(param_1 + 0x78),L"Debug\\",local_res20,L".elf",
               &DAT_01061f8c);
  FUN_00416cd0(param_1 + 0x78,5,*(undefined8 *)(param_1 + 0x78),L"Debug\\",local_res20,L".eep",
               &DAT_01061f8c);
  (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(param_1 + 0x78));
  FUN_00414480(param_1 + 0x78);
  FUN_00416cd0(param_1 + 0x78,7,&DAT_01061f9c,*(undefined8 *)(param_1 + 0x78),
               *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18),
               *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x30),*(undefined8 *)(param_1 + 0x80)
               ,L"objcopy.exe",&DAT_01061f9c);
  FUN_00416ad0(param_1 + 0x78,&DAT_01061f8c);
  FUN_0105e6d0(param_1,&local_80,*(undefined8 *)(param_1 + 0x30),0,0x3b);
  FUN_00416ad0(param_1 + 0x78,local_80);
  FUN_00416ad0(param_1 + 0x78,&DAT_01061f8c);
  FUN_00416cd0(param_1 + 0x78,5,*(undefined8 *)(param_1 + 0x78),L"Debug\\",local_res20,L".elf",
               &DAT_01061f8c);
  FUN_00416cd0(param_1 + 0x78,5,*(undefined8 *)(param_1 + 0x78),L"Debug\\",local_res20,L".hex",
               &DAT_01061f8c);
  (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(param_1 + 0x78));
  FUN_00414560(&local_80,0xb);
  FUN_00414480(&local_res20);
  return;
}

