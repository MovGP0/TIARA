/* Ghidra address: 0045c2b0 */
/* Ghidra symbol: FUN_0045c2b0 */


undefined8 FUN_0045c2b0(undefined8 param_1,longlong *param_2,int param_3)

{
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_30[0] = 0;
  local_20 = FUN_0041e250(&DAT_004045d8,(longlong)((param_3 + 1) * 2));
  if (param_3 < (int)param_2[2]) {
    (**(code **)(*param_2 + -0x60))(param_2,local_30);
    FUN_0041f550(&DAT_004045d8,&local_20,local_30[0],param_3 + 1);
  }
  else {
    (**(code **)(*param_2 + -0x60))(param_2,&local_38);
    FUN_0041f550(&DAT_004045d8,&local_20,local_38,0xffffffff);
  }
  FUN_0045bf00(local_58,&local_20,param_2,param_3);
  FUN_0045bf40(param_1,local_58);
  FUN_00414560(&local_38,2);
  return local_20;
}

