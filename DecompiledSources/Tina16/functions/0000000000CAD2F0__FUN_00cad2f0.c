/* Ghidra address: 00cad2f0 */
/* Ghidra symbol: FUN_00cad2f0 */


undefined2 FUN_00cad2f0(longlong *param_1,char param_2)

{
  undefined2 local_2a;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x188))(param_1,local_20,2,0);
  local_2a = FUN_00878390(local_20[0],0);
  if (param_2 != '\0') {
    local_2a = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0xa8))
                         (*(longlong **)PTR_DAT_020050b0,local_2a);
  }
  FUN_00419430(local_20,&DAT_0086e978);
  return local_2a;
}

