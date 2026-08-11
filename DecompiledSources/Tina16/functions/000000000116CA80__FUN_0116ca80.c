/* Ghidra address: 0116ca80 */
/* Ghidra symbol: FUN_0116ca80 */


void FUN_0116ca80(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0203aea8;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  DAT_0203aea8 = *(undefined4 *)(DAT_0203d9a8 + 200);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(DAT_0203d9a8 + 200);
  (*(code *)**(undefined8 **)(param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  DAT_0203aea8 = uVar2;
  return;
}

