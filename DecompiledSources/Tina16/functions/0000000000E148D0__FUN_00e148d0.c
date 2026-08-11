/* Ghidra address: 00e148d0 */
/* Ghidra symbol: FUN_00e148d0 */


void FUN_00e148d0(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00e145f0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x60) + 8),
                       *(undefined4 *)(param_1 + 0x34),param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x33) = uVar2;
  if (*(char *)(param_1 + 0x33) == '\0') {
    uVar3 = FUN_00e144b0(&DAT_00e12fd8,1,*(undefined4 *)(param_1 + 0x34));
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    uVar2 = FUN_00e145d0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),
                         *(undefined4 *)(param_1 + 0x2c));
    *(undefined1 *)(param_1 + 0x2b) = uVar2;
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x60) + 8);
    (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined8 *)(param_1 + 0x38));
  }
  else {
    uVar2 = FUN_00e145d0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),
                         *(undefined4 *)(param_1 + 0x2c));
    *(undefined1 *)(param_1 + 0x2b) = uVar2;
  }
  return;
}

