/* Ghidra address: 01d3aa00 */
/* Ghidra symbol: FUN_01d3aa00 */


longlong FUN_01d3aa00(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  local_res10[0] = param_2;
  lVar3 = FUN_00410920(param_1,local_res10);
  if (lVar3 != -1) {
    FUN_00b94d80(lVar3,0);
    *(undefined8 *)(lVar3 + 8) = uVar1;
    *(undefined8 *)(lVar3 + 0x10) = uVar2;
    param_1 = lVar3;
  }
  return param_1;
}

