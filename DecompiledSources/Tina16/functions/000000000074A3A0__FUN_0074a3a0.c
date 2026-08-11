/* Ghidra address: 0074a3a0 */
/* Ghidra symbol: FUN_0074a3a0 */


void FUN_0074a3a0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  pcVar1 = (code *)*param_2;
  uVar2 = param_2[1];
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x498) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x498),iVar4);
      (*pcVar1)(uVar2,uVar3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

