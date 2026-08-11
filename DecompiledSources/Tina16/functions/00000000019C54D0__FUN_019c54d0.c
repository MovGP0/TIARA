/* Ghidra address: 019c54d0 */
/* Ghidra symbol: FUN_019c54d0 */


undefined8
FUN_019c54d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined4 param_9,undefined4 param_10,undefined1 param_11)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_019c5560(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_019c31f0(param_1,param_2,param_8,param_9,param_10,param_11);
    if (cVar1 == '\0') {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

