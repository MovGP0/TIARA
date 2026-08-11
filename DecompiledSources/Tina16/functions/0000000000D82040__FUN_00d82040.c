/* Ghidra address: 00d82040 */
/* Ghidra symbol: FUN_00d82040 */


undefined8 *
FUN_00d82040(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5[1];
  *param_2 = *param_5;
  param_2[1] = uVar1;
  FUN_00423b10(param_2,0xfffffffd,0xfffffffd);
  return param_2;
}

