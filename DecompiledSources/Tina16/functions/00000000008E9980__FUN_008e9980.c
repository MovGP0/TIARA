/* Ghidra address: 008e9980 */
/* Ghidra symbol: FUN_008e9980 */


void FUN_008e9980(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  local_1c = (undefined1)((uint)param_2 >> 0x18);
  local_1b = (undefined1)((uint)param_2 >> 0x10);
  local_1a = (undefined1)((uint)param_2 >> 8);
  local_19 = (undefined1)param_2;
  FUN_008e6d60(param_1,&local_1c,4);
  *param_3 = 4;
  return;
}

