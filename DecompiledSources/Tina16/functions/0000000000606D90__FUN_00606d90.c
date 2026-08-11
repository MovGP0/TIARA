/* Ghidra address: 00606d90 */
/* Ghidra symbol: FUN_00606d90 */


void FUN_00606d90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_00606460(param_1);
  }
  else if (1 < *(int *)(*(longlong *)(param_1 + 0x48) + 8)) {
    lVar2 = FUN_00410e60(&PTR_FUN_005f84b0,1);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
    if (lVar1 != 0) {
      uVar3 = thunk_FUN_04130c1a(lVar1,0);
      *(undefined8 *)(lVar2 + 0x10) = uVar3;
    }
    *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x1c);
    *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x18);
    *(undefined2 *)(lVar2 + 0x28) = *(undefined2 *)(*(longlong *)(param_1 + 0x48) + 0x28);
    *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x2c);
    *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x30);
    FUN_00607b80(*(undefined8 *)(param_1 + 0x48));
    *(longlong *)(param_1 + 0x48) = lVar2;
    FUN_00607b70(lVar2);
  }
  return;
}

