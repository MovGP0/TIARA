/* Ghidra address: 004c37b0 */
/* Ghidra symbol: FUN_004c37b0 */


void FUN_004c37b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                 char param_5)

{
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_4;
  lStack_40 = param_4[1];
  if ((param_5 != '\0') && (local_48 != 0)) {
    FUN_004c8020(param_1);
    FUN_004c39b0(param_1,&local_48);
  }
  return;
}

