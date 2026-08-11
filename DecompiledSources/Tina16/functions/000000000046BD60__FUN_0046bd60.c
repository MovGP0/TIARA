/* Ghidra address: 0046bd60 */
/* Ghidra symbol: FUN_0046bd60 */


void FUN_0046bd60(ushort *param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (7 < *param_1) {
    local_30 = *(undefined8 *)param_1;
    uStack_28 = *(undefined8 *)(param_1 + 4);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    *param_1 = 0;
    FUN_00461840(param_1,&local_30);
  }
  return;
}

