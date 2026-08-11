/* Ghidra address: 004d2e60 */
/* Ghidra symbol: FUN_004d2e60 */


void FUN_004d2e60(longlong param_1,longlong *param_2)

{
  code *local_58;
  longlong local_50;
  code *local_48;
  longlong local_40;
  undefined4 local_2c;
  
  local_2c = 0;
  if (param_2[8] != 0) {
    local_2c = *(undefined4 *)(param_2[8] + 0x30);
  }
  local_48 = FUN_004d2800;
  local_58 = FUN_004d2840;
  local_50 = param_1;
  local_40 = param_1;
  (**(code **)(*param_2 + 8))
            (param_2,L"Left",&local_48,&local_58,*(short *)(param_1 + 0x30) != (short)local_2c);
  local_48 = FUN_004d2820;
  local_58 = FUN_004d2860;
  local_50 = param_1;
  local_40 = param_1;
  (**(code **)(*param_2 + 8))
            (param_2,&DAT_004d2f40,&local_48,&local_58,*(short *)(param_1 + 0x32) != local_2c._2_2_)
  ;
  return;
}

