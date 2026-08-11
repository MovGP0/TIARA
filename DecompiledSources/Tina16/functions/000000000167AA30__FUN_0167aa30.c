/* Ghidra address: 0167aa30 */
/* Ghidra symbol: FUN_0167aa30 */


void FUN_0167aa30(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  char cVar3;
  
  dVar1 = *param_6;
  dVar2 = param_6[1];
  cVar3 = FUN_016e9e80(param_1,2);
  FUN_016ebe60(param_1,cVar3 + '\x01',param_3,param_5,1);
  FUN_016ed320(param_1,cVar3 + '\x01',0,1.0 / dVar1,0);
  FUN_016ec2d0(param_1,cVar3 + '\x02',param_4,param_5,(char)param_3,param_5,1);
  FUN_016ed320(param_1,cVar3 + '\x02',0,(double)param_2 * dVar2,0);
  return;
}

