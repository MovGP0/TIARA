/* Ghidra address: 008ea9e0 */
/* Ghidra symbol: FUN_008ea9e0 */


void FUN_008ea9e0(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  local_1c = (undefined1)((uint)param_2 >> 0x10);
  local_1b = (undefined1)((uint)param_2 >> 0x18);
  local_1a = (undefined1)param_2;
  local_19 = (undefined1)((uint)param_2 >> 8);
  FUN_008e6d60(param_1,&local_1c,4);
  *param_3 = 4;
  return;
}

