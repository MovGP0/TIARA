/* Ghidra address: 017c7750 */
/* Ghidra symbol: FUN_017c7750 */


void FUN_017c7750(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  char *pcVar6;
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
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  char *local_20;
  
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  cVar2 = FUN_0198a580(param_2);
  if ((cVar2 == '\x06') && (cVar2 = (**(code **)(*param_2 + 0x278))(param_2), cVar2 != '\0')) {
    (**(code **)(*param_2 + 0x288))(param_2,&local_38);
    FUN_01b24ac0(&local_30,local_38);
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))(*(longlong **)(param_1 + 0x68),local_30);
  }
  cVar2 = FUN_0198a580(param_2);
  if (cVar2 != '\x04') goto code_r0x017c7c59;
  uVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
  local_20 = (char *)FUN_01cfd6a0(param_2);
  cVar2 = FUN_017c7700(param_1,uVar3);
  if (cVar2 == '\0') goto code_r0x017c7c59;
  uVar5 = (ulonglong)uVar3;
  if (0x62 < uVar5) {
    if (uVar5 < 0x6b) {
      if (uVar5 != 0x6a) {
        if (uVar5 == 0x65) goto LAB_017c7b47;
        if (uVar5 != 0x66) goto code_r0x017c7c59;
      }
LAB_017c7b04:
      (**(code **)(*param_2 + 0x288))(param_2,&local_78);
      FUN_01b24ac0(&local_70,local_78);
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))(*(longlong **)(param_1 + 0x68),local_70)
      ;
    }
    else {
      if (uVar5 == 0x77) goto LAB_017c796b;
      if (uVar5 != 0xa4) goto code_r0x017c7c59;
LAB_017c7b47:
      if ((uVar3 == 0xa4) &&
         (pcVar6 = (char *)FUN_01cfde70(param_2,4,0,&local_22,&local_23,&local_21), *pcVar6 == '\0')
         ) {
        (**(code **)(*param_2 + 0x288))(param_2,&local_88);
        FUN_01b24ac0(&local_80,local_88);
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
                  (*(longlong **)(param_1 + 0x68),local_80);
      }
      else {
        (**(code **)(*param_2 + 0x288))(param_2,&local_98);
        FUN_00416ad0(&local_98,L"_Ch1");
        FUN_01b24ac0(&local_90,local_98);
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
                  (*(longlong **)(param_1 + 0x68),local_90);
        (**(code **)(*param_2 + 0x288))(param_2,&local_a8);
        FUN_00416ad0(&local_a8,L"_Ch2");
        FUN_01b24ac0(&local_a0,local_a8);
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
                  (*(longlong **)(param_1 + 0x68),local_a0);
      }
    }
    goto code_r0x017c7c59;
  }
  if (uVar5 == 0x62) {
LAB_017c7a8d:
    uVar4 = FUN_01cfd270(param_2,0,1);
    FUN_00b909d0(&local_20,uVar4);
    if (*local_20 == '\0') {
      (**(code **)(*param_2 + 0x288))(param_2,&local_68);
      FUN_01b24ac0(&local_60,local_68);
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))(*(longlong **)(param_1 + 0x68),local_60)
      ;
    }
  }
  else {
    if (uVar5 < 0x21) {
      if (2 < uVar5 - 4) {
        if (uVar5 == 7) {
          cVar2 = *local_20;
          uVar4 = FUN_01cfd270(param_2,0,0);
          FUN_00b909d0(&local_20,uVar4);
          if ((cVar2 == '\0') && (*local_20 == '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            (**(code **)(*param_2 + 0x288))(param_2,&local_58);
            FUN_01b24ac0(&local_50,local_58);
            (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
                      (*(longlong **)(param_1 + 0x68),local_50);
          }
          goto code_r0x017c7c59;
        }
        if (uVar5 != 8) goto code_r0x017c7c59;
        goto LAB_017c7a8d;
      }
    }
    else if (1 < uVar5 - 0x21) {
      if (uVar5 == 0x3d) goto LAB_017c7b47;
      if (1 < uVar5 - 0x3e) goto code_r0x017c7c59;
      goto LAB_017c7b04;
    }
LAB_017c796b:
    cVar2 = *local_20;
    uVar4 = FUN_01cfd270(param_2,0,0);
    FUN_00b909d0(&local_20,uVar4);
    if ((cVar2 == '\x01') && (*local_20 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      (**(code **)(*param_2 + 0x288))(param_2,&local_48);
      FUN_01b24ac0(&local_40,local_48);
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))(*(longlong **)(param_1 + 0x68),local_40)
      ;
    }
  }
code_r0x017c7c59:
  FUN_00414560(&local_a8,0x10);
  return;
}

