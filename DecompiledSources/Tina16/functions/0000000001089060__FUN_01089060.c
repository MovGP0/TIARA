/* Ghidra address: 01089060 */
/* Ghidra symbol: FUN_01089060 */


void FUN_01089060(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_30 [2];
  undefined1 local_1c [12];
  
  local_30[0] = 0;
  FUN_01086170(param_1,local_30);
  uVar1 = FUN_0107a3c0(param_1,local_30[0]);
  cVar2 = FUN_01088e80(param_1,param_2,local_1c);
  if (cVar2 != '\0') {
    FUN_010aefb0(uVar1,param_2);
  }
  FUN_00414480(local_30);
  return;
}

