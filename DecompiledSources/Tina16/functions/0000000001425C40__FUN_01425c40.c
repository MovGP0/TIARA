/* Ghidra address: 01425c40 */
/* Ghidra symbol: FUN_01425c40 */


void FUN_01425c40(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int local_68;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 *local_40 [2];
  
  FUN_016ee260(param_1,local_40,0x18,0);
  local_58 = *local_40[0];
  local_50 = local_40[0][1];
  local_48 = local_40[0][2];
  iVar8 = (int)local_58;
  iVar5 = (int)local_58 * (int)local_58;
  cVar3 = (char)iVar5;
  if ((param_3 == '\x01') || ((byte)(param_3 - 5U) < 2)) {
    local_68 = 0;
    iVar9 = iVar5;
    if (-1 < iVar5 + -1) {
      do {
        lVar2 = local_50;
        uVar1 = CONCAT31((int3)((uint)local_68 >> 8),(char)local_68 + '\x01');
        puVar7 = (undefined8 *)FUN_016eae40(param_1,uVar1);
        *(undefined8 *)(lVar2 + (longlong)local_68 * 0x10) = *puVar7;
        lVar6 = FUN_016eae40(param_1,uVar1);
        *(undefined8 *)(lVar2 + 8 + (longlong)local_68 * 0x10) = *(undefined8 *)(lVar6 + 8);
        local_68 = local_68 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    local_68 = 0;
    if (-1 < iVar8 + -1) {
      do {
        lVar2 = local_48;
        uVar1 = CONCAT31((int3)((uint)iVar5 >> 8),cVar3 + (char)local_68 + '\x01');
        puVar7 = (undefined8 *)FUN_016eae40(param_1,uVar1);
        *(undefined8 *)(lVar2 + (longlong)local_68 * 0x10) = *puVar7;
        lVar6 = FUN_016eae40(param_1,uVar1);
        *(undefined8 *)(lVar2 + 8 + (longlong)local_68 * 0x10) = *(undefined8 *)(lVar6 + 8);
        local_68 = local_68 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else if ((byte)(param_3 - 7U) < 2) {
    local_68 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar2 = local_50;
        cVar4 = (char)local_68 + '\x01';
        lVar6 = FUN_016eae40(param_1,cVar4);
        uVar10 = FUN_016ed7f0(param_2,param_3);
        uVar10 = FUN_01d3c350(*(undefined8 *)(lVar6 + 0x10),uVar10);
        *(undefined8 *)(lVar2 + (longlong)local_68 * 0x10) = uVar10;
        lVar6 = FUN_016eae40(param_1,cVar4);
        uVar10 = FUN_016ed7f0(param_2,param_3);
        uVar10 = FUN_01d3c530(*(undefined8 *)(lVar6 + 0x10),uVar10);
        *(undefined8 *)(lVar2 + 8 + (longlong)local_68 * 0x10) = uVar10;
        local_68 = local_68 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_68 = 0;
    if (-1 < iVar8 + -1) {
      do {
        lVar2 = local_48;
        cVar4 = cVar3 + (char)local_68 + '\x01';
        lVar6 = FUN_016eae40(param_1,cVar4);
        uVar10 = FUN_016ed7f0(param_2,param_3);
        uVar10 = FUN_01d3c350(*(undefined8 *)(lVar6 + 0x10),uVar10);
        *(undefined8 *)(lVar2 + (longlong)local_68 * 0x10) = uVar10;
        lVar6 = FUN_016eae40(param_1,cVar4);
        uVar10 = FUN_016ed7f0(param_2,param_3);
        uVar10 = FUN_01d3c530(*(undefined8 *)(lVar6 + 0x10),uVar10);
        *(undefined8 *)(lVar2 + 8 + (longlong)local_68 * 0x10) = uVar10;
        local_68 = local_68 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  FUN_01425760(param_1,param_2,param_3,&local_58);
  return;
}

