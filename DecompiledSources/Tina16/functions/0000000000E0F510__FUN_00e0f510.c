/* Ghidra address: 00e0f510 */
/* Ghidra symbol: FUN_00e0f510 */


undefined4 FUN_00e0f510(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_2c [3];
  
  lVar1 = FUN_00e0f340();
  uVar2 = 0xffffffff;
  if (lVar1 != 0) {
    FUN_00e10880(lVar1,param_4,param_3,local_2c);
    uVar2 = local_2c[0];
  }
  return uVar2;
}

