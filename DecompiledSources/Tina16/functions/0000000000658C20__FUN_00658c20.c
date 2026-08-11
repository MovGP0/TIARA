/* Ghidra address: 00658c20 */
/* Ghidra symbol: FUN_00658c20 */


void FUN_00658c20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  if (PTR_DAT_02005bd0[0xc] != '\0') {
    if (*(longlong *)(param_1 + 0x350) != 0) {
      FUN_008087b0(*(undefined8 *)PTR_DAT_02005950,&local_20);
      iVar1 = FUN_0043e6d0(*(undefined8 *)(param_1 + 0x350),local_20);
      if (iVar1 != 0) {
        plVar2 = (longlong *)FUN_008084b0(*(undefined8 *)PTR_DAT_02005950);
        iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
        if (iVar1 != 0) {
          uVar3 = *(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x90);
          if (*(char *)(param_1 + 0x348) != '\0') {
            plVar2 = (longlong *)FUN_008084b0(*(undefined8 *)PTR_DAT_02005950);
            iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,*(undefined8 *)(param_1 + 0x350));
            if (-1 < iVar1) {
              plVar2 = (longlong *)FUN_008084b0(*(undefined8 *)PTR_DAT_02005950);
              uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,iVar1);
            }
          }
          thunk_FUN_03ad4659(uVar3,1);
        }
      }
    }
    FUN_00664fb0(param_2,*(undefined1 *)(param_1 + 0x348));
  }
  FUN_00414480(&local_20);
  return;
}

