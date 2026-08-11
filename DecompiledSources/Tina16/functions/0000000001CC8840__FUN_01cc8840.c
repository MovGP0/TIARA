/* Ghidra address: 01cc8840 */
/* Ghidra symbol: FUN_01cc8840 */


double FUN_01cc8840(longlong *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double local_48;
  double local_40;
  double local_38;
  double local_30 [3];
  
  dVar1 = (double)(**(code **)(*param_1 + 0x58))(param_1,param_1[0xb]);
  if (dVar1 <= param_2) {
    dVar1 = (double)(**(code **)(*param_1 + 0x60))(param_1,param_1[0xb]);
    if (param_2 <= dVar1) {
      FUN_01cc8120(param_1,param_2,local_30,&local_38,&local_40,&local_48);
      dVar1 = (double)FUN_0040c850(local_30[0]);
      if (1e-30 <= dVar1) {
        dVar1 = (double)FUN_00c42800(param_2 / local_30[0]);
        dVar2 = (double)FUN_00c42800(local_38 / local_30[0]);
        local_40 = (dVar1 / dVar2) * (local_48 - local_40) + local_40;
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

