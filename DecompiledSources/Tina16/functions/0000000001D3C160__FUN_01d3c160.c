/* Ghidra address: 01d3c160 */
/* Ghidra symbol: FUN_01d3c160 */


longlong FUN_01d3c160(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10 [3];
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  local_res10[0] = param_2;
  lVar4 = FUN_00410920(param_1,local_res10);
  if (lVar4 != -1) {
    FUN_00b94d80(lVar4,0);
    *(undefined8 *)(lVar4 + 8) = uVar1;
    *(undefined8 *)(lVar4 + 0x10) = uVar2;
    *(undefined8 *)(lVar4 + 0x18) = uVar3;
    param_1 = lVar4;
  }
  return param_1;
}

