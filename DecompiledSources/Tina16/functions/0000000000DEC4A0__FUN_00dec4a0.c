/* Ghidra address: 00dec4a0 */
/* Ghidra symbol: FUN_00dec4a0 */


void FUN_00dec4a0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,double param_6,byte param_7,byte *param_8)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  double dVar4;
  ulonglong in_stack_ffffffffffffffa8;
  
  param_8[0x41] = param_7;
  dVar4 = (double)FUN_0040c850(param_6);
  if (dVar4 <= 0.0) {
    bVar1 = FUN_016e9e80(param_1,1);
    *param_8 = bVar1;
    FUN_016ebdd0(param_1,bVar1 + 1,param_2,param_3,in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
    uVar3 = FUN_016ea1b0(param_1,2);
    *(undefined2 *)(param_8 + 2) = uVar3;
    param_8[0x48] = 0xf6;
    param_8[0x49] = 0xff;
    param_8[0x4a] = 0xff;
    param_8[0x4b] = 0xff;
    uVar3 = FUN_016ea1b0(param_1,4);
    *(undefined2 *)(param_8 + 4) = uVar3;
    *(undefined8 *)(param_8 + 8) = param_4;
    *(undefined8 *)(param_8 + 0x10) = param_5;
  }
  else {
    bVar1 = FUN_016e9e80(param_1,2);
    *param_8 = bVar1;
    cVar2 = FUN_016e9d10(param_1,1);
    cVar2 = cVar2 + '\x01';
    FUN_016ebdd0(param_1,*param_8 + 1,param_2,cVar2,in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
    uVar3 = FUN_016ea1b0(param_1,2);
    *(undefined2 *)(param_8 + 2) = uVar3;
    param_8[0x48] = 0xf6;
    param_8[0x49] = 0xff;
    param_8[0x4a] = 0xff;
    param_8[0x4b] = 0xff;
    uVar3 = FUN_016ea1b0(param_1,4);
    *(undefined2 *)(param_8 + 4) = uVar3;
    *(undefined8 *)(param_8 + 8) = param_4;
    *(undefined8 *)(param_8 + 0x10) = param_5;
    dVar4 = (double)FUN_0040c850(param_6);
    if (dVar4 <= 1e-09) {
      FUN_016ebdd0(param_1,*param_8 + 2,cVar2,param_3,1);
      FUN_016ed320(param_1,*param_8 + 2,0,param_6,0);
    }
    else {
      FUN_016ebe60(param_1,*param_8 + 2,cVar2,param_3,1);
      FUN_016ed320(param_1,*param_8 + 2,0,1.0 / param_6,0);
    }
  }
  FUN_016ef160(param_1,param_4,param_5,*param_8 + 1,1,1,2,0);
  return;
}

