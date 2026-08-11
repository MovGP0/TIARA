/* Ghidra address: 00b59ae0 */
/* Ghidra symbol: FUN_00b59ae0 */


void FUN_00b59ae0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = FUN_00b59cd0(param_1,param_2);
  if ((char)uVar1 == '\0') {
    lVar3 = FUN_00b58710(&DAT_00b4b580,1,*(undefined8 *)(param_1 + 0x10));
    FUN_00b58a40(lVar3,param_2);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar3);
    *(int *)(lVar3 + 0x30) = *(int *)(*(longlong *)(param_1 + 8) + 0x10) + -1;
  }
  else {
    uVar2 = FUN_00b146c0(&PTR_FUN_00b141e0,1,uVar1);
    FUN_004134c0(uVar2);
  }
  return;
}

