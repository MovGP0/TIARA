/* Ghidra address: 017bb340 */
/* Ghidra symbol: FUN_017bb340 */


void FUN_017bb340(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  *(longlong *)(param_1 + 0x18) = param_2;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_2 + 0x10);
    uVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar3 = (ulonglong)uVar4;
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),uVar3);
        bVar1 = FUN_0198a580(uVar2);
        if (bVar1 < 0x10) {
          bVar6 = ((int)CONCAT62((int6)(uVar3 >> 0x10),1) << (bVar1 & 0x1f) & 0x220U) != 0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          FUN_004aedb0(*(undefined8 *)(param_1 + 0x18),uVar4,0);
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_004aee80(*(undefined8 *)(param_1 + 0x18));
    FUN_004aef40(*(longlong *)(param_1 + 0x18),*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10)
                );
  }
  return;
}

