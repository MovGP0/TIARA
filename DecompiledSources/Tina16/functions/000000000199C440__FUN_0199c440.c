/* Ghidra address: 0199c440 */
/* Ghidra symbol: FUN_0199c440 */


undefined8 FUN_0199c440(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_30;
  undefined1 local_2c [28];
  
  FUN_0199c320(local_2c,&PTR_FUN_01984a48,param_2,param_3);
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1,local_2c,&local_30);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00b94e60(param_1,local_30);
  }
  return uVar2;
}

