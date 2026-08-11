/* Ghidra address: 0083e050 */
/* Ghidra symbol: FUN_0083e050 */


undefined8 FUN_0083e050(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_20;
  int iStack_1c;
  
  uVar2 = FUN_0083df70(param_1);
  iVar1 = FUN_0083dfa0(param_1);
  if ((iVar1 == 0) && (local_20 = (int)uVar2, local_20 == 0)) {
    iStack_1c = (int)((ulonglong)uVar2 >> 0x20);
    if (iStack_1c != 0) {
      iVar1 = FUN_008350e0(*(undefined8 *)(param_1 + 0x40));
      if (iStack_1c != iVar1) goto LAB_0083e08f;
    }
    uVar2 = 1;
  }
  else {
LAB_0083e08f:
    uVar2 = 0;
  }
  return uVar2;
}

