/* Ghidra address: 00721d20 */
/* Ghidra symbol: FUN_00721d20 */


void FUN_00721d20(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  thunk_FUN_03e49910(param_1,&local_38);
  if (*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8) == 0) {
    uVar5 = FUN_00809cf0(*(undefined8 *)PTR_DAT_02005950);
  }
  else if (*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8) == 0) {
    uVar5 = FUN_007ffaf0();
  }
  else {
    uVar5 = FUN_007ffaf0(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8));
  }
  iVar1 = FUN_00807790(uVar5);
  iVar2 = FUN_008077f0(uVar5);
  iVar3 = FUN_008077d0(uVar5);
  iVar4 = FUN_008077b0(uVar5);
  thunk_FUN_041cc6e2(param_1,0,iVar1 + ((iVar2 - local_30) + local_38) / 2,
                     iVar3 + ((iVar4 - local_2c) + local_34) / 3,0,0,0x15);
  return;
}

