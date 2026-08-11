/* Ghidra address: 01bd35f0 */
/* Ghidra symbol: FUN_01bd35f0 */


void FUN_01bd35f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x228))(param_1);
  if ((cVar2 != '\0') && (*(char *)((longlong)param_1 + 0x363) == '\0')) {
    lVar1 = *(longlong *)(param_1[0x62] + 0x80);
    uVar3 = FUN_00635840(*(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x28),0x13);
    uVar4 = FUN_0060f4c0(*(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x28),uVar3);
    FUN_005fda60(lVar1,uVar4);
  }
  FUN_01c04730(param_1,param_2);
  return;
}

