/* Ghidra address: 019db210 */
/* Ghidra symbol: FUN_019db210 */


void FUN_019db210(longlong param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
  uVar2 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
  (**(code **)(**(longlong **)(param_1 + 0x758) + 0xa8))
            (*(longlong **)(param_1 + 0x758),uVar1,uVar2 >> 0x20);
  return;
}

