/* Ghidra address: 0197d480 */
/* Ghidra symbol: FUN_0197d480 */


longlong FUN_0197d480(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                    (*(longlong **)(param_1 + 0x10),param_2);
  if (iVar1 != -1) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                      (*(longlong **)(param_1 + 0x10),iVar1);
  }
  if (((byte)param_3 & lVar2 == 0) != 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
    iVar4 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),iVar4);
        lVar2 = FUN_0197d480(uVar3,param_2,param_3);
        if (lVar2 != 0) {
          return lVar2;
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
        lVar2 = 0;
      } while (iVar1 != 0);
    }
  }
  return lVar2;
}

