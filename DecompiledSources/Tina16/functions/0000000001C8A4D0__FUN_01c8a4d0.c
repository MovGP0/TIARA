/* Ghidra address: 01c8a4d0 */
/* Ghidra symbol: FUN_01c8a4d0 */


void FUN_01c8a4d0(longlong param_1,char param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (*(longlong *)PTR_DAT_020057d0 != 0) {
    if ((param_2 == '\0') || (*(char *)(*(longlong *)(param_1 + 0xfd8) + 0x80) == '\0')) {
      if ((*(longlong *)PTR_DAT_020057d0 != 0) &&
         (cVar1 = (**(code **)(**(longlong **)PTR_DAT_020057d0 + 0xf8))
                            (*(longlong **)PTR_DAT_020057d0), cVar1 == '\0')) {
        FUN_00800030(param_1,*(undefined8 *)(param_1 + 0x24f0));
        uVar6 = FUN_0065b870(param_1);
        uVar6 = thunk_FUN_0417c6e9(uVar6,0);
        thunk_FUN_04048b08(uVar6,0xf060,0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c0),1);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c8),1);
        if (*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x500) == 0) {
          FUN_00800030(*(undefined8 *)PTR_DAT_020057d0,
                       *(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x6c0));
        }
        FUN_0064c650(*(undefined8 *)PTR_DAT_020057d0,0);
        *(int *)(param_1 + 0x1874) = *(int *)(param_1 + 0x1874) + 10;
        FUN_0064f700(*(undefined8 *)PTR_DAT_020057d0,param_1 + 0x1870);
      }
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0xa10),1);
    }
    else {
      if (param_3 != '\0') {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0xa10),0);
        cVar1 = (**(code **)(**(longlong **)PTR_DAT_020057d0 + 0xf8))
                          (*(longlong **)PTR_DAT_020057d0);
        if (cVar1 != '\0') {
          if (*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x500) != 0) {
            FUN_00800030(*(undefined8 *)PTR_DAT_020057d0,0);
          }
          FUN_00800030(param_1,*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x6c0));
          uVar6 = FUN_0065b870(param_1);
          uVar6 = thunk_FUN_0417c6e9(uVar6,0);
          thunk_FUN_04048b08(uVar6,0xf060,1);
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c8),0);
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c0),0);
          uVar2 = FUN_007fd7d0(*(undefined8 *)PTR_DAT_020057d0);
          uVar3 = FUN_007fd800(*(undefined8 *)PTR_DAT_020057d0);
          iVar4 = FUN_007fd7d0(*(undefined8 *)PTR_DAT_020057d0);
          iVar5 = FUN_007fd800(*(undefined8 *)PTR_DAT_020057d0);
          FUN_00498350(&local_38,uVar2,uVar3,iVar4 + *(int *)(*(longlong *)PTR_DAT_020057d0 + 0x98),
                       iVar5 + *(int *)(*(longlong *)PTR_DAT_020057d0 + 0x9c));
          *(undefined8 *)(param_1 + 0x1870) = local_38;
          *(undefined8 *)(param_1 + 0x1878) = uStack_30;
          FUN_0064f3f0(*(undefined8 *)PTR_DAT_020057d0,param_1,0,3);
          FUN_0064c650(*(undefined8 *)PTR_DAT_020057d0,5);
        }
      }
      if (param_3 == '\0') {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0xa10),1);
        FUN_007fdf50(*(undefined8 *)PTR_DAT_020057d0,0);
      }
    }
  }
  return;
}

