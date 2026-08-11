/* Ghidra address: 009d4ed0 */
/* Ghidra symbol: FUN_009d4ed0 */


void FUN_009d4ed0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_c0 = param_1;
  local_b8 = param_2;
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0xb0) != '\0') {
    cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
    if (cVar1 == '\x01') {
      (**(code **)(*local_b8 + 0x150))(local_b8,local_50);
      FUN_004168b0(&local_28,local_50[0]);
      (**(code **)(*local_b8 + 0x180))(local_b8,&local_58);
      FUN_004168b0(&local_30,local_58);
      FUN_009d4de0(auStack_e8,&local_60,*(undefined8 *)(local_c0 + 0x18));
      FUN_00414b50(local_20,local_60);
      iVar2 = FUN_00416db0(local_28,local_20[0]);
      if ((iVar2 != 0) || (local_30 != 0)) {
        if (local_30 == 0) {
          FUN_00414b50(&local_38,L"xmlns");
        }
        else {
          FUN_004168e0(&local_70,local_30);
          (**(code **)(**(longlong **)(local_c0 + 0x18) + 0x288))
                    (*(longlong **)(local_c0 + 0x18),&local_68,local_70);
          iVar2 = FUN_00416420(local_68,0);
          if (iVar2 == 0) {
            FUN_00416ba0(&local_38,L"xmlns:",local_30);
          }
        }
        if (local_38 != 0) {
          plVar3 = (longlong *)FUN_004113f0(local_b8,&PTR_FUN_0090a420);
          FUN_004168e0(&local_78,local_38);
          FUN_004168e0(&local_80,local_28);
          (**(code **)(*plVar3 + 0x348))(plVar3,L"http://www.w3.org/2000/xmlns/",local_78,local_80);
        }
      }
    }
    else {
      cVar1 = (**(code **)(*local_b8 + 0x168))(local_b8);
      if (cVar1 == '\x02') {
        (**(code **)(*local_b8 + 0x150))(local_b8,&local_88);
        FUN_004168b0(&local_28,local_88);
        (**(code **)(*local_b8 + 0x180))(local_b8,&local_90);
        FUN_004168b0(&local_30,local_90);
        if (local_28 != 0) {
          if (local_30 == 0) {
            uVar4 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
            FUN_004134c0(uVar4);
          }
          FUN_004168e0(&local_a0,local_30);
          (**(code **)(*local_b8 + 0x288))(local_b8,&local_98,local_a0);
          FUN_004168b0(&local_40,local_98);
          iVar2 = FUN_00416db0(local_40,local_28);
          if (iVar2 != 0) {
            FUN_00416ba0(&local_38,L"xmlns:",local_30);
            plVar3 = (longlong *)FUN_004113f0(*(undefined8 *)(local_c0 + 0x18),&PTR_FUN_0090a420);
            FUN_004168e0(&local_a8,local_38);
            FUN_004168e0(&local_b0,local_28);
            (**(code **)(*plVar3 + 0x348))
                      (plVar3,L"http://www.w3.org/2000/xmlns/",local_a8,local_b0);
          }
        }
      }
    }
  }
  FUN_004145c0(&local_b0,10);
  FUN_00414480(&local_60);
  FUN_004145c0(&local_58,2);
  FUN_00414560(&local_40,5);
  return;
}

