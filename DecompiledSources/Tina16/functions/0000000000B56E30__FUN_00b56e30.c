/* Ghidra address: 00b56e30 */
/* Ghidra symbol: FUN_00b56e30 */


void FUN_00b56e30(longlong param_1,undefined1 param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  int local_54;
  ushort local_50;
  byte local_4d;
  byte local_4c;
  byte local_48;
  ushort local_40;
  ushort local_3e;
  byte local_3c;
  byte local_3b;
  
  if (param_4 == '\x04') {
    FUN_00b56b00(param_1,param_2,param_3);
  }
  else {
    iVar1 = FUN_00b22360();
    local_54 = 0;
    if (-1 < iVar1 + -1) {
      do {
        if (param_4 == '\0') {
          FUN_00b22330(param_1,&local_40,local_54);
          local_4c = local_3c;
          FUN_00b22330(param_1,&local_40,local_54);
          local_48 = local_3c;
          FUN_00b22330(param_1,&local_40,local_54);
          local_50 = local_40;
          FUN_00b22330(param_1,&local_40,local_54);
          uVar3 = local_3e;
        }
        else if (param_4 == '\x01') {
          FUN_00b22330(param_1,&local_40,local_54);
          local_50 = local_40;
          FUN_00b22330(param_1,&local_40,local_54);
          uVar3 = local_3e;
          FUN_00b22330(param_1,&local_40,local_54);
          local_4c = local_3b;
          FUN_00b22330(param_1,&local_40,local_54);
          local_48 = local_3b;
        }
        else if (param_4 == '\x02') {
          FUN_00b22330(param_1,&local_40,local_54);
          local_4c = local_3c;
          FUN_00b22330(param_1,&local_40,local_54);
          local_48 = local_3b;
          FUN_00b22330(param_1,&local_40,local_54);
          local_50 = local_40;
          FUN_00b22330(param_1,&local_40,local_54);
          uVar3 = local_40;
        }
        else {
          FUN_00b22330(param_1,&local_40,local_54);
          local_4c = local_3c;
          FUN_00b22330(param_1,&local_40,local_54);
          local_48 = local_3b;
          FUN_00b22330(param_1,&local_40,local_54);
          local_50 = local_3e;
          FUN_00b22330(param_1,&local_40,local_54);
          uVar3 = local_3e;
        }
        if (local_50 <= uVar3) {
          sVar4 = (uVar3 - local_50) + 1;
          do {
            local_4d = local_4c;
            if (local_4c <= local_48) {
              cVar5 = (local_48 - local_4c) + '\x01';
              do {
                plVar2 = (longlong *)
                         FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),local_50
                                      ,local_4d);
                (**(code **)(*plVar2 + 0x70))(plVar2,param_4,param_3);
                plVar2 = (longlong *)
                         FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),local_50
                                      ,local_4d);
                (**(code **)(*plVar2 + 0x60))(plVar2,param_4,param_2);
                local_4d = local_4d + 1;
                cVar5 = cVar5 + -1;
              } while (cVar5 != '\0');
            }
            local_50 = local_50 + 1;
            sVar4 = sVar4 + -1;
          } while (sVar4 != 0);
        }
        local_54 = local_54 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

