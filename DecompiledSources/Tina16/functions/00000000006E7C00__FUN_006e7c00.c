/* Ghidra address: 006e7c00 */
/* Ghidra symbol: FUN_006e7c00 */


void FUN_006e7c00(undefined8 param_1,byte param_2,int param_3)

{
  undefined1 local_e4 [4];
  undefined4 local_e0;
  ushort local_ca;
  int aiStack_c8 [42];
  
  FUN_006e7840(param_1,local_e4);
  aiStack_c8[param_2] = param_3 * 0x14;
  local_e0 = 0x10;
  if ((short)local_ca < (short)(ushort)param_2) {
    local_ca = (ushort)param_2;
  }
  FUN_006e7890(param_1,local_e4);
  return;
}

