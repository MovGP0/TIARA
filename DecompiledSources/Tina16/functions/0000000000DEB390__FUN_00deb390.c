/* Ghidra address: 00deb390 */
/* Ghidra symbol: FUN_00deb390 */


void FUN_00deb390(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5,double param_6,undefined1 *param_7)

{
  char cVar1;
  undefined2 uVar2;
  double dVar3;
  ulonglong in_stack_ffffffffffffffb8;
  
  *param_7 = param_2;
  param_7[1] = param_3;
  dVar3 = (double)FUN_0040c850(param_6);
  if (0.9999999999 < dVar3 / 1e+30) {
    cVar1 = FUN_016e9e80(param_1,1);
    param_7[2] = cVar1;
    FUN_016ebe60(param_1,cVar1 + '\x01',*param_7,param_7[1],
                 in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
    uVar2 = FUN_016ea1b0(param_1,2);
    *(undefined2 *)(param_7 + 4) = uVar2;
    *(undefined4 *)(param_7 + 0x3c) = 0xfffffff6;
    uVar2 = FUN_016ea1b0(param_1,4);
    *(undefined2 *)(param_7 + 6) = uVar2;
    *(undefined8 *)(param_7 + 8) = param_4;
    *(undefined8 *)(param_7 + 0x10) = param_5;
  }
  else {
    cVar1 = FUN_016e9e80(param_1,2);
    param_7[2] = cVar1;
    FUN_016ebe60(param_1,cVar1 + '\x01',*param_7,param_7[1],
                 in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
    uVar2 = FUN_016ea1b0(param_1,2);
    *(undefined2 *)(param_7 + 4) = uVar2;
    *(undefined4 *)(param_7 + 0x3c) = 0xfffffff6;
    uVar2 = FUN_016ea1b0(param_1,4);
    *(undefined2 *)(param_7 + 6) = uVar2;
    *(undefined8 *)(param_7 + 8) = param_4;
    *(undefined8 *)(param_7 + 0x10) = param_5;
    dVar3 = (double)FUN_0040c850(param_6);
    if (dVar3 <= 1e-09) {
      FUN_016ebdd0(param_1,param_7[2] + '\x02',*param_7,param_7[1],1);
      FUN_016ed320(param_1,param_7[2] + '\x02',0,param_6,0);
    }
    else {
      FUN_016ebe60(param_1,param_7[2] + '\x02',*param_7,param_7[1],1);
      FUN_016ed320(param_1,param_7[2] + '\x02',0,1.0 / param_6,0);
    }
  }
  FUN_016ef160(param_1,param_4,param_5,(byte)param_7[2] + 1,param_2,param_3,1,0);
  return;
}

