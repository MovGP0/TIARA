/* Ghidra address: 01c888a0 */
/* Ghidra symbol: FUN_01c888a0 */


void FUN_01c888a0(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  double dVar3;
  
  if (*(char *)(param_1 + 0x27c1) == '\0') {
    *(undefined1 *)(param_1 + 0x27c1) = 1;
    bVar1 = FUN_00f06890(L"EnableStatistics",0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x1550),*(undefined1 *)(param_1 + 0x27c1));
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x1558),*(byte *)(param_1 + 0x27c1) & bVar1);
    if (PTR_DAT_02004010[0x813] == '\x03') {
      dVar3 = (double)FUN_01c8eab0(param_1);
      if (dVar3 < 0.0) {
        dVar3 = *(double *)(PTR_DAT_02004010 + 0x7e0) / *(double *)(PTR_DAT_02004010 + 0x7e8);
      }
      FUN_0153b5f0(dVar3,0);
    }
    else {
      FUN_0153b5f0(*(double *)(PTR_DAT_02004010 + 0x7e0) / *(double *)(PTR_DAT_02004010 + 0x7e8),0);
    }
    FUN_01c88020(param_1);
    if (*(longlong *)(param_1 + 0x1838) != 0) {
      FUN_0153bc10(0,0,0,0);
    }
    uVar2 = FUN_0065b870(param_1);
    FUN_0153b820(uVar2,1,0,0,0,0,0,0,0,0x1c7,0,0,0,0);
    *(undefined1 *)(param_1 + 0x27c1) = 0;
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x1550),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x1558),*(byte *)(param_1 + 0x27c1) & bVar1);
  }
  return;
}

