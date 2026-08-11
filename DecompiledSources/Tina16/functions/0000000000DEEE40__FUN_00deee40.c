/* Ghidra address: 00deee40 */
/* Ghidra symbol: FUN_00deee40 */


void FUN_00deee40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  
  FUN_016eacf0(param_1,7,1);
  cVar1 = FUN_016eacf0(param_1,3,2);
  dVar2 = (double)FUN_016eb0a0(param_1,6);
  if (cVar1 == '\0') {
    local_6b = 1;
    local_6a = 2;
    local_6c = 3;
    local_69 = 4;
    uVar3 = FUN_016eb0a0(param_1,4);
    uVar4 = FUN_016eb0a0(param_1,5);
  }
  else {
    local_6b = 3;
    local_6a = 4;
    local_6c = 1;
    local_69 = 2;
    uVar3 = FUN_016eb0a0(param_1,5);
    uVar4 = FUN_016eb0a0(param_1,4);
  }
  uVar5 = FUN_016ed930(param_2);
  FUN_016e9e20(param_1,10);
  cVar1 = FUN_016e9d10(param_1,6);
  dVar6 = (double)FUN_0040c850(dVar2);
  if (dVar6 <= 1e-09) {
    FUN_016ebdd0(param_1,1,local_6b,cVar1 + '\x03',1);
    FUN_016ed320(param_1,1,0,dVar2,0);
  }
  else {
    FUN_016ebe60(param_1,1,local_6b,cVar1 + '\x03',1);
    FUN_016ed320(param_1,1,0,1.0 / dVar2,0);
  }
  FUN_016ebe60(param_1,2,cVar1 + '\x01',local_6a,1);
  FUN_016ed320(param_1,2,0,0x3ff0000000000000,0);
  FUN_016ec420(param_1,3,local_6b,local_6a,cVar1 + '\x02',local_6a,1);
  FUN_016ed320(param_1,3,0,0x4000000000000000,0);
  FUN_016ec240(param_1,4,cVar1 + '\x02',cVar1 + '\x01');
  FUN_016ed5d0(param_1,4,0,0x3ff0000000000000,uVar5,0,0);
  FUN_016ec240(param_1,5,cVar1 + '\x03',local_6a);
  FUN_016ed5d0(param_1,5,uVar3,0x3ff0000000000000,uVar5,0,0);
  if (dVar6 <= 1e-09) {
    FUN_016ebdd0(param_1,6,local_6c,cVar1 + '\x06',1);
    FUN_016ed320(param_1,6,0,dVar2,0);
  }
  else {
    FUN_016ebe60(param_1,6,local_6c,cVar1 + '\x06',1);
    FUN_016ed320(param_1,6,0,1.0 / dVar2,0);
  }
  FUN_016ebe60(param_1,7,cVar1 + '\x04',local_69,1);
  FUN_016ed320(param_1,7,0,0,0);
  FUN_016ebe60(param_1,8,cVar1 + '\x04',cVar1 + '\x05',1);
  FUN_016ed320(param_1,8,0,0x3f50624dd2f1a9fc,0);
  FUN_016ec420(param_1,9,local_6c,local_69,cVar1 + '\x05',local_69,1);
  FUN_016ed320(param_1,9,0,0x4000000000000000,0);
  FUN_016ec240(param_1,10,cVar1 + '\x06',local_69);
  FUN_016ed5d0(param_1,10,uVar4,0,0,0,0);
  return;
}

