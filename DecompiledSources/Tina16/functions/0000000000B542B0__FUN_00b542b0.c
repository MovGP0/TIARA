/* Ghidra address: 00b542b0 */
/* Ghidra symbol: FUN_00b542b0 */


void FUN_00b542b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  byte bVar4;
  short sVar5;
  char cVar6;
  int local_4c;
  undefined1 local_48 [2];
  ushort local_46;
  byte local_43;
  ushort local_40 [2];
  byte local_3c;
  
  iVar1 = FUN_00b22360();
  local_4c = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00b22330(param_1,local_40,local_4c);
      FUN_00b22330(param_1,local_48,local_4c);
      if (local_40[0] <= local_46) {
        sVar5 = (local_46 - local_40[0]) + 1;
        uVar3 = local_40[0];
        do {
          FUN_00b22330(param_1,local_40,local_4c);
          FUN_00b22330(param_1,local_48,local_4c);
          if (local_3c <= local_43) {
            cVar6 = (local_43 - local_3c) + '\x01';
            bVar4 = local_3c;
            do {
              uVar2 = FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),uVar3,bVar4
                                  );
              FUN_00b4e700(uVar2);
              bVar4 = bVar4 + 1;
              cVar6 = cVar6 + -1;
            } while (cVar6 != '\0');
          }
          uVar3 = uVar3 + 1;
          sVar5 = sVar5 + -1;
        } while (sVar5 != 0);
      }
      local_4c = local_4c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

