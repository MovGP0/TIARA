/* Ghidra address: 01aab210 */
/* Ghidra symbol: FUN_01aab210 */


undefined1 FUN_01aab210(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  short sVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined1 local_4d;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40 [2];
  char local_2b;
  
  local_48 = 0;
  local_40[0] = 0;
  if (*(char *)(param_1 + 0x13a2a) == '\0') {
    FUN_01aaac80(param_1);
  }
  uVar7 = 0;
  local_2b = 0;
  sVar6 = *(short *)(param_1 + 0x13b30);
  if (sVar6 != 0) {
    plVar5 = (longlong *)(param_1 + 0x13b38);
    do {
      *(undefined1 *)(*plVar5 + 3) = 0;
      plVar5 = plVar5 + 1;
      sVar6 = sVar6 + -1;
    } while (sVar6 != 0);
  }
  FUN_01aab190(auStack_88);
  local_2b = '\0';
  lVar3 = FUN_014f88e0(&DAT_014f8618,1);
  *(undefined1 *)(lVar3 + 0x26) = 1;
  *(undefined2 *)(lVar3 + 0x28) = 2000;
  *(undefined1 *)(param_1 + 0x19c28) = 0;
  bVar8 = 0;
  local_60 = FUN_007f94c0(0);
  local_4c = 0;
  do {
    local_2b = FUN_01aa81c0(param_1);
    local_4c = local_4c + 1;
    FUN_014f8860(lVar3);
    cVar1 = FUN_014f88d0(lVar3);
    if ((cVar1 != '\0') && (bVar8 == 0)) {
      local_58 = FUN_007fc180(&PTR_FUN_017de7f8,1,*(undefined8 *)PTR_DAT_02004030);
      uVar4 = FUN_00b89270();
      FUN_00b8e520(uVar4,local_40,0x52c);
      FUN_0064de00(local_58,local_40[0]);
      uVar4 = FUN_00b89270();
      FUN_00b8e520(uVar4,&local_48,0x52d);
      FUN_017df230(local_58,local_48);
      *(undefined1 *)(local_58 + 0x6c9) = 1;
      *(longlong *)(local_58 + 0x6d8) = param_1;
      *(code **)(local_58 + 0x6d0) = FUN_01aab0e0;
      uVar4 = FUN_00f120b0(0x4000000000000000,(double)*(ushort *)(param_1 + 0x13b30));
      *(undefined8 *)(local_58 + 0x6f8) = uVar4;
      FUN_008059a0();
      bVar8 = 1;
    }
    cVar1 = FUN_014f88d0(lVar3);
    if (cVar1 != '\0') {
      FUN_017df2b0(local_58,(double)local_4c);
    }
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    if (local_2b == '\0') {
      FUN_01aab0f0(auStack_88);
      FUN_01aab190(auStack_88);
    }
    else {
      uVar7 = 1;
    }
  } while ((local_2b == '\0') && (*(char *)(param_1 + 0x19c28) == '\0'));
  bVar2 = FUN_014f88d0(lVar3);
  if ((bVar8 & bVar2) != 0) {
    FUN_00410f20(local_58);
  }
  FUN_00410f20(lVar3);
  FUN_007f95c0(local_60);
  local_4d = uVar7;
  FUN_00414560(&local_48,2);
  return local_4d;
}

