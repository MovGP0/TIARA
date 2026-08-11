/* Ghidra address: 018924a0 */
/* Ghidra symbol: FUN_018924a0 */


void FUN_018924a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  if (0 < *(int *)(param_1 + 0x5a4)) {
    uVar1 = thunk_FUN_0412b593(5);
    thunk_FUN_03984819(param_2,&local_38,uVar1);
  }
  return;
}

