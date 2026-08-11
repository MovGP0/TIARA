/* Ghidra address: 00b20e40 */
/* Ghidra symbol: FUN_00b20e40 */


undefined8 * FUN_00b20e40(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_004144d0(param_1);
  param_2 = param_2 + 1;
  while (0 < param_2) {
    lVar1 = (longlong)param_2;
    param_2 = param_2 / 0x1a;
    if ((int)(lVar1 % 0x1a) == 0) {
      FUN_004156b0(param_1,&LAB_00b20f14,*param_1);
      param_2 = param_2 + -1;
    }
    else {
      uVar2 = lVar1 % 0x1a & 0xffffffff;
      FUN_004153d0(local_20,CONCAT71((int7)(uVar2 >> 8),(char)uVar2 + '@'),0);
      FUN_004156b0(param_1,local_20[0],*param_1);
    }
  }
  FUN_004144d0(local_20);
  return param_1;
}

