/* Ghidra address: 0197b000 */
/* Ghidra symbol: FUN_0197b000 */


undefined8 FUN_0197b000(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    local_10 = FUN_004b9860(&PTR_FUN_0047c498,1,*param_2,0xff00);
  }
  else {
    local_10 = FUN_004b9860(&PTR_FUN_0047c498,1,*param_2,0x20);
  }
  FUN_00414480(local_res18);
  return local_10;
}

