/* Ghidra address: 0139d060 */
/* Ghidra symbol: FUN_0139d060 */


void FUN_0139d060(undefined2 param_1,undefined2 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_68 [36];
  undefined2 local_44;
  undefined2 local_42;
  longlong local_40;
  undefined2 local_2a;
  
  lVar4 = 0;
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
  iVar7 = *(int *)(lVar1 + 0x10);
  iVar6 = 0;
  local_44 = param_1;
  local_42 = param_2;
  local_2a = param_1;
  if (-1 < iVar7 + -1) {
    do {
      uVar3 = FUN_00b94e60(lVar1,iVar6);
      cVar2 = FUN_0139d000(auStack_68,uVar3);
      if (cVar2 != '\0') {
        lVar4 = FUN_00b94e60(lVar1,iVar6);
        break;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_2a = local_42;
  lVar5 = 0;
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
  iVar7 = *(int *)(lVar1 + 0x10);
  iVar6 = 0;
  local_40 = lVar4;
  if (-1 < iVar7 + -1) {
    do {
      uVar3 = FUN_00b94e60(lVar1,iVar6);
      cVar2 = FUN_0139d000(auStack_68,uVar3);
      if (cVar2 != '\0') {
        lVar5 = FUN_00b94e60(lVar1,iVar6);
        break;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (local_40 != 0) {
    *(undefined2 *)(local_40 + 0x24) = local_42;
  }
  if (lVar5 != 0) {
    *(undefined2 *)(lVar5 + 0x24) = local_44;
  }
  return;
}

