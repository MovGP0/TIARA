/* Ghidra address: 004133b0 */
/* Ghidra symbol: FUN_004133b0 */


void FUN_004133b0(longlong param_1,undefined8 param_2)

{
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_1 == 0) {
    FUN_00414160(0xd8);
  }
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_50 = param_2;
  local_48 = param_1;
  if (PTR_FUN_02006040 != (undefined *)0x0) {
    local_e8 = 0xeedfade;
    local_e4 = 1;
    local_e0 = 0;
    local_d0 = 7;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_d8 = param_2;
    local_c8 = param_2;
    local_c0 = param_1;
    (*(code *)PTR_FUN_02006040)(&local_e8);
  }
  (*(code *)PTR_thunk_FUN_0419a80b_02006030)(0xeedfade,1,7,&local_50);
  return;
}

