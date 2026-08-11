/* Ghidra address: 01d3e720 */
/* Ghidra symbol: FUN_01d3e720 */


undefined8 FUN_01d3e720(int param_1)

{
  char cVar1;
  
  if (((((param_1 < 10000) || (param_1 == 0x2901)) || (param_1 == 0x2902)) ||
      (((param_1 == 0x2903 || (cVar1 = FUN_01d3d600(param_1), cVar1 != '\0')) ||
       (cVar1 = FUN_01d3e700(param_1), cVar1 != '\0')))) &&
     ((((cVar1 = FUN_01d3d530(param_1), cVar1 == '\0' &&
        ((cVar1 = FUN_01d3d590(param_1), cVar1 == '\0' ||
         (cVar1 = FUN_01d40050(param_1), cVar1 != '\0')))) && (param_1 != 0x3ef)) &&
      (((param_1 != 0x44f && (param_1 != 0x45d)) && (param_1 != 0x889)))))) {
    return 0;
  }
  return 1;
}

