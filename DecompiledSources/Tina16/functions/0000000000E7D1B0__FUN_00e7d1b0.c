/* Ghidra address: 00e7d1b0 */
/* Ghidra symbol: FUN_00e7d1b0 */


void FUN_00e7d1b0(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,double *param_7)

{
  double dVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  double local_40;
  double local_38;
  double local_30;
  
  dVar1 = *param_7;
  local_40 = param_7[1];
  local_38 = param_7[2];
  local_30 = param_7[3];
  cVar2 = FUN_016e9e80(param_1,8);
  cVar3 = FUN_016e9d10(param_1,1);
  cVar3 = cVar3 + '\x01';
  FUN_016ebe60(param_1,cVar2 + '\x01',param_2,param_3,1);
  FUN_016ebe60(param_1,cVar2 + '\x02',param_4,cVar3,1);
  FUN_016ebfa0(param_1,cVar2 + '\x03',param_4,cVar3,1);
  FUN_016ec2d0(param_1,cVar2 + '\x04',param_2,param_3,cVar3,(char)param_4,1);
  FUN_016ebe60(param_1,cVar2 + '\x05',param_5,param_6,1);
  cVar4 = cVar2 + '\x06';
  FUN_016ebdd0(param_1,cVar4,cVar3,0,1);
  FUN_016ec970(param_1,cVar2 + '\a',param_5,0,cVar4);
  FUN_016ec970(param_1,cVar2 + '\b',param_6,0,cVar4);
  if (local_40 < 1.0) {
    local_40 = 1.0;
  }
  if (local_38 < 1.0) {
    local_38 = 1.0;
  }
  if (local_30 < 0.001) {
    local_30 = 0.001;
  }
  FUN_016ed320(param_1,cVar2 + '\x01',0,1.0 / local_40,0);
  FUN_016ed320(param_1,cVar2 + '\x02',0,1.0 / local_38,0);
  FUN_016ed220(param_1,cVar2 + '\x03',1.0 / (local_30 * 6.283185307179586 * local_38),0);
  FUN_016ed320(param_1,cVar2 + '\x04',0,dVar1 / local_38,0);
  FUN_016ed320(param_1,cVar2 + '\x05',0,0x3f1179ec9cbd821e,0);
  FUN_016ed320(param_1,cVar4,0,0,0);
  FUN_016ed220(param_1,cVar2 + '\a',0x3fe0000000000000,0);
  FUN_016ed220(param_1,cVar2 + '\b',0x3fe0000000000000,0);
  return;
}

