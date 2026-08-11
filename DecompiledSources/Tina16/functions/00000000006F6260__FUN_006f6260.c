/* Ghidra address: 006f6260 */
/* Ghidra symbol: FUN_006f6260 */


void FUN_006f6260(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_48;
  int local_44;
  undefined1 local_38 [8];
  undefined8 local_30;
  
  FUN_0064ec10(param_1);
  *(undefined8 *)(param_1 + 0x550) = 0;
  thunk_FUN_03cc0d62(&local_30);
  local_30 = FUN_0064d3a0(param_1,&local_30);
  if (*(int *)(param_1 + 0x54c) == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),*(int *)(param_1 + 0x54c));
  }
  *(undefined4 *)(param_1 + 0x54c) = 0xffffffff;
  if (lVar2 == 0) {
    lVar2 = FUN_006f7390(param_1,local_30 & 0xffffffff,local_30._4_4_);
  }
  if (lVar2 != 0) {
    uVar3 = FUN_0065b870(param_1);
    iVar1 = FUN_006ef6e0(lVar2);
    lVar4 = thunk_FUN_041b2403(uVar3,0x1021,(longlong)iVar1,local_38);
    if (lVar4 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x4d0);
      FUN_007d5670(uVar3,lVar4);
      FUN_006ef7e0(lVar2,&local_48,0);
      FUN_0065ff40(uVar3,0,(int)local_30 - local_48,local_30._4_4_ - local_44);
    }
  }
  return;
}

