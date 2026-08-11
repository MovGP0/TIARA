/* Ghidra address: 007fb920 */
/* Ghidra symbol: FUN_007fb920 */


void FUN_007fb920(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != param_3) {
    uVar1 = FUN_005a14e0();
    uVar2 = FUN_0081e360(&DAT_007f9050,1,param_1,param_2,param_3);
    FUN_005a1a00(uVar1,param_1,uVar2,1);
  }
  return;
}

