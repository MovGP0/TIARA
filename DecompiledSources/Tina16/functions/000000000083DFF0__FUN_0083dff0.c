/* Ghidra address: 0083dff0 */
/* Ghidra symbol: FUN_0083dff0 */


undefined8 FUN_0083dff0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_20;
  int iStack_1c;
  
  uVar3 = FUN_0083df70(param_1);
  iVar1 = FUN_0083dfa0(param_1);
  iVar2 = FUN_008350e0(*(undefined8 *)(param_1 + 0x40));
  if (iVar1 == iVar2) {
    local_20 = (int)uVar3;
    iStack_1c = (int)((ulonglong)uVar3 >> 0x20);
    if (((local_20 == 0) || (iStack_1c == local_20)) &&
       (iVar1 = FUN_008350e0(*(undefined8 *)(param_1 + 0x40)), iStack_1c == iVar1)) {
      return 1;
    }
  }
  return 0;
}

