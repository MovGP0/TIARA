/* Ghidra address: 00b547c0 */
/* Ghidra symbol: FUN_00b547c0 */


void FUN_00b547c0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  short sVar5;
  char cVar6;
  int local_70;
  ushort local_6a;
  undefined1 local_68 [2];
  ushort local_66;
  byte local_63;
  ushort local_60 [2];
  byte local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  local_50 = *param_2;
  uStack_48 = param_2[1];
  uStack_40 = param_2[2];
  FUN_0046bd60(&local_50);
  cVar1 = *(char *)(param_1 + 0x20);
  iVar2 = FUN_00b22360();
  local_70 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_00b22330(param_1,local_60,local_70);
      FUN_00b22330(param_1,local_68,local_70);
      local_6a = local_60[0];
      if (local_60[0] <= local_66) {
        sVar5 = (local_66 - local_60[0]) + 1;
        do {
          FUN_00b22330(param_1,local_60,local_70);
          FUN_00b22330(param_1,local_68,local_70);
          if (local_5c <= local_63) {
            cVar6 = (local_63 - local_5c) + '\x01';
            bVar4 = local_5c;
            do {
              uVar3 = FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),local_6a,
                                   bVar4);
              FUN_00b4f030(uVar3,&local_50);
              if (cVar1 != '\0') goto LAB_00b54900;
              bVar4 = bVar4 + 1;
              cVar6 = cVar6 + -1;
            } while (cVar6 != '\0');
          }
          local_6a = local_6a + 1;
          sVar5 = sVar5 + -1;
        } while (sVar5 != 0);
      }
      local_70 = local_70 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_00b54900:
  FUN_00460ba0(&local_50);
  return;
}

