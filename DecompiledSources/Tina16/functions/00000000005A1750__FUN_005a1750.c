/* Ghidra address: 005a1750 */
/* Ghidra symbol: FUN_005a1750 */


void FUN_005a1750(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong local_20 [2];
  
  cVar1 = FUN_005a46d0(*(undefined8 *)(param_1 + 8),param_2,local_20);
  if (cVar1 != '\0') {
    iVar3 = *(int *)(local_20[0] + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        if (*(longlong *)(*(longlong *)(local_20[0] + 8) + 8 + (longlong)iVar2 * 0x20) == param_3) {
          FUN_005a1c80(local_20[0],iVar2,param_4);
          return;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

