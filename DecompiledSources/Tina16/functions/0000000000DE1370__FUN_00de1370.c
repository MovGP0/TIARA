/* Ghidra address: 00de1370 */
/* Ghidra symbol: FUN_00de1370 */


int FUN_00de1370(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = (**(code **)(*(longlong *)param_1[0x96] + 0x90))((longlong *)param_1[0x96],1,&local_30);
  if (iVar1 == 0) {
    iVar2 = thunk_FUN_03f3ed25(local_30,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x9ec)
    ;
    iVar3 = thunk_FUN_03f3ed25(local_2c,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x9ec)
    ;
    if (((*(uint *)(param_1 + 0x9e) & 0x400) != 0) && (param_1[0x98] == 0)) {
      if (0x20 < iVar2) {
        iVar2 = 0x20;
      }
      if (0x20 < iVar3) {
        iVar3 = 0x20;
      }
    }
    (**(code **)(*param_1 + 400))
              (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),iVar2,iVar3);
  }
  return iVar1;
}

