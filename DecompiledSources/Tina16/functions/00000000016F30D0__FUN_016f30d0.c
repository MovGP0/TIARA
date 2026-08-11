/* Ghidra address: 016f30d0 */
/* Ghidra symbol: FUN_016f30d0 */


undefined1
FUN_016f30d0(ulonglong param_1,char param_2,char *param_3,longlong *param_4,undefined1 *param_5)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  ulonglong in_stack_ffffffffffffff38;
  ulonglong uVar5;
  undefined4 local_6c;
  undefined1 local_68 [6];
  undefined1 local_62;
  undefined1 local_61;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  int local_34;
  int local_30;
  undefined1 local_2c [4];
  
  *param_5 = 0;
  if (param_2 != '\0') {
    *param_3 = '\0';
  }
  if (*PTR_DAT_02002ce0 == '\0') {
    *PTR_DAT_02002ce0 = 0;
    if (param_2 != '\0') {
      uVar5 = param_1;
      cVar2 = FUN_017c5f00(&local_30,&local_34,local_2c,&local_40,1,&local_61,
                           in_stack_ffffffffffffff38 & 0xffffffffffffff00,param_1);
      *param_3 = cVar2;
      if (*PTR_DAT_02002ce0 != '\0') {
        *param_3 = '\0';
        *param_5 = 1;
        *PTR_DAT_02002ce0 = 0;
        return 1;
      }
      plVar4 = (longlong *)FUN_0199aaf0(param_1);
      if (*param_3 == '\0') {
        if (plVar4 != (longlong *)0x0) {
          *(longlong **)(param_3 + 0x20) = plVar4;
          local_30 = (**(code **)(*plVar4 + 0x210))(plVar4,0);
          local_34 = (**(code **)(*plVar4 + 0x210))(plVar4,1);
          (**(code **)(*plVar4 + 0x1f0))(plVar4,0,&local_44,&local_48);
          (**(code **)(*plVar4 + 0x1f0))(plVar4,1,&local_4c,&local_50);
          plVar4 = (longlong *)FUN_019960d0(param_1,local_44,local_48,local_4c,local_50);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x1f0))(plVar4,0,&local_54,&local_58);
            (**(code **)(*plVar4 + 0x1f0))(plVar4,1,&local_5c,&local_60);
            if (((((local_44 != local_54) || (local_48 != local_58)) || (local_4c != local_5c)) ||
                (local_50 != local_60)) &&
               (((local_44 != local_5c || (local_48 != local_60)) ||
                ((local_4c != local_54 || (local_50 != local_58)))))) {
              plVar4 = (longlong *)0x0;
            }
          }
          if ((-1 < local_30) && (-1 < local_34)) {
            cVar2 = FUN_017c5a30(local_30,local_34,plVar4,local_2c,1,param_1,0,
                                 uVar5 & 0xffffffff00000000);
            *param_3 = cVar2;
          }
        }
      }
      else {
        *(undefined8 *)(param_3 + 0x20) = local_40;
        if (plVar4 != (longlong *)0x0) {
          *param_3 = '\0';
          *param_5 = 1;
          return 1;
        }
      }
      cVar2 = *param_3;
      if (cVar2 == '\x01') {
        param_3[8] = '\0';
        param_3[9] = '\0';
        param_3[10] = '\0';
        param_3[0xb] = '\0';
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        param_3[0x10] = '\x03';
        *(int *)(param_3 + 0x14) = local_30;
        *(int *)(param_3 + 0x18) = local_34;
      }
      else if ((byte)(cVar2 - 2U) < 5) {
        param_3[8] = '\0';
        param_3[9] = '\0';
        param_3[10] = '\0';
        param_3[0xb] = '\0';
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        param_3[0x10] = '\x01';
        *(int *)(param_3 + 0x14) = local_30;
        *(int *)(param_3 + 0x18) = local_34;
      }
      else if (cVar2 == '\a') {
        *(int *)(param_3 + 0x14) = local_30;
        *(int *)(param_3 + 0x18) = local_34;
      }
      else if (cVar2 == '\b') {
        param_3[8] = '\0';
        param_3[9] = '\0';
        param_3[10] = '\0';
        param_3[0xb] = '\0';
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        *(int *)(param_3 + 0x14) = local_30;
        *(int *)(param_3 + 0x18) = local_34;
      }
    }
    cVar2 = '\x01';
    plVar4 = (longlong *)FUN_0199ab60(param_1);
    bVar1 = true;
    while ((*PTR_DAT_02002ce0 == '\0' && (cVar2 != '\0'))) {
      if (plVar4 == (longlong *)0x0) {
        if (bVar1) {
          FUN_017c6a60(param_1,local_68,&local_62);
          bVar1 = false;
        }
        cVar2 = FUN_016f1650(0,local_30,local_34,local_6c);
      }
      else {
        local_30 = (**(code **)(*plVar4 + 0x210))(plVar4,0);
        local_34 = (**(code **)(*plVar4 + 0x210))(plVar4);
        if ((-1 < local_30) && (-1 < local_34)) {
          cVar2 = FUN_016f1650(plVar4,local_30,local_34,local_6c);
        }
        plVar4 = (longlong *)FUN_0199ab80();
      }
    }
    if ((*PTR_DAT_02002ce0 == '\0') && (*(int *)(*param_4 + 0x10) != 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *PTR_DAT_02002ce0 = uVar3;
    uVar3 = *PTR_DAT_02002ce0;
    *PTR_DAT_02002ce0 = 0;
  }
  else {
    uVar3 = 1;
    *PTR_DAT_02002ce0 = 0;
  }
  return uVar3;
}

