/* Ghidra address: 016262d0 */
/* Ghidra symbol: FUN_016262d0 */


undefined8 FUN_016262d0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    cVar1 = FUN_0161bbd0(param_1);
    if ((cVar1 != '\0') &&
       ((cVar1 = FUN_0161bbd0(param_2), cVar1 != '\0' &&
        (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))))) {
      return CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0xc) >> 8),1);
    }
    cVar1 = FUN_0161bbb0(param_1);
    if (((cVar1 != '\0') && (cVar1 = FUN_0161bbb0(param_2), cVar1 != '\0')) &&
       (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) {
      return CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0xc) >> 8),1);
    }
    cVar1 = FUN_0161bb80(param_1);
    if (((cVar1 != '\0') && (cVar1 = FUN_0161bb80(param_2), cVar1 != '\0')) &&
       ((cVar1 = FUN_0161bba0(param_1,param_2), cVar1 != '\0' &&
        (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))))) {
      return CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0xc) >> 8),1);
    }
  }
  return 0;
}

