/* Ghidra address: 01996fd0 */
/* Ghidra symbol: FUN_01996fd0 */


undefined8 FUN_01996fd0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0));
  iVar1 = (**(code **)(*plVar2 + 0x210))(plVar2,param_3);
  if ((iVar1 == -1) && (*(char *)(param_1 + 0x73) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

