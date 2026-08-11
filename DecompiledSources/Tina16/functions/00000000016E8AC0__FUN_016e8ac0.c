/* Ghidra address: 016e8ac0 */
/* Ghidra symbol: FUN_016e8ac0 */


void FUN_016e8ac0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 in_RAX;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x3c) < -1) {
    in_RAX = FUN_016eebb0(*(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x38),0);
    *(int *)(param_1 + 0x3c) = (int)in_RAX;
  }
  if (param_5 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_5 & 0x1f) & 0xe2U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    *(undefined8 *)(param_1 + 0x10) = param_2[1];
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1b8) +
     (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8) = *(undefined8 *)(param_1 + 0x10);
    uVar1 = FUN_0040c840(*param_2);
    uVar1 = FUN_00b905e0(uVar1,0);
    iVar2 = FUN_00b905f0(uVar1,3);
    *(undefined8 *)(param_1 + 8) =
         *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1b8 + (longlong)iVar2 * 8) +
          (longlong)(*(int *)(param_1 + 0x3c) + 1) * 8);
  }
  return;
}

