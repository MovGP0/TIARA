/* Ghidra address: 00df08d0 */
/* Ghidra symbol: FUN_00df08d0 */


void FUN_00df08d0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = param_3 & 0xff;
  if (uVar1 < 7) {
    if (uVar1 == 6) {
      dVar4 = (double)FUN_016eb0a0(param_1,1);
      uVar2 = FUN_016ed780(param_2,param_3);
      dVar5 = (double)FUN_016eb200(param_1,param_2,param_3,2,uVar2);
      FUN_016ed220(param_1,5,dVar4 + dVar5,0);
      return;
    }
    if ((uVar1 != 1) && (uVar1 != 5)) {
      return;
    }
  }
  else if (uVar1 != 7) {
    if (uVar1 != 8) {
      return;
    }
    uVar2 = FUN_016eb510(param_1,2);
    uVar3 = FUN_016eb690(param_1,2);
    FUN_016ed460(param_1,5,0,uVar2,uVar3,0);
    return;
  }
  uVar2 = FUN_016eb0a0(param_1,1);
  FUN_016ed220(param_1,5,uVar2,0);
  return;
}

