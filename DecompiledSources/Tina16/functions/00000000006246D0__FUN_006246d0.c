/* Ghidra address: 006246d0 */
/* Ghidra symbol: FUN_006246d0 */


void FUN_006246d0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffff98;
  uint uVar4;
  undefined1 local_34 [4];
  undefined8 local_30 [2];
  
  uVar4 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar2 = FUN_00416740();
  iVar1 = thunk_FUN_03de2288(param_4,uVar2,0,&LAB_006247a8,(ulonglong)uVar4 << 0x20,0x2001f,0,
                             local_30,local_34);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = *(int *)(param_3 + -4);
    }
    uVar2 = FUN_00416740(param_2);
    uVar3 = FUN_00416740(param_3);
    iVar1 = thunk_FUN_04172861(local_30[0],uVar2,0,1,uVar3,(iVar1 + 1) * 2);
    thunk_FUN_0418fb4b(local_30[0]);
  }
  if (iVar1 != 0) {
    uVar2 = FUN_0044d710(&PTR_FUN_00620e78,1,PTR_PTR_02002870);
    FUN_004134c0(uVar2);
  }
  return;
}

