/* Ghidra address: 01686220 */
/* Ghidra symbol: FUN_01686220 */


void FUN_01686220(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 double *param_5,short param_6)

{
  double dVar1;
  double dVar2;
  char cVar3;
  char cVar4;
  
  dVar1 = *param_5;
  dVar2 = param_5[1];
  cVar3 = FUN_016e9e80(param_1,2);
  cVar4 = FUN_016e9d10(param_1,1);
  FUN_016ebe60(param_1,cVar3 + '\x01',param_3,cVar4 + '\x01',1);
  FUN_016ed320(param_1,cVar3 + '\x01',0,1.0 / dVar1,0);
  FUN_016ec4d0(param_1,cVar3 + '\x02',cVar4 + '\x01',param_2,param_4,param_2,1);
  FUN_016ed320(param_1,cVar3 + '\x02',0,(double)(int)param_6 * dVar2,0);
  return;
}

