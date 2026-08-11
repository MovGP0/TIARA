/* Ghidra address: 00b54940 */
/* Ghidra symbol: FUN_00b54940 */


void FUN_00b54940(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  short sVar5;
  char cVar6;
  undefined8 local_res10 [3];
  int local_50;
  ushort local_4a;
  undefined1 local_48 [2];
  ushort local_46;
  byte local_43;
  ushort local_40 [2];
  byte local_3c;
  
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  cVar1 = *(char *)(param_1 + 0x20);
  iVar2 = FUN_00b22360();
  local_50 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_00b22330(param_1,local_40,local_50);
      FUN_00b22330(param_1,local_48,local_50);
      local_4a = local_40[0];
      if (local_40[0] <= local_46) {
        sVar5 = (local_46 - local_40[0]) + 1;
        do {
          FUN_00b22330(param_1,local_40,local_50);
          FUN_00b22330(param_1,local_48,local_50);
          if (local_3c <= local_43) {
            cVar6 = (local_43 - local_3c) + '\x01';
            bVar4 = local_3c;
            do {
              uVar3 = FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),local_4a,
                                   bVar4);
              FUN_00b4f190(uVar3,local_res10[0]);
              if (cVar1 != '\0') goto LAB_00b54a80;
              bVar4 = bVar4 + 1;
              cVar6 = cVar6 + -1;
            } while (cVar6 != '\0');
          }
          local_4a = local_4a + 1;
          sVar5 = sVar5 + -1;
        } while (sVar5 != 0);
      }
      local_50 = local_50 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_00b54a80:
  FUN_004144d0(local_res10);
  return;
}

