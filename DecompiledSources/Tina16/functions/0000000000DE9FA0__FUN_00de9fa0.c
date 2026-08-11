/* Ghidra address: 00de9fa0 */
/* Ghidra symbol: FUN_00de9fa0 */


void FUN_00de9fa0(undefined8 param_1,double param_2,double param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  char cVar1;
  double dVar2;
  undefined8 uVar3;
  
  dVar2 = (double)FUN_0040c850(param_2);
  if (dVar2 <= 1e-09) {
    cVar1 = FUN_016e9e80(param_1,1);
    FUN_016ebdd0(param_1,cVar1 + '\x01',param_4,param_5,param_6);
    FUN_016ed320(param_1,cVar1 + '\x01',0,param_2,0);
  }
  else {
    cVar1 = FUN_016e9e80(param_1,2);
    FUN_016ebe60(param_1,cVar1 + '\x01',param_4,param_5,param_6);
    FUN_016ed320(param_1,cVar1 + '\x01',0,1.0 / param_2,0);
    dVar2 = (double)FUN_00b90620(param_3 + 273.15,0);
    if (param_2 <= 0.0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0040c760((dVar2 * 5.5224904e-23) / param_2);
    }
    FUN_016ed1a0(param_1,cVar1 + '\x02',param_4,param_5);
    FUN_016ed220(param_1,cVar1 + '\x02',uVar3,0);
  }
  return;
}

