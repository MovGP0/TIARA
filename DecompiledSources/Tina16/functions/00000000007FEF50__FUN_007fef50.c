/* Ghidra address: 007fef50 */
/* Ghidra symbol: FUN_007fef50 */


void FUN_007fef50(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  
  FUN_007fadc0(param_1,param_2,param_3);
  if (*(longlong *)(param_1 + 0x698) != 0) {
    thunk_FUN_041cc6e2(*(longlong *)(param_1 + 0x698),1,*param_3,param_3[1],param_3[2] - *param_3,
                       param_3[3] - param_3[1],0x14);
    if (*(char *)(param_1 + 0x4d6) == '\x02') {
      iVar2 = thunk_FUN_03abe598(*(undefined8 *)(param_1 + 0x698),local_38);
      if (iVar2 != 0) {
        thunk_FUN_03a2fc9d(*(undefined8 *)(param_1 + 0x698),0,0xffffffff);
      }
    }
  }
  if (((*(uint *)(param_1 + 0xa4) & 0x8000) != 0) && ((*(ushort *)(param_1 + 0x34) & 1) == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x688);
    iVar2 = FUN_0064d0b0(param_1);
    iVar3 = FUN_0064d120(param_1);
    FUN_004238d0(local_48,*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar1 + 0x18),
                 iVar2 - *(int *)(*(longlong *)(param_1 + 0x688) + 0x1c),
                 iVar3 - *(int *)(*(longlong *)(param_1 + 0x688) + 0x20));
    FUN_00806e80(param_1,local_48);
  }
  return;
}

