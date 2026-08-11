/* Ghidra address: 0065bfd0 */
/* Ghidra symbol: FUN_0065bfd0 */


void FUN_0065bfd0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x360) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x360) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x360),iVar3);
        FUN_004ae7e0(param_2,uVar1);
        pcVar2 = (code *)FUN_00411550(uVar1,0xffae);
        (*pcVar2)(uVar1,param_2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

