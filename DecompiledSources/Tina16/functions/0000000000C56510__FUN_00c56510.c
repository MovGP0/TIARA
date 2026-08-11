/* Ghidra address: 00c56510 */
/* Ghidra symbol: FUN_00c56510 */


void FUN_00c56510(longlong param_1,char param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x4f5) != param_2) {
    *(char *)(param_1 + 0x4f5) = param_2;
    if ((*(int *)(param_1 + 0x4f0) == *(int *)(param_1 + 0x4f8)) &&
       (*(char *)(param_1 + 0x50d) != '\0')) {
      uVar1 = (undefined4)CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x4f0) >> 8),1);
    }
    else {
      uVar1 = 0;
    }
    FUN_00c55c70(param_1,*(undefined4 *)(param_1 + 0x4f0),uVar1);
    FUN_00c55f20(param_1);
  }
  return;
}

