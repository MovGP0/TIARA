/* Ghidra address: 00971bd0 */
/* Ghidra symbol: FUN_00971bd0 */


void FUN_00971bd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  
  FUN_0096ffd0(param_1);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    uVar1 = FUN_00410e60(&PTR_FUN_008f5158,1,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                         ,param_10,param_11,param_12,param_13,param_14,param_15);
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
  }
  return;
}

