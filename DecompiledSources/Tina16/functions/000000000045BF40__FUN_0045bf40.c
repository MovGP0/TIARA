/* Ghidra address: 0045bf40 */
/* Ghidra symbol: FUN_0045bf40 */


void FUN_0045bf40(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uStack_38 = param_2[2];
  uStack_30 = param_2[3];
  if (*param_1 == 0) {
    lVar1 = FUN_00410e60(&DAT_0043ccd0,1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0xa8;
    }
    FUN_0041b840(param_1,lVar1);
  }
  (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,&local_48);
  return;
}

