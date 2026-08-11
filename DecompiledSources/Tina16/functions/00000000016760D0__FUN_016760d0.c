/* Ghidra address: 016760d0 */
/* Ghidra symbol: FUN_016760d0 */


void FUN_016760d0(undefined8 param_1,double param_2,byte param_3,double param_4,char param_5,
                 char *param_6,char param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_3 & param_2 != 0.0) == 0) {
    *param_6 = param_5;
  }
  else {
    cVar1 = FUN_016e9d10(param_1,1);
    *param_6 = cVar1 + '\x01';
    if (param_7 == '\0') {
      cVar1 = FUN_016e9e80(param_1,2);
      FUN_016ebe60(param_1,cVar1 + '\x02',*param_6,param_5,1);
      FUN_016ed320(param_1,cVar1 + '\x02',0,1.0 / param_2,0);
    }
    else {
      cVar1 = FUN_016e9e80(param_1,1);
    }
    FUN_016ed1a0(param_1,cVar1 + '\x01',*param_6,param_5);
    if (param_2 <= 0.0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0040c760((param_4 * 5.5224904e-23) / param_2);
    }
    FUN_016ed220(param_1,cVar1 + '\x01',uVar2,0);
  }
  return;
}

