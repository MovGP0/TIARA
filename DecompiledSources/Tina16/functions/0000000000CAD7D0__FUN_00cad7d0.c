/* Ghidra address: 00cad7d0 */
/* Ghidra symbol: FUN_00cad7d0 */


undefined8 FUN_00cad7d0(longlong *param_1,char param_2)

{
  undefined8 local_30;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x188))(param_1,local_20,8,0);
  local_30 = FUN_00878370(local_20[0],0);
  if (param_2 != '\0') {
    local_30 = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0xb8))
                         (*(longlong **)PTR_DAT_020050b0,local_30);
  }
  FUN_00419430(local_20,&DAT_0086e978);
  return local_30;
}

