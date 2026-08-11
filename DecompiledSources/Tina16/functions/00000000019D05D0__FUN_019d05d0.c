/* Ghidra address: 019d05d0 */
/* Ghidra symbol: FUN_019d05d0 */


void FUN_019d05d0(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  uVar1 = *param_3;
  uStack_1c = (undefined4)(*param_2 >> 0x20);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 200))
            (*(longlong **)(param_1 + 0x30),*param_2 & 0xffffffff,uStack_1c);
  uStack_24 = (undefined4)(uVar1 >> 0x20);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0xc0))
            (*(longlong **)(param_1 + 0x30),uVar1 & 0xffffffff,uStack_24);
  return;
}

