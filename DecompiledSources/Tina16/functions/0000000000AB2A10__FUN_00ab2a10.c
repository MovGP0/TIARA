/* Ghidra address: 00ab2a10 */
/* Ghidra symbol: FUN_00ab2a10 */


undefined8
FUN_00ab2a10(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  
  if ((((*(int *)(param_1 + 0x7c) <= param_3) && (param_3 < *(int *)(param_1 + 0x80))) &&
      (*(int *)(param_1 + 0x14c) <= param_2)) &&
     ((param_2 <= *(int *)(param_1 + 300) + *(int *)(param_1 + 0x14c) &&
      (cVar1 = FUN_00ab2890(auStack_48,param_2,param_3), cVar1 != '\0')))) {
    return 1;
  }
  local_28 = param_5;
  local_20 = param_6;
  uVar2 = FUN_00ac36f0(param_1,param_2,param_3,param_4);
  return uVar2;
}

