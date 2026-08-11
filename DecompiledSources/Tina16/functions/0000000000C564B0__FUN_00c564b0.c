/* Ghidra address: 00c564b0 */
/* Ghidra symbol: FUN_00c564b0 */


void FUN_00c564b0(longlong param_1,char param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x4f4) != param_2) {
    *(char *)(param_1 + 0x4f4) = param_2;
    if ((*(int *)(param_1 + 0x4ec) == *(int *)(param_1 + 0x4f8)) &&
       (*(char *)(param_1 + 0x50d) != '\0')) {
      uVar1 = (undefined4)CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x4ec) >> 8),1);
    }
    else {
      uVar1 = 0;
    }
    FUN_00c55c70(param_1,*(undefined4 *)(param_1 + 0x4ec),uVar1);
    FUN_00c55f20(param_1);
  }
  return;
}

