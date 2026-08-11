/* Ghidra address: 0135a0c0 */
/* Ghidra symbol: FUN_0135a0c0 */


char FUN_0135a0c0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  undefined2 uVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  char local_29;
  
  if ((*(longlong *)PTR_DAT_02001d08 != 0) &&
     (cVar2 = FUN_017fea70(*(undefined8 *)PTR_DAT_02001d08), cVar2 != '\0')) {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    uVar1 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
    local_29 = '\0';
    iVar5 = *(int *)(param_1 + 0x2d8);
    iVar4 = 1;
    if (0 < iVar5) {
      do {
        if (local_29 == '\0') {
          cVar2 = FUN_01355660(param_1,*(undefined8 *)
                                        (*(longlong *)
                                          (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar4 * 8
                                          ) + 0x128),plVar3,param_2,param_3,0);
          if (cVar2 != '\0') goto LAB_0135a1a5;
          local_29 = '\0';
        }
        else {
LAB_0135a1a5:
          local_29 = '\x01';
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = uVar1;
    iVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (0 < iVar5) {
      FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,plVar3,0,1);
    }
    FUN_00410f20(plVar3);
  }
  return local_29;
}

