/* Ghidra address: 0147ccb0 */
/* Ghidra symbol: FUN_0147ccb0 */


undefined4 FUN_0147ccb0(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_004113d0(param_1,&LAB_00f256b8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_004113f0(param_1,&LAB_00f256b8);
    uVar2 = *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 0x10);
  }
  return uVar2;
}

