/* Ghidra address: 0197d3c0 */
/* Ghidra symbol: FUN_0197d3c0 */


longlong FUN_0197d3c0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),iVar5);
      if (*(longlong *)(lVar2 + 0x30) == param_2) {
        lVar4 = lVar2;
      }
      if (((char)param_3 != '\0') && (lVar4 == 0)) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),iVar5);
        lVar4 = FUN_0197d3c0(uVar3,param_2,param_3);
      }
      if (lVar4 != 0) {
        return lVar4;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

