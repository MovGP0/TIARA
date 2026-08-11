/* Ghidra address: 00abfca0 */
/* Ghidra symbol: FUN_00abfca0 */


void FUN_00abfca0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  FUN_00ac3640(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x92) != '\0') {
    iVar1 = *(int *)(param_1 + 0x74);
    iVar2 = iVar1 - *(int *)(*(longlong *)(param_1 + 0x18) + 0x94);
    if (((*(int *)(param_3 + 4) + 5 < iVar2) && (iVar2 < *(int *)(param_3 + 0xc))) &&
       (iVar1 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x218))) {
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x218) = iVar1;
    }
  }
  return;
}

