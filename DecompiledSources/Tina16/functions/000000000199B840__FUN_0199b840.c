/* Ghidra address: 0199b840 */
/* Ghidra symbol: FUN_0199b840 */


void FUN_0199b840(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  int local_2c;
  
  iVar5 = *(int *)(param_2 + 0x10);
  local_30 = 0;
  local_38 = param_2;
  if (-1 < iVar5 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(local_38,local_30);
      if (((plVar4 != (longlong *)0x0) &&
          (cVar2 = (**(code **)(*plVar4 + 0x118))(plVar4), cVar2 != '\0')) &&
         (sVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4), sVar3 != 0x3a)) {
        FUN_0199b590(auStack_58,plVar4);
        cVar2 = FUN_0198a580(plVar4);
        if (((cVar2 == '\x04') && (cVar2 = FUN_01d04d40(plVar4), cVar2 != '\0')) &&
           (*(longlong *)(plVar4[0x35] + 8) != 0)) {
          FUN_0199b840(param_1,*(undefined8 *)(plVar4[0x35] + 8));
        }
        cVar2 = FUN_0198a580(plVar4);
        if (((cVar2 == '\x04') && (cVar2 = FUN_01d01970(plVar4), cVar2 != '\0')) &&
           (plVar4[0x2d] != 0)) {
          local_2c = 1;
          for (uVar6 = (uint)*(ushort *)((longlong)plVar4 + 0xf2); uVar6 != 0; uVar6 = uVar6 - 1) {
            plVar1 = *(longlong **)(plVar4[0x2d] + 0x5b + (longlong)local_2c * 99);
            (**(code **)(*plVar1 + 0xf8))(plVar1);
            FUN_0199b590(auStack_58,plVar1);
            local_2c = local_2c + 1;
          }
        }
      }
      local_30 = local_30 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

