/* Ghidra address: 012f7850 */
/* Ghidra symbol: FUN_012f7850 */


void FUN_012f7850(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 unaff_RSI;
  
  iVar2 = FUN_006e5350(*(undefined8 *)(param_1 + 0x700));
  if (iVar2 != 0) {
    iVar2 = FUN_006e5350(*(undefined8 *)(param_1 + 0x700));
    if (iVar2 != 0) {
      unaff_RSI = FUN_006e5360(*(undefined8 *)(param_1 + 0x700),0);
    }
    uVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
    FUN_012fb490(param_1,uVar1);
    FUN_01303af0(param_1,unaff_RSI,1);
    FUN_01306720(param_1);
    FUN_01303ee0(param_1);
    FUN_013063e0(param_1,1);
    FUN_01303240(param_1,4,0,unaff_RSI);
    FUN_01303240(param_1,1,0,unaff_RSI);
    FUN_01304bb0(param_1,unaff_RSI);
    FUN_013056e0(param_1,1,unaff_RSI);
  }
  return;
}

