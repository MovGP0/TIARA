/* Ghidra address: 01337730 */
/* Ghidra symbol: FUN_01337730 */


void FUN_01337730(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  int local_30;
  int local_2c;
  
  local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  lVar1 = *(longlong *)(param_1 + 0x6c0);
  local_2c = *(int *)(lVar1 + 0x4c0);
  iVar5 = *(int *)(lVar1 + 0x4e0) + -2;
  if (local_2c <= iVar5) {
    iVar5 = (iVar5 - local_2c) + 1;
    do {
      local_30 = local_2c + 1;
      iVar6 = *(int *)(lVar1 + 0x4e0) + -1;
      if (local_30 <= iVar6) {
        iVar6 = (iVar6 - local_30) + 1;
        do {
          cVar2 = FUN_013371d0(auStack_68);
          if (cVar2 != '\0') {
            uVar3 = FUN_0084e3c0(lVar1,local_30);
            (**(code **)(*local_40 + 0x10))(local_40,uVar3);
            plVar4 = (longlong *)FUN_0084e3c0(lVar1,local_30);
            uVar3 = FUN_0084e3c0(lVar1,local_2c);
            (**(code **)(*plVar4 + 0x10))(plVar4,uVar3);
            plVar4 = (longlong *)FUN_0084e3c0(lVar1,local_2c);
            (**(code **)(*plVar4 + 0x10))(plVar4,local_40);
          }
          local_30 = local_30 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_2c = local_2c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00410f20(local_40);
  return;
}

