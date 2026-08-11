/* Ghidra address: 010e1cd0 */
/* Ghidra symbol: FUN_010e1cd0 */


undefined8 FUN_010e1cd0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined8 uStack_20;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  local_28 = param_2[2];
  uStack_20 = param_2[3];
  if (((local_30 == 0) && (local_28 != 0)) &&
     (cVar1 = FUN_010e1c50(param_1,&local_38), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}

