/* Ghidra address: 00debeb0 */
/* Ghidra symbol: FUN_00debeb0 */


void FUN_00debeb0(undefined8 param_1,undefined2 param_2,undefined8 param_3,double param_4,
                 undefined1 param_5,longlong param_6)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  double dVar4;
  undefined8 in_XMM1_Qa;
  
  uVar3 = (undefined1)((ushort)param_2 >> 8);
  dVar4 = (double)FUN_0040c850(param_4);
  if (dVar4 <= 0.0) {
    FUN_016e9e20(param_1,CONCAT11(uVar3,1));
    FUN_016ebef0(param_1,1,1,2,param_5);
    FUN_016ed220(param_1,1,in_XMM1_Qa,0);
    uVar2 = FUN_016ea1b0(param_1,4);
    *(undefined2 *)(param_6 + 4) = uVar2;
    *(undefined4 *)(param_6 + 0x48) = 0xfffffff6;
    *(undefined8 *)(param_6 + 8) = in_XMM1_Qa;
    *(undefined8 *)(param_6 + 0x10) = param_3;
  }
  else {
    FUN_016e9e20(param_1,CONCAT11(uVar3,2));
    cVar1 = FUN_016e9d10(param_1,1);
    cVar1 = cVar1 + '\x01';
    FUN_016ebef0(param_1,1,1,cVar1,param_5);
    FUN_016ed220(param_1,1,in_XMM1_Qa,0);
    uVar3 = 0;
    uVar2 = FUN_016ea1b0(param_1,4);
    *(undefined2 *)(param_6 + 4) = uVar2;
    *(undefined4 *)(param_6 + 0x48) = 0xfffffff6;
    *(undefined8 *)(param_6 + 8) = in_XMM1_Qa;
    *(undefined8 *)(param_6 + 0x10) = param_3;
    dVar4 = (double)FUN_0040c850(param_4);
    if (dVar4 <= 1e-09) {
      FUN_016ebdd0(param_1,CONCAT11(uVar3,2),cVar1,2,1);
      FUN_016ed320(param_1,2,0,param_4,0);
    }
    else {
      FUN_016ebe60(param_1,CONCAT11(uVar3,2),cVar1,2,1);
      FUN_016ed320(param_1,2,0,1.0 / param_4,0);
    }
  }
  return;
}

