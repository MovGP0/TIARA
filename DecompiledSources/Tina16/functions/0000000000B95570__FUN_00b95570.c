/* Ghidra address: 00b95570 */
/* Ghidra symbol: FUN_00b95570 */


undefined4 FUN_00b95570(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_1c;
  
  local_1c = (undefined4)param_1[2];
  if ((char)param_1[4] == '\0') {
    uVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
    cVar1 = (**(code **)(*param_1 + 0x40))(param_1,uVar2,&local_1c);
    if ((cVar1 == '\0') || (*(char *)((longlong)param_1 + 0x21) != '\0')) {
      FUN_00b94f50(param_1,local_1c,param_2);
    }
  }
  else {
    FUN_00b94f50(param_1,local_1c,param_2);
  }
  return local_1c;
}

