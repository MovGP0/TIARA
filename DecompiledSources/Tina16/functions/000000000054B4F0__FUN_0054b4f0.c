/* Ghidra address: 0054b4f0 */
/* Ghidra symbol: FUN_0054b4f0 */


undefined8 FUN_0054b4f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x10))(param_1,local_20);
    uVar2 = FUN_0044d490(&PTR_FUN_004368f0,1,local_20[0]);
    FUN_004134c0(uVar2);
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
  FUN_00414480(local_20);
  return param_2;
}

