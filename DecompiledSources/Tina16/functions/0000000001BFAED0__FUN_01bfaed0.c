/* Ghidra address: 01bfaed0 */
/* Ghidra symbol: FUN_01bfaed0 */


void FUN_01bfaed0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),param_2);
  if (((param_2 != 0) && (cVar1 = FUN_01bfaa20(param_1), cVar1 != '\0')) &&
     (*(longlong *)(param_1 + 0x18) != 0)) {
    lVar2 = FUN_01c019a0();
    iVar6 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x10);
    uVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar3 = FUN_01c019a0(*(undefined8 *)(param_1 + 0x18));
        uVar4 = (ulonglong)uVar5;
        lVar2 = FUN_01bfb960(uVar3,uVar4);
        if (*(byte *)(param_1 + 0x28) < 8) {
          bVar7 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << (*(byte *)(param_1 + 0x28) & 0x1f) & 0x18U
                  ) != 0;
        }
        else {
          bVar7 = false;
        }
        FUN_01c060c0(*(undefined8 *)(lVar2 + 0x80),!bVar7);
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_00654320(*(undefined8 *)(param_1 + 0x18),0);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))(*(longlong **)(param_1 + 0x18));
  }
  return;
}

