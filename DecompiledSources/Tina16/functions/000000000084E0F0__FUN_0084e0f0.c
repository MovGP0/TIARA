/* Ghidra address: 0084e0f0 */
/* Ghidra symbol: FUN_0084e0f0 */


void FUN_0084e0f0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong unaff_RSI;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x610) == 0) {
    if (*(int *)(param_1 + 0x4a4) < 0x201) {
      unaff_RSI = 0;
    }
    else {
      unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
    }
    uVar1 = FUN_0084bab0(&DAT_0084a868,1,unaff_RSI & 0xffffffff);
    *(undefined8 *)(param_1 + 0x610) = uVar1;
  }
  if (*(int *)(param_1 + 0x4e0) < 0x101) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)(unaff_RSI >> 8),1);
  }
  if (*(longlong *)(param_1 + 0x608) == 0) {
    uVar1 = FUN_0084bab0(&DAT_0084a868,1,uVar2 & 0xffffffff);
    *(undefined8 *)(param_1 + 0x608) = uVar1;
  }
  if (*(longlong *)(param_1 + 0x600) == 0) {
    uVar1 = FUN_0084bab0(&DAT_0084a868,1,uVar2 & 0xffffffff);
    *(undefined8 *)(param_1 + 0x600) = uVar1;
  }
  return;
}

