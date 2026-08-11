/* Ghidra address: 0080aa70 */
/* Ghidra symbol: FUN_0080aa70 */


void FUN_0080aa70(longlong param_1,undefined1 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_28;
  undefined1 local_20;
  
  local_28 = *(longlong *)(param_1 + 0x2d0);
  if (local_28 != 0) {
    if (*(int *)(param_1 + 0x128) == 0) {
      local_20 = param_2;
      thunk_FUN_039eeba8(FUN_0080a970,&local_28);
      if (*(int *)(*(longlong *)(param_1 + 0x120) + 0x10) != 0) {
        local_28 = thunk_FUN_03f32902(local_28,3);
        uVar1 = thunk_FUN_04118143(local_28,0xffffffec);
        if ((uVar1 & 8) != 0) {
          local_28 = -2;
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x120) + 0x10) + -1;
        if (-1 < iVar3) {
          do {
            uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x120),iVar3);
            thunk_FUN_041cc6e2(uVar2,local_28,0,0,0,0,0x213);
            iVar3 = iVar3 + -1;
          } while (iVar3 != -1);
        }
      }
    }
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  }
  return;
}

