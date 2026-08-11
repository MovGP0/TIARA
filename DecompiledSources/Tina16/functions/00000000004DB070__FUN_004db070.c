/* Ghidra address: 004db070 */
/* Ghidra symbol: FUN_004db070 */


undefined8 FUN_004db070(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = (**(code **)(*param_2 + 0x28))(param_2,2);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_00485650,1,PTR_PTR_02003f08);
    FUN_004134c0(uVar2);
  }
  else {
    (**(code **)(*param_2 + 0x38))(param_2,local_20,2);
    FUN_0041b890(param_1,local_20[0],&DAT_004db118);
  }
  FUN_0041b800(local_20);
  return param_1;
}

