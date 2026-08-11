/* Ghidra address: 00786890 */
/* Ghidra symbol: FUN_00786890 */


void FUN_00786890(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = *param_2;
  if (iVar1 - 0x132U < 7) {
    uVar3 = thunk_FUN_041b2403(*(undefined8 *)(param_2 + 4),iVar1 + 0xbc00,
                               *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar3;
  }
  else if (iVar1 - 0xbd32U < 7) {
    uVar2 = FUN_005fbf20(*(undefined4 *)((longlong)param_1 + 0x1c));
    thunk_FUN_0412a071(*(undefined8 *)(param_2 + 2),uVar2);
    uVar2 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1[1] + 0x18) + 0x28));
    thunk_FUN_03e3a7dc(*(undefined8 *)(param_2 + 2),uVar2);
    uVar3 = FUN_005fdb10(param_1[1]);
    *(undefined8 *)(param_2 + 6) = uVar3;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  (**(code **)(*param_1 + -0x40))(param_1,param_2);
  return;
}

