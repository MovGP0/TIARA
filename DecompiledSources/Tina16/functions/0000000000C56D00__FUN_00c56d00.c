/* Ghidra address: 00c56d00 */
/* Ghidra symbol: FUN_00c56d00 */


void FUN_00c56d00(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x4f0) != param_2) && (*(char *)(param_1 + 0x4f5) != '\0')) {
    if ((*(int *)(param_1 + 0x4f0) == *(int *)(param_1 + 0x4f8)) &&
       (*(char *)(param_1 + 0x50d) != '\0')) {
      uVar2 = (undefined4)CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x4f0) >> 8),1);
    }
    else {
      uVar2 = 0;
    }
    FUN_00c55c70(param_1,*(int *)(param_1 + 0x4f0),uVar2);
    *(int *)(param_1 + 0x4f0) = param_2;
    if (param_2 == *(int *)(param_1 + 0x4ec)) {
      if ((*(int *)(param_1 + 0x4f0) == *(int *)(param_1 + 0x4f8)) &&
         (*(char *)(param_1 + 0x50d) != '\0')) {
        uVar2 = (undefined4)CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x4f0) >> 8),1);
      }
      else {
        uVar2 = 0;
      }
      FUN_00c55c70(param_1,param_2,uVar2);
    }
    FUN_00c55f20(param_1);
    pcVar1 = (code *)FUN_00411550(param_1,0xffac);
    (*pcVar1)(param_1);
  }
  return;
}

