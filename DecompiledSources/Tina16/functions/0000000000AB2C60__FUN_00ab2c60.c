/* Ghidra address: 00ab2c60 */
/* Ghidra symbol: FUN_00ab2c60 */


undefined8
FUN_00ab2c60(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((((param_4 < *(int *)(param_1 + 0x7c)) || (*(int *)(param_1 + 0x80) <= param_4)) ||
      (param_3 < *(int *)(param_1 + 0x14c))) ||
     (*(int *)(param_1 + 300) + *(int *)(param_1 + 0x14c) < param_3)) {
    uVar1 = 0xffffffff;
  }
  else {
    local_28 = param_6;
    local_20 = param_7;
    local_18 = param_8;
    uVar1 = FUN_00ab2ac0(auStack_48,param_3,param_4,param_5);
  }
  return uVar1;
}

