/* Ghidra address: 00cebde0 */
/* Ghidra symbol: FUN_00cebde0 */


undefined8 FUN_00cebde0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char *in_stack_ffffffffffffff98;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  char local_19 [9];
  
  local_30[0] = 0;
  lVar1 = FUN_00cebce0(param_2);
  if (lVar1 == 0) {
    FUN_00419430(param_1,&DAT_0086e978);
    local_19[0] = '\0';
    if (DAT_01eb13f0 != (code *)0x0) {
      in_stack_ffffffffffffff98 = local_19;
      (*DAT_01eb13f0)(DAT_01eb13f8,param_2,param_3,param_1,in_stack_ffffffffffffff98);
    }
    if (local_19[0] == '\0') {
      FUN_0041ddd0(local_30,PTR_LAB_02004670);
      local_38 = 0x11;
      local_40 = param_2;
      uVar2 = FUN_0044d530(&PTR_FUN_00ceba00,1,local_30[0],&local_40,
                           (ulonglong)in_stack_ffffffffffffff98 & 0xffffffff00000000);
      FUN_004134c0(uVar2);
    }
  }
  else {
    (**(code **)(lVar1 + 8))(lVar1,param_1,param_2,param_3);
  }
  FUN_00414480(local_30);
  return param_1;
}

