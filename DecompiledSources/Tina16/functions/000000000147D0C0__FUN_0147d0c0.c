/* Ghidra address: 0147d0c0 */
/* Ghidra symbol: FUN_0147d0c0 */


undefined4 * FUN_0147d0c0(undefined4 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 local_34;
  undefined4 local_2c;
  
  uVar1 = param_2[1];
  local_34 = (undefined4)(*param_2 >> 0x20);
  local_2c = (undefined4)(uVar1 >> 0x20);
  uVar2 = FUN_0147d070(*param_2 & 0xffffffff,0);
  *param_1 = uVar2;
  uVar2 = FUN_0147d070(local_34,0);
  param_1[1] = uVar2;
  uVar2 = FUN_0147d070(uVar1 & 0xffffffff,1);
  param_1[2] = uVar2;
  uVar2 = FUN_0147d070(local_2c,1);
  param_1[3] = uVar2;
  return param_1;
}

