/* Ghidra address: 0140c130 */
/* Ghidra symbol: FUN_0140c130 */


void FUN_0140c130(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uVar1 = *(undefined8 *)(param_1 + 0x710);
  uVar2 = *(undefined8 *)(param_1 + 0x718);
  local_30 = *(undefined8 *)(param_1 + 0x720);
  uVar6 = *(undefined4 *)(param_1 + 0x728);
  iVar3 = *(int *)(param_1 + 0x710);
  if ((((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) ||
     (((iVar3 == 4 || (iVar3 == 3)) || (iVar3 == 5)))) {
    if (*(char *)(param_1 + 0x734) == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  else {
    uVar4 = FUN_0140bf50(param_1,*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(param_1 + 0x6e0),
                         uVar6);
    uVar5 = FUN_0140bf50(param_1,*(undefined8 *)(param_1 + 0x6f8),*(undefined8 *)(param_1 + 0x6f0),
                         uVar6);
    local_30 = CONCAT44(uVar5,uVar4);
  }
  uVar6 = FUN_0140bf50(param_1,*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(param_1 + 0x6b8),
                       uVar6);
  uStack_38 = CONCAT44(uVar6,(int)uVar2);
  if (*(char *)(param_1 + 0x700) == '\0') {
    local_40 = CONCAT44((int)((ulonglong)uVar1 >> 0x20),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x6b0) + 0x4a8));
    *(undefined8 *)(param_1 + 0x710) = local_40;
    *(undefined8 *)(param_1 + 0x718) = uStack_38;
    *(undefined8 *)(param_1 + 0x720) = local_30;
  }
  return;
}

