/* Ghidra address: 004d9d80 */
/* Ghidra symbol: FUN_004d9d80 */


undefined1 FUN_004d9d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *local_30;
  undefined8 local_28;
  undefined1 local_19;
  
  local_19 = 1;
  FUN_004d9bf0(&local_30,param_1);
  if (local_30 == (code *)0x0) {
    uVar1 = FUN_0044d710(&PTR_FUN_004977f8,1,PTR_PTR_02001a80);
    FUN_004134c0(uVar1);
  }
  else {
    (*local_30)(local_28,param_2,param_3,&local_19);
  }
  return local_19;
}

