/* Ghidra address: 00d59f60 */
/* Ghidra symbol: FUN_00d59f60 */


void FUN_00d59f60(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_38 [16];
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
    if (((cVar2 == '\0') && (0 < *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10))) &&
       (0 < *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14))) {
      uVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
      FUN_00423010(local_38,param_3,param_4,*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10),
                   *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
      uVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
      FUN_005fead0(uVar3,local_38,uVar4,param_1 + 0x10);
    }
  }
  return;
}

