/* Ghidra address: 00dead50 */
/* Ghidra symbol: FUN_00dead50 */


void FUN_00dead50(undefined8 param_1,undefined2 param_2,undefined8 param_3,double param_4,
                 undefined1 param_5,undefined1 *param_6)

{
  undefined2 uVar1;
  undefined1 uVar2;
  double dVar3;
  undefined8 in_XMM1_Qa;
  
  uVar2 = (undefined1)((ushort)param_2 >> 8);
  *param_6 = 1;
  param_6[1] = 2;
  dVar3 = (double)FUN_0040c850(param_4);
  if (0.9999999999 < dVar3 / 1e+30) {
    FUN_016e9e20(param_1,CONCAT11(uVar2,1));
    FUN_016ebfa0(param_1,1,1,2,param_5);
    FUN_016ed220(param_1,1,in_XMM1_Qa,0);
    uVar1 = FUN_016ea1b0(param_1,4);
    *(undefined2 *)(param_6 + 6) = uVar1;
    *(undefined4 *)(param_6 + 0x3c) = 0xfffffff6;
    *(undefined8 *)(param_6 + 8) = in_XMM1_Qa;
    *(undefined8 *)(param_6 + 0x10) = param_3;
  }
  else {
    FUN_016e9e20(param_1,CONCAT11(uVar2,2));
    FUN_016ebfa0(param_1,1,1,2,param_5);
    FUN_016ed220(param_1,1,in_XMM1_Qa,0);
    uVar2 = 0;
    uVar1 = FUN_016ea1b0(param_1,4);
    *(undefined2 *)(param_6 + 6) = uVar1;
    *(undefined4 *)(param_6 + 0x3c) = 0xfffffff6;
    *(undefined8 *)(param_6 + 8) = in_XMM1_Qa;
    *(undefined8 *)(param_6 + 0x10) = param_3;
    dVar3 = (double)FUN_0040c850(param_4);
    if (dVar3 <= 1e-09) {
      FUN_016ebdd0(param_1,CONCAT11(uVar2,2),1,2,1);
      FUN_016ed320(param_1,2,0,param_4,0);
    }
    else {
      FUN_016ebe60(param_1,CONCAT11(uVar2,2),1,2,1);
      FUN_016ed320(param_1,2,0,1.0 / param_4,0);
    }
  }
  return;
}

