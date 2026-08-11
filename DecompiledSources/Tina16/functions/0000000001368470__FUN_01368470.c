/* Ghidra address: 01368470 */
/* Ghidra symbol: FUN_01368470 */


void FUN_01368470(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  char local_29;
  undefined1 local_28 [8];
  int local_20;
  undefined4 local_1c;
  
  if (0 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x10)) {
    FUN_0134f550(param_2,param_3);
  }
  uVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0x28),
                       *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -1);
  uVar1 = FUN_00b959c0(uVar2);
  local_1c._0_2_ = (short)uVar1;
  lVar3 = (longlong)(short)local_1c;
  local_1c._2_2_ = (short)((uint)uVar1 >> 0x10);
  lVar4 = (longlong)local_1c._2_2_;
  local_1c = uVar1;
  FUN_019a4820(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8),lVar3,lVar4,local_28,
               &local_20,&local_29);
  if ((local_20 == -1) || (*(char *)(param_1 + 0x21) != local_29)) {
    *(undefined2 *)(param_1 + 0x1e) = 6;
  }
  else {
    *(undefined2 *)(param_1 + 0x1e) = 0x1c;
  }
  return;
}

