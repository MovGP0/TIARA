/* Ghidra address: 006e2000 */
/* Ghidra symbol: FUN_006e2000 */


void FUN_006e2000(longlong param_1,char param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar4;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0x52f) != param_2) {
    *(char *)(param_1 + 0x52f) = param_2;
    bVar1 = *(byte *)(param_1 + 0x52f);
    uVar3 = 0;
    if (bVar1 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) << (bVar1 & 0x1f) & 10U) != 0;
    }
    else {
      bVar4 = false;
    }
    if ((!bVar4) || (*(longlong *)(param_1 + 0x608) == 0)) {
      if (bVar1 < 8) {
        uVar2 = 1 << (bVar1 & 0x1f);
        uVar3 = (ulonglong)uVar2;
        bVar4 = (uVar2 & 0xc) != 0;
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) {
        return;
      }
    }
    FUN_006e1e40(param_1,CONCAT71((int7)(uVar3 >> 8),1));
  }
  return;
}

