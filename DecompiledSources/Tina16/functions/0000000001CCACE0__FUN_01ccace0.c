/* Ghidra address: 01ccace0 */
/* Ghidra symbol: FUN_01ccace0 */


double FUN_01ccace0(longlong *param_1,double param_2)

{
  double dVar1;
  double local_48;
  double local_40;
  double local_38;
  double local_30 [3];
  
  dVar1 = (double)(**(code **)(*param_1 + 0x58))(param_1,param_1[0xb]);
  if (dVar1 <= param_2) {
    dVar1 = (double)(**(code **)(*param_1 + 0x60))(param_1,param_1[0xb]);
    if (param_2 <= dVar1) {
      FUN_01cc8120(param_1,param_2,local_30,&local_38,&local_40,&local_48);
      dVar1 = (double)FUN_0040c850(local_38 - local_30[0]);
      if (1e-15 <= dVar1) {
        local_40 = ((param_2 - local_30[0]) * (local_48 - local_40)) / (local_38 - local_30[0]) +
                   local_40;
      }
    }
    else {
      local_40 = (double)(**(code **)(*param_1 + 0x70))(param_1,param_1[0xb]);
    }
  }
  else {
    local_40 = (double)(**(code **)(*param_1 + 0x68))(param_1,param_1[0xb]);
  }
  return local_40;
}

