/* Ghidra address: 01136fb0 */
/* Ghidra symbol: FUN_01136fb0 */


double FUN_01136fb0(undefined8 param_1,double param_2,char param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  double local_38;
  char local_29 [25];
  
  FUN_01138af0(param_1,local_29,&local_38,local_40,local_48,&local_50);
  if ((byte)(local_29[0] - 1U) < 3) {
    if (param_3 == '\0') {
      dVar3 = param_2 * local_38 + local_50 / 360.0;
      iVar1 = FUN_0040c840(dVar3 / 10000.0);
      iVar2 = FUN_0040c840(dVar3 - (double)(iVar1 * 10000));
      local_38 = (((double)(iVar2 + 1) - local_50 / 360.0) + (double)(iVar1 * 10000)) / local_38;
    }
    else {
      dVar3 = param_2 * local_38 + local_50 / 360.0 + 0.5;
      iVar1 = FUN_0040c840(dVar3 / 10000.0);
      iVar2 = FUN_0040c840(dVar3 - (double)(iVar1 * 10000));
      local_38 = (((double)(iVar2 + 1) - local_50 / 360.0) + (double)(iVar1 * 10000) + 0.5) /
                 local_38;
    }
  }
  else {
    local_38 = 0.0;
  }
  return local_38;
}

