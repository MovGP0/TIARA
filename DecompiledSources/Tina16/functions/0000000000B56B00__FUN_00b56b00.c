/* Ghidra address: 00b56b00 */
/* Ghidra symbol: FUN_00b56b00 */


void FUN_00b56b00(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  longlong *plVar2;
  short sVar3;
  char cVar4;
  int local_50;
  ushort local_4c;
  byte local_49;
  undefined1 local_48 [2];
  ushort local_46;
  byte local_43;
  ushort local_40;
  ushort local_3e;
  byte local_3c;
  byte local_3b;
  
  iVar1 = FUN_00b22360();
  local_50 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00b22330(param_1,&local_40,local_50);
      FUN_00b22330(param_1,local_48,local_50);
      local_4c = local_40;
      if (local_40 <= local_46) {
        sVar3 = (local_46 - local_40) + 1;
        do {
          FUN_00b22330(param_1,&local_40,local_50);
          FUN_00b22330(param_1,local_48,local_50);
          local_49 = local_3c;
          if (local_3c <= local_43) {
            cVar4 = (local_43 - local_3c) + '\x01';
            do {
              FUN_00b22330(param_1,&local_40,local_50);
              if (local_4c == local_40) {
                plVar2 = (longlong *)
                         FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),local_4c
                                      ,local_49);
                (**(code **)(*plVar2 + 0x70))(plVar2,2,param_3);
                plVar2 = (longlong *)
                         FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),local_4c
                                      ,local_49);
                (**(code **)(*plVar2 + 0x60))(plVar2,2,param_2);
              }
              FUN_00b22330(param_1,&local_40,local_50);
              if (local_4c == local_3e) {
                plVar2 = (longlong *)
                         FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),local_4c
                                      ,local_49);
                (**(code **)(*plVar2 + 0x70))(plVar2,3,param_3);
                plVar2 = (longlong *)
                         FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),local_4c
                                      ,local_49);
                (**(code **)(*plVar2 + 0x60))(plVar2,3,param_2);
              }
              FUN_00b22330(param_1,&local_40,local_50);
              if (local_49 == local_3c) {
                plVar2 = (longlong *)
                         FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),local_4c
                                      ,local_49);
                (**(code **)(*plVar2 + 0x70))(plVar2,0,param_3);
                plVar2 = (longlong *)
                         FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),local_4c
                                      ,local_49);
                (**(code **)(*plVar2 + 0x60))(plVar2,0,param_2);
              }
              FUN_00b22330(param_1,&local_40,local_50);
              if (local_49 == local_3b) {
                plVar2 = (longlong *)
                         FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),local_4c
                                      ,local_49);
                (**(code **)(*plVar2 + 0x70))(plVar2,1,param_3);
                plVar2 = (longlong *)
                         FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),local_4c
                                      ,local_49);
                (**(code **)(*plVar2 + 0x60))(plVar2,1,param_2);
              }
              local_49 = local_49 + 1;
              cVar4 = cVar4 + -1;
            } while (cVar4 != '\0');
          }
          local_4c = local_4c + 1;
          sVar3 = sVar3 + -1;
        } while (sVar3 != 0);
      }
      local_50 = local_50 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

