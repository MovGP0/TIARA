/* Ghidra address: 017afa90 */
/* Ghidra symbol: FUN_017afa90 */


void FUN_017afa90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (int)*param_2;
  iVar1 = DAT_01fa23a8 * (*(int *)(param_1 + 0x14) + local_20);
  uStack_1c = (int)((ulonglong)*param_2 >> 0x20);
  iVar2 = DAT_01fa23a8 * (*(int *)(param_1 + 0x18) + uStack_1c);
  (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))
            (*(longlong **)(param_1 + 8),iVar1 + -2,iVar2 + -2,iVar1 + 3,iVar2 + 3);
  return;
}

