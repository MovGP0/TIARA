/* Ghidra address: 00f55390 */
/* Ghidra symbol: FUN_00f55390 */


void FUN_00f55390(char *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  double dVar1;
  undefined8 uVar2;
  
  if (param_4 == '\f') {
    if (*(double *)(param_1 + 8) <= 0.0) {
      uVar2 = 0;
    }
    else {
      dVar1 = (double)FUN_016ed770(param_3);
      uVar2 = FUN_0040c760(((dVar1 + 273.15) * 5.5224904e-23) / *(double *)(param_1 + 8));
    }
    FUN_016ed220(param_2,*param_1 + '\x02',uVar2,0);
  }
  return;
}

