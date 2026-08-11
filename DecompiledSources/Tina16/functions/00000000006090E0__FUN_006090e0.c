/* Ghidra address: 006090e0 */
/* Ghidra symbol: FUN_006090e0 */


void FUN_006090e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_00609d70(param_1);
  lVar1 = *(longlong *)(param_1 + 0x60);
  *(undefined4 *)(lVar1 + 0x80) = 0;
  *(undefined4 *)(lVar1 + 0x84) = 0;
  uVar2 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x30) = 0;
  FUN_00410f20(uVar2);
  return;
}

