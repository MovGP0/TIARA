/* Ghidra address: 01cfacd0 */
/* Ghidra symbol: FUN_01cfacd0 */


undefined8 FUN_01cfacd0(longlong param_1,ulonglong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined1 local_48 [20];
  byte local_34;
  
  uVar4 = param_2 & 0xffffffff;
  cVar1 = FUN_01d04d40(param_1);
  if (cVar1 == '\0') {
    lVar2 = FUN_01d06f10(param_1,0,0,0);
    if (lVar2 == 0) {
      lVar2 = FUN_01d06f90(param_1);
    }
    if (lVar2 == 0) {
      puVar5 = (undefined1 *)(ulonglong)*(ushort *)(param_1 + 0xba);
      lVar2 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,puVar5);
      cVar1 = *(char *)(*(longlong *)PTR_DAT_02003718 + -1 +
                       (longlong)(*(int *)(lVar2 + 0x96) + (int)param_2) * 5);
    }
    else {
      puVar5 = local_48;
      uVar3 = FUN_00c3d330(lVar2,puVar5,param_2 & 0xffffffff);
      if (local_34 < 8) {
        bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (local_34 & 0x1f) & 10U) != 0;
      }
      else {
        bVar6 = false;
      }
      cVar1 = !bVar6;
    }
    if (*(byte *)(param_1 + 0xd1) < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)puVar5 >> 8),1) << (*(byte *)(param_1 + 0xd1) & 0x1f)
              & 10U) != 0;
    }
    else {
      bVar6 = false;
    }
    if ((cVar1 == '\0') == bVar6) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    cVar1 = FUN_0176a0f0(*(undefined8 *)(param_1 + 0x1a8),uVar4);
    if (*(byte *)(param_1 + 0xd1) < 8) {
      bVar6 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << (*(byte *)(param_1 + 0xd1) & 0x1f) & 10U) != 0
      ;
    }
    else {
      bVar6 = false;
    }
    if ((bool)cVar1 == bVar6) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

