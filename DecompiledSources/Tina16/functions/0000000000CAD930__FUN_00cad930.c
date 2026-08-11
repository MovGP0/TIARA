/* Ghidra address: 00cad930 */
/* Ghidra symbol: FUN_00cad930 */


undefined4 FUN_00cad930(longlong *param_1,char param_2)

{
  undefined4 local_2c;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x188))(param_1,local_20,4,0);
  local_2c = FUN_00878520(local_20[0],0);
  if (param_2 != '\0') {
    local_2c = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0xb0))
                         (*(longlong **)PTR_DAT_020050b0,local_2c);
  }
  FUN_00419430(local_20,&DAT_0086e978);
  return local_2c;
}

