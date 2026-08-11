/* Ghidra address: 00dda4d0 */
/* Ghidra symbol: FUN_00dda4d0 */


undefined4
FUN_00dda4d0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 local_res8 [4];
  undefined4 local_c;
  
  local_res8[0] = param_1;
  FUN_0041b910(param_1);
  if (DAT_0202db78 == (code *)0x0) {
    local_c = 0x8000ffff;
  }
  else {
    local_c = (*DAT_0202db78)(local_res8[0],param_2,param_3,param_4,param_5);
  }
  FUN_0041b800(local_res8);
  return local_c;
}

