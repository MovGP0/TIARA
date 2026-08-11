/* Ghidra address: 00b562e0 */
/* Ghidra symbol: FUN_00b562e0 */


void FUN_00b562e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  undefined8 local_res10 [3];
  int local_50;
  ushort local_4a;
  undefined1 local_48 [2];
  ushort local_46;
  byte local_43;
  ushort local_40 [2];
  byte local_3c;
  
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  iVar1 = FUN_00b22360();
  local_50 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00b22330(param_1,local_40,local_50);
      FUN_00b22330(param_1,local_48,local_50);
      local_4a = local_40[0];
      if (local_40[0] <= local_46) {
        sVar4 = (local_46 - local_40[0]) + 1;
        do {
          FUN_00b22330(param_1,local_40,local_50);
          FUN_00b22330(param_1,local_48,local_50);
          if (local_3c <= local_43) {
            cVar5 = (local_43 - local_3c) + '\x01';
            bVar3 = local_3c;
            do {
              plVar2 = (longlong *)
                       FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),local_4a,
                                    bVar3);
              (**(code **)(*plVar2 + 0xb0))(plVar2,local_res10[0]);
              bVar3 = bVar3 + 1;
              cVar5 = cVar5 + -1;
            } while (cVar5 != '\0');
          }
          local_4a = local_4a + 1;
          sVar4 = sVar4 + -1;
        } while (sVar4 != 0);
      }
      local_50 = local_50 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414520(local_res10);
  return;
}

