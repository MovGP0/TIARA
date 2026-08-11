/* Ghidra address: 00d74810 */
/* Ghidra symbol: FUN_00d74810 */


void FUN_00d74810(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((((param_2 != 0) && (param_3 != 0)) && (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x10) != 0))
     && (iVar1 = FUN_00d74940(param_1), iVar1 != 0)) {
    FUN_00414ad0(param_3 + 0x70,*(undefined8 *)(param_2 + 0x70));
    iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0xc0),param_2);
    if (iVar1 != -1) {
      FUN_004ae870(*(undefined8 *)(param_1 + 0xc0),iVar1);
      FUN_004aec30(*(undefined8 *)(param_1 + 0xc0),iVar1,param_3);
      iVar1 = FUN_00d74940();
      iVar3 = 0;
      if (-1 < iVar1 + -1) {
        do {
          plVar2 = (longlong *)FUN_00d74900(param_1,iVar3);
          (**(code **)(*plVar2 + 0xa0))(plVar2);
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_00410f20(param_2);
    }
  }
  return;
}

