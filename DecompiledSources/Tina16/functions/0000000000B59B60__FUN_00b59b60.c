/* Ghidra address: 00b59b60 */
/* Ghidra symbol: FUN_00b59b60 */


void FUN_00b59b60(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_00b59cd0(param_1,param_4);
  if ((char)uVar1 == '\0') {
    uVar2 = FUN_00b58710(&DAT_00b4b580,1,*(undefined8 *)(param_1 + 0x10));
    FUN_00b58a40(uVar2,param_4);
    uVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),param_2);
    FUN_00b58af0(uVar2,uVar3);
    FUN_004aec30(*(undefined8 *)(param_1 + 8),param_3,uVar2);
    iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar4);
        FUN_00b58a00(uVar2);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    uVar2 = FUN_00b146c0(&PTR_FUN_00b141e0,1,uVar1);
    FUN_004134c0(uVar2);
  }
  return;
}

