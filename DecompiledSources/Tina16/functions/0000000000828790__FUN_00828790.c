/* Ghidra address: 00828790 */
/* Ghidra symbol: FUN_00828790 */


void FUN_00828790(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffa8;
  int local_2c;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x3c) == '\0') {
    uVar5 = 0;
    if (param_3 != 0) {
      uVar5 = *(undefined4 *)(param_3 + -4);
    }
    uVar4 = FUN_00416740(param_3);
    thunk_FUN_041a24be(param_2,uVar4,uVar5,param_4,CONCAT44(uVar2,param_5));
    return;
  }
  if (*(char *)(param_1 + 0x90) != '\x01') {
    uVar4 = FUN_00781840();
    cVar1 = FUN_00779360(uVar4);
    if ((cVar1 != '\0') || (*(char *)(*(longlong *)(param_1 + 0x70) + 0x50) == '\0')) {
      local_2c = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x70) + 0x28);
      goto LAB_00828826;
    }
  }
  uVar4 = FUN_00781840();
  cVar1 = FUN_007790b0(uVar4,*(longlong *)(param_1 + 0x70) + 0x30,2,&local_2c);
  if ((cVar1 == '\0') || (local_2c == 0x1fffffff)) {
    local_2c = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x70) + 0x28);
  }
LAB_00828826:
  uVar2 = FUN_0060f580(param_5);
  uVar3 = FUN_0060f570(uVar2);
  if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x2d) != '\0') {
    uVar3 = uVar3 | 0x800000;
  }
  uVar4 = FUN_00781840();
  FUN_00778f70(uVar4,param_2,*(longlong *)(param_1 + 0x70) + 0x30,param_3,param_4,uVar3,local_2c,0);
  return;
}

