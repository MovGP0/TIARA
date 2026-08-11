/* Ghidra address: 011390d0 */
/* Ghidra symbol: FUN_011390d0 */


void FUN_011390d0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x260))(*(longlong **)(param_1 + 0x9d8));
  bVar5 = *(int *)(param_1 + 0xa30) != iVar3;
  if (bVar5) {
    *(undefined4 *)(param_1 + 0xa58) = *(undefined4 *)(*(longlong *)(param_1 + 0xa10) + 0x178);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x950) + 0x328) == '\0') {
    if ((!bVar5) && (*(char *)(param_1 + 0xa20) == '\0')) {
      lVar2 = *(longlong *)(param_1 + 0xa10);
      *(undefined8 *)(lVar2 + 0x168) = *(undefined8 *)(param_1 + 0xa28);
      *(undefined8 *)(lVar2 + 0x170) = *(undefined8 *)(param_1 + 0xa48);
      (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x100))
                (*(longlong **)(param_1 + 0xa18),param_1 + 0xa40);
      (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x100))
                (*(longlong **)(param_1 + 0xa18),param_1 + 0xa38);
      *(undefined8 *)(param_1 + 0xa28) = *(undefined8 *)(param_1 + 0xa40);
      *(undefined8 *)(param_1 + 0xa48) = *(undefined8 *)(param_1 + 0xa38);
      if (*(byte *)(param_1 + 0xa0c) < 8) {
        bVar6 = ((int)CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0xa38) >> 8),1) <<
                 (*(byte *)(param_1 + 0xa0c) & 0x1f) & 0x30U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        *(undefined1 *)(param_1 + 0xa78) = 9;
      }
    }
    if ((bVar5) && (*(char *)(param_1 + 0xa20) == '\0')) {
      (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x100))
                (*(longlong **)(param_1 + 0xa18),param_1 + 0xa40);
      (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x100))
                (*(longlong **)(param_1 + 0xa18),param_1 + 0xa38);
      *(undefined8 *)(param_1 + 0xa28) = *(undefined8 *)(param_1 + 0xa40);
      *(undefined8 *)(param_1 + 0xa48) = *(undefined8 *)(param_1 + 0xa38);
      if (*(byte *)(param_1 + 0xa0c) < 8) {
        bVar5 = ((int)CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0xa38) >> 8),1) <<
                 (*(byte *)(param_1 + 0xa0c) & 0x1f) & 0x30U) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        *(undefined1 *)(param_1 + 0xa78) = 9;
      }
    }
    *(undefined1 *)(param_1 + 0xa20) = 1;
  }
  else {
    if ((bVar5) && (*(char *)(param_1 + 0xa20) == '\0')) {
      *(undefined8 *)(param_1 + 0xa28) = *(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x168);
      *(undefined8 *)(param_1 + 0xa48) = *(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x170);
    }
    if (*(char *)(param_1 + 0xa20) == '\x01') {
      *(undefined8 *)(param_1 + 0xa40) = *(undefined8 *)(param_1 + 0xa28);
      *(undefined8 *)(param_1 + 0xa38) = *(undefined8 *)(param_1 + 0xa48);
      (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xf0))
                (*(longlong **)(param_1 + 0xa18),*(longlong *)(param_1 + 0xa10) + 0x168);
      (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xf0))
                (*(longlong **)(param_1 + 0xa18),*(longlong *)(param_1 + 0xa10) + 0x170);
      *(undefined8 *)(param_1 + 0xa28) = *(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x168);
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x170);
      *(undefined8 *)(param_1 + 0xa48) = uVar1;
      if (*(byte *)(param_1 + 0xa0c) < 8) {
        bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) <<
                 (*(byte *)(param_1 + 0xa0c) & 0x1f) & 0x30U) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        *(undefined1 *)(param_1 + 0xa78) = *(undefined1 *)(*(longlong *)(param_1 + 0xa10) + 0x149);
      }
    }
    *(undefined1 *)(param_1 + 0xa20) = 0;
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x260))(*(longlong **)(param_1 + 0x9d8));
  *(undefined4 *)(param_1 + 0xa30) = uVar4;
  return;
}

