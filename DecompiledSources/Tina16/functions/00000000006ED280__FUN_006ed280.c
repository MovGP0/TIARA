/* Ghidra address: 006ed280 */
/* Ghidra symbol: FUN_006ed280 */


void FUN_006ed280(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = FUN_006edb60(uVar1);
  cVar2 = FUN_0065be20(uVar4);
  if (cVar2 != '\0') {
    uVar4 = FUN_006edb60(*(undefined8 *)(param_1 + 8));
    uVar4 = FUN_0065b870(uVar4);
    iVar3 = FUN_004b1870(param_1);
    thunk_FUN_041b2403(uVar4,0x101c,(longlong)iVar3,0);
  }
  FUN_004b17c0(param_1,param_2 & 0xfffffffc);
  FUN_006edbc0(uVar1);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

