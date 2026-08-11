/* Ghidra address: 015f6e30 */
/* Ghidra symbol: FUN_015f6e30 */


void FUN_015f6e30(undefined8 param_1,longlong *param_2,undefined1 param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res8 [4];
  undefined8 local_210 [65];
  
  local_210[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (*param_2 != 0) {
    FUN_01cc6030(*param_2);
  }
  lVar1 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,10,1,0);
  *param_2 = lVar1;
  FUN_01cc6020(*param_2);
  puVar2 = (undefined8 *)FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,0);
  FUN_01cc3760(*(undefined8 *)(*param_2 + 8),*puVar2);
  FUN_015f6590(local_res8[0],*param_2,1,param_3,param_4,param_5,param_6);
  FUN_00414480(local_210);
  FUN_00414480(local_res8);
  return;
}

