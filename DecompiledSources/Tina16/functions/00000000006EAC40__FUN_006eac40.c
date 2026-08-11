/* Ghidra address: 006eac40 */
/* Ghidra symbol: FUN_006eac40 */


void FUN_006eac40(longlong param_1,undefined8 param_2)

{
  undefined1 local_d4 [4];
  undefined4 local_d0;
  short local_bc;
  
  FUN_0065b830(param_1);
  FUN_0065a000(param_1,param_2);
  FUN_006e7840(*(undefined8 *)(param_1 + 0x500),local_d4);
  local_d0 = 8;
  local_bc = *(byte *)(param_1 + 0x490) + 1;
  FUN_006e7890(*(undefined8 *)(param_1 + 0x500),local_d4);
  return;
}

