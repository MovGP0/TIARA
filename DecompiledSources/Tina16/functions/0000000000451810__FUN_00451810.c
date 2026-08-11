/* Ghidra address: 00451810 */
/* Ghidra symbol: FUN_00451810 */


void FUN_00451810(ulonglong param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulonglong uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  int iVar7;
  
  for (puVar1 = *(undefined8 **)PTR_PTR_02004e98;
      (puVar1 != (undefined8 *)0x0 && (puVar1[1] != (param_1 & 0xffffffff)));
      puVar1 = (undefined8 *)*puVar1) {
  }
  if ((puVar1 != (undefined8 *)0x0) && (puVar1[6] != 0)) {
    pcVar2 = (char *)puVar1[6];
    if (*pcVar2 == '\0') {
      puVar5 = &DAT_0200e8a8;
    }
    else {
      puVar5 = &DAT_0200c8c0;
    }
    iVar7 = 0;
    if (*(longlong *)(pcVar2 + 8) != 0) {
      iVar7 = (int)*(undefined8 *)(*(longlong *)(pcVar2 + 8) + -8);
    }
    iVar4 = 0;
    if (iVar7 - 1U < 0x80000000) {
      do {
        lVar6 = (longlong)iVar4;
        if (*(longlong *)(*(longlong *)(pcVar2 + 8) + 8 + lVar6 * 0x28) == 0) {
          if (*(longlong *)(*(longlong *)(pcVar2 + 8) + 0x18 + lVar6 * 0x28) != 0) {
            uVar3 = FUN_00451730(*(undefined8 *)(*(longlong *)(pcVar2 + 8) + 0x18 + lVar6 * 0x28));
            uVar3 = (uVar3 & 0xffffffff) % 0x3fd;
            if (*(longlong *)(puVar5 + uVar3 * 8) == *(longlong *)(pcVar2 + 8) + lVar6 * 0x28) {
              *(undefined8 *)(puVar5 + uVar3 * 8) =
                   *(undefined8 *)(*(longlong *)(pcVar2 + 8) + lVar6 * 0x28);
            }
          }
        }
        else {
          **(undefined8 **)(*(longlong *)(pcVar2 + 8) + 8 + lVar6 * 0x28) =
               *(undefined8 *)(*(longlong *)(pcVar2 + 8) + lVar6 * 0x28);
        }
        if (*(longlong *)(*(longlong *)(pcVar2 + 8) + lVar6 * 0x28) != 0) {
          *(undefined8 *)(*(longlong *)(*(longlong *)(pcVar2 + 8) + lVar6 * 0x28) + 8) =
               *(undefined8 *)(*(longlong *)(pcVar2 + 8) + 8 + lVar6 * 0x28);
        }
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_00418590(pcVar2,&DAT_00451578);
    puVar1[6] = 0;
  }
  return;
}

