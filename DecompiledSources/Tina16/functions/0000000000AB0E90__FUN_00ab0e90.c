/* Ghidra address: 00ab0e90 */
/* Ghidra symbol: FUN_00ab0e90 */


undefined4 FUN_00ab0e90(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000058;
  int *in_stack_00000060;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  bool local_31;
  longlong local_30;
  longlong local_28;
  int *local_20;
  int local_18;
  
  local_40 = auStack_68;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 0x2d8);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if ((((*(int *)(param_1 + 0x118) == *(int *)(lVar2 + 0x2b4)) &&
       (*(int *)(param_1 + 0x74) == param_4)) && (*(int *)(param_1 + 0x7c) == param_4)) &&
     ((*(int *)(param_1 + 0x78) == param_4 && (*(int *)(param_1 + 0x68) == *in_stack_00000060)))) {
    local_28 = *(longlong *)(param_1 + 0x160);
    local_30 = local_28;
    if (local_28 != 0) {
      local_30 = *(longlong *)(local_28 + -8);
    }
    local_31 = local_30 == 0;
  }
  else {
    local_31 = true;
  }
  if (local_31 == false) {
    if (*(int *)(lVar2 + 0x2d8) == 1) {
      *(undefined1 *)(lVar2 + 0x2dc) = 1;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x2dc) == '\0') {
      *in_stack_00000060 = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x6c);
    }
    else {
      FUN_00ab0dd0(auStack_68);
    }
    if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x2d8) == 1) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x2dc) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x74) = param_4;
    *(int *)(param_1 + 0x7c) = param_4;
    *(int *)(param_1 + 0x78) = param_4;
    *(int *)(param_1 + 0x68) = *in_stack_00000060;
    local_20 = *(int **)(*(longlong *)(param_1 + 0x18) + 0x290);
    if ((local_20 == (int *)0x0) || (*local_20 != 0)) {
      local_20 = (int *)0x0;
    }
    local_40 = auStack_68;
    local_18 = param_4;
    uVar3 = FUN_00aaf690(auStack_68);
    *(undefined4 *)(param_1 + 300) = uVar3;
    uVar3 = FUN_00ab08b0(auStack_68);
    *(undefined4 *)(param_1 + 0x88) = uVar3;
    *(int *)(param_1 + 0x6c) = *in_stack_00000060 - *(int *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x88);
    *(int *)(param_1 + 0x80) = local_18 + *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x84) = local_18 + *(int *)(param_1 + 0x8c);
    if (local_20 != (int *)0x0) {
      *local_20 = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x88);
    }
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x2b4);
  }
  *in_stack_00000058 = *(undefined4 *)(param_1 + 300);
  uVar3 = *(undefined4 *)(param_1 + 0x88);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 0x2d8);
  *piVar1 = *piVar1 + -1;
  return uVar3;
}

