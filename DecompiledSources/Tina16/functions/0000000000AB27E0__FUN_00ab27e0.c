/* Ghidra address: 00ab27e0 */
/* Ghidra symbol: FUN_00ab27e0 */


undefined8
FUN_00ab27e0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 *param_5,
            undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined1 auStack_28 [32];
  
  *param_7 = 0;
  *param_5 = 0;
  *param_6 = 0;
  if ((((param_4 < *(int *)(param_1 + 0x7c)) || (*(int *)(param_1 + 0x80) <= param_4)) ||
      (param_3 < *(int *)(param_1 + 0x14c))) ||
     (*(int *)(param_1 + 300) + *(int *)(param_1 + 0x14c) < param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00ab2610(auStack_28,param_3,param_4);
  }
  return uVar1;
}

