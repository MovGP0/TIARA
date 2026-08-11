/* Ghidra address: 00682b30 */
/* Ghidra symbol: FUN_00682b30 */


void FUN_00682b30(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if (PTR_DAT_02005bd0[0xc] != '\0') {
    iVar1 = FUN_0044f060();
    if ((iVar1 != 2) && ((*(uint *)(param_2 + 1) & 0x800) != 0)) {
      uVar2 = thunk_FUN_0411ba23(*(undefined4 *)((longlong)param_2 + 0xc),param_2 + 0xf,
                                 &LAB_00682d58,*(uint *)(param_2 + 1) & 0xfffff7ff,
                                 *(undefined4 *)(param_2 + 2),
                                 *(undefined4 *)((longlong)param_2 + 0x14),
                                 *(undefined4 *)(param_2 + 3),
                                 *(undefined4 *)((longlong)param_2 + 0x1c),param_2[4],0,
                                 PTR_IMAGE_DOS_HEADER_0200c280,param_2[5]);
      *(undefined8 *)(param_1 + 0x468) = uVar2;
      if (*(longlong *)(param_1 + 0x468) != 0) {
        thunk_FUN_041b2403(*(longlong *)(param_1 + 0x468),0xcf,1,0);
      }
      goto LAB_00682cff;
    }
  }
  uVar2 = thunk_FUN_0411ba23(*(undefined4 *)((longlong)param_2 + 0xc),param_2 + 0xf,&LAB_00682d58,
                             *(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 2),
                             *(undefined4 *)((longlong)param_2 + 0x14),*(undefined4 *)(param_2 + 3),
                             *(undefined4 *)((longlong)param_2 + 0x1c),param_2[4],0,
                             PTR_IMAGE_DOS_HEADER_0200c280,param_2[5]);
  *(undefined8 *)(param_1 + 0x468) = uVar2;
LAB_00682cff:
  FUN_004167d0(&local_10,*param_2);
  FUN_00470120(*(undefined8 *)(param_1 + 0x468),0xc,0,local_10);
  FUN_00414480(&local_10);
  return;
}

