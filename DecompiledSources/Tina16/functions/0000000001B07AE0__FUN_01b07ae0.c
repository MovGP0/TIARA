/* Ghidra address: 01b07ae0 */
/* Ghidra symbol: FUN_01b07ae0 */


void FUN_01b07ae0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  bool bVar2;
  
  FUN_017c52b0(param_1 + 0x118,param_2);
  FUN_017c52b0(param_1 + 0x128,param_2);
  FUN_017c52b0(param_1 + 0x138,param_2);
  FUN_017c52b0(param_1 + 0x140,param_2);
  uVar1 = (ulonglong)param_2;
  FUN_017c52b0(param_1 + 0x130,uVar1);
  if (*(char *)(param_1 + 0x5db) != '\x06') {
    if (*(byte *)(param_1 + 0x98) < 0x10) {
      bVar2 = ((int)CONCAT62((int6)(uVar1 >> 0x10),1) << (*(byte *)(param_1 + 0x98) & 0x1f) & 0x162U
              ) != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      FUN_017c52b0(param_1 + 0x148,param_2);
      if (*(char *)(param_1 + 0x98) == '\b') {
        FUN_017c52b0(param_1 + 0x150,param_2);
      }
    }
  }
  FUN_017c5530(param_1 + 0x178,param_1 + 0x238,param_2);
  FUN_01b0f5c0(param_1);
  FUN_0040d200(param_1 + 0x278,0x38,0);
  FUN_0040d200(param_1 + 0x50,0x38,0);
  FUN_01b0f5e0(param_1);
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FUN_01b10ac0(*(longlong *)(param_1 + 0x4c0),param_2);
  }
  return;
}

