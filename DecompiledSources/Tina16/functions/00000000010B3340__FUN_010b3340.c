/* Ghidra address: 010b3340 */
/* Ghidra symbol: FUN_010b3340 */


undefined8 FUN_010b3340(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      *param_3 = lVar1;
      uVar2 = FUN_004aeba0(*(undefined8 *)(*param_3 + 0x40),param_2);
      if ((int)uVar2 != -1) {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *param_3 = 0;
  return 0xffffffff;
}

