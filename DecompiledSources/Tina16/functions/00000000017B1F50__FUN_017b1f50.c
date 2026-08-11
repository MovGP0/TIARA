/* Ghidra address: 017b1f50 */
/* Ghidra symbol: FUN_017b1f50 */


undefined8 FUN_017b1f50(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_30;
  
  uVar2 = 0xffffffff;
  if (*(char *)(param_1 + 0x21) != '\0') {
    local_30 = FUN_00498310(param_2,param_3);
    cVar1 = FUN_017ad570(param_1 + 0x18,&local_30);
    if (cVar1 != '\0') {
      uVar2 = 0;
    }
    local_30 = FUN_00498310(param_2,param_3);
    cVar1 = FUN_017ad570(param_1 + 0x48,&local_30);
    if (cVar1 != '\0') {
      uVar2 = 1;
    }
  }
  return uVar2;
}

