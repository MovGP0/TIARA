/* Ghidra address: 013ac280 */
/* Ghidra symbol: FUN_013ac280 */


void FUN_013ac280(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  iVar6 = *(int *)(param_3 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_00b94e60(param_3,iVar5);
      cVar1 = FUN_0198a580(uVar3);
      if (cVar1 == '\x04') {
        plVar4 = (longlong *)FUN_00b94e60(param_3,iVar5);
        sVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (((sVar2 != 0x3a) && (sVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4), sVar2 != 0x96)) &&
           (sVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4), sVar2 != 0x68)) {
          FUN_017ff5f0(plVar4,param_4);
          sVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
          if (((sVar2 == 0x39) && ((char)plVar4[0x34] == '\x01')) &&
             ((*(char *)(plVar4[0x35] + 0xb0) == '\0' && (*(longlong *)(plVar4[0x35] + 8) != 0)))) {
            (**(code **)(*plVar4 + 0x288))(plVar4,&local_48);
            FUN_013ab210(local_40,local_48);
            uVar3 = FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550),param_2,
                                 local_40[0],plVar4);
            FUN_013ac4d0(param_1,uVar3);
            FUN_013ac280(param_1,uVar3,*(undefined8 *)(plVar4[0x35] + 8),plVar4);
          }
          else {
            (**(code **)(*plVar4 + 0x288))(plVar4,&local_58);
            FUN_013ab210(&local_50,local_58);
            uVar3 = FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550),param_2,
                                 local_50,plVar4);
            sVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
            if (sVar2 == 0x39) {
              FUN_013ac4d0(param_1,uVar3);
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_58,4);
  FUN_00414480(&local_30);
  return;
}

