/* Ghidra address: 01ccb070 */
/* Ghidra symbol: FUN_01ccb070 */


undefined8 FUN_01ccb070(longlong *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  double local_40 [5];
  
  dVar1 = (double)(**(code **)(*param_1 + 0x58))(param_1,param_1[0xb]);
  if (dVar1 <= param_2) {
    dVar1 = (double)(**(code **)(*param_1 + 0x60))(param_1,param_1[0xb]);
    if (param_2 <= dVar1) {
      FUN_01cc8120(param_1,param_2,local_40,&local_48,&local_50,&local_58);
      dVar1 = (double)FUN_0040c850(param_2 - local_40[0]);
      dVar2 = (double)FUN_0040c850(param_2 - local_48);
      if (dVar1 < dVar2) {
        local_58 = local_50;
      }
    }
    else {
      local_58 = (**(code **)(*param_1 + 0x70))(param_1,param_1[0xb]);
    }
  }
  else {
    local_58 = (**(code **)(*param_1 + 0x68))(param_1,param_1[0xb]);
  }
  return local_58;
}

