/* Ghidra address: 00680e40 */
/* Ghidra symbol: FUN_00680e40 */


void FUN_00680e40(longlong *param_1,ushort *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_48 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_20[0] = (longlong *)0x0;
  FUN_00659a30(param_1,param_2);
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3,1);
  if ((cVar1 != '\0') && (0x1f < *param_2)) {
    uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db130(local_20,uVar4);
    cVar2 = (**(code **)(*local_20[0] + 0x68))(local_20[0],*param_2);
    if (cVar2 == '\0') {
      thunk_FUN_03f3ed6d(0);
      *param_2 = 0;
    }
  }
  uVar5 = (ulonglong)*param_2;
  if (uVar5 < 0x19) {
    if ((uVar5 != 0x18) && (uVar5 != 8)) {
      if (uVar5 == 0xd) {
        plVar3 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
        cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3,1);
        if (cVar1 != '\0') {
          uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_004db130(&local_48,uVar4);
          cVar1 = (**(code **)(*local_48 + 0x88))(local_48);
          if (cVar1 != '\0') {
            uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
            cVar1 = FUN_004db1f0(uVar4);
            if (cVar1 != '\0') {
              *param_2 = 0;
            }
          }
        }
        plVar3 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
        cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3,4);
        if (cVar1 != '\0') {
          uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
          cVar1 = FUN_004db970(uVar4);
          if (cVar1 != '\0') {
            *param_2 = 0;
          }
        }
        goto code_r0x00681127;
      }
      if (uVar5 != 0x16) goto code_r0x00681127;
    }
  }
  else {
    if (uVar5 == 0x1b) {
      if (cVar1 != '\0') {
        uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
        FUN_004db130(&local_38,uVar4);
        cVar1 = (**(code **)(*local_38 + 0x88))(local_38);
        if (cVar1 != '\0') {
          uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_004db130(&local_40,uVar4);
          (**(code **)(*local_40 + 0x50))(local_40);
          FUN_00680ad0(param_1);
        }
        *param_2 = 0;
      }
      goto code_r0x00681127;
    }
    if (0xffdf < uVar5 - 0x20) goto code_r0x00681127;
  }
  if (cVar1 == '\0') {
    bVar6 = false;
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db130(&local_28,uVar4);
    cVar2 = (**(code **)(*local_28 + 0x48))(local_28);
    bVar6 = cVar2 == '\0';
  }
  if (bVar6) {
    *param_2 = 0;
  }
  else {
    if (cVar1 != '\0') {
      uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db130(&local_30,uVar4);
      (**(code **)(*local_30 + 0x58))(local_30);
    }
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3,4);
    if (cVar1 != '\0') {
      uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db850(uVar4);
    }
  }
code_r0x00681127:
  FUN_00417840(&local_48,&DAT_00484dc8,6);
  return;
}

