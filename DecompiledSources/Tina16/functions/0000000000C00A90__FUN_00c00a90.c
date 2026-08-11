/* Ghidra address: 00c00a90 */
/* Ghidra symbol: FUN_00c00a90 */


void FUN_00c00a90(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  longlong local_20;
  
  local_20 = 0;
  if (*(char *)(param_1 + 0x498) != '\0') {
    FUN_00be0c60(*(undefined8 *)(param_1 + 0x4a8),&local_20,param_2);
    iVar2 = 0;
    if (local_20 != 0) {
      iVar2 = (int)*(undefined8 *)(local_20 + -8);
    }
    iVar1 = 0;
    if (iVar2 - 1U < 0x80000000) {
      do {
        FUN_00c00770(param_1,*(undefined4 *)(local_20 + (longlong)iVar1 * 4),0);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00bf3990(param_1,0xffffffff,0xffffffff);
    FUN_00bf37c0(param_1,0xffffffff,0xffffffff);
    FUN_00c03710(param_1);
  }
  FUN_00419430(&local_20,&DAT_004066f0);
  return;
}

