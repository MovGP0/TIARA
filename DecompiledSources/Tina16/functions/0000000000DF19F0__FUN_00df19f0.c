/* Ghidra address: 00df19f0 */
/* Ghidra symbol: FUN_00df19f0 */


void FUN_00df19f0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3 & 0xff;
  if (uVar1 < 7) {
    if (uVar1 == 6) {
      uVar3 = FUN_016ed780(param_2,param_3);
      uVar3 = FUN_016eb200(param_1,param_2,param_3,2,uVar3);
      FUN_016ed220(param_1,1,uVar3,0);
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
    uVar3 = FUN_016eb510(param_1,2);
    uVar2 = FUN_016eb690(param_1,2);
    FUN_016ed460(param_1,1,0,uVar3,uVar2,0);
    return;
  }
  FUN_016ed220(param_1,1,0,0);
  return;
}

