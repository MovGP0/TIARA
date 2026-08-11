/* Ghidra address: 00ad7440 */
/* Ghidra symbol: FUN_00ad7440 */


void FUN_00ad7440(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x510) + 0x68);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x510) + 0x60);
    if (lVar2 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x108);
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(lVar2 + -8);
      }
      if (lVar3 == 0) {
        FUN_00410f20();
      }
      else {
        FUN_00a9b900(lVar1,*(longlong *)(param_1 + 0x510) + 0x60,
                     *(undefined4 *)(*(longlong *)(param_1 + 0x510) + 0x7c));
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x510) + 0x60) = 0;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x510) + 0x68);
    if (*(longlong *)(*(longlong *)(param_1 + 0x4e8) + 0x80) == lVar1) {
      FUN_00a9ba60(lVar1);
      FUN_00aab2c0(*(undefined8 *)(param_1 + 0x4e0),*(undefined8 *)(param_1 + 0x4e8));
      if (*(longlong *)(param_1 + 0x4d8) != 0) {
        FUN_00ad69a0(*(undefined8 *)(param_1 + 0x4d8),
                     *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x4d0) + 0x168) + 0x10),
                     *(undefined8 *)(param_1 + 0x4e8));
      }
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x510) + 0x68) = 0;
  }
  return;
}

