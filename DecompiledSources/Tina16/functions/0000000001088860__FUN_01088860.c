/* Ghidra address: 01088860 */
/* Ghidra symbol: FUN_01088860 */


undefined8 FUN_01088860(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_20 [8];
  
  cVar1 = FUN_01085fb0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_010b13a0(*(undefined8 *)(param_1 + 0xac8),*param_3,local_20,1);
  }
  return uVar2;
}

