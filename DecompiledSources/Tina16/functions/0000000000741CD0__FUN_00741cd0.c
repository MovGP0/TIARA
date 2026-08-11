/* Ghidra address: 00741cd0 */
/* Ghidra symbol: FUN_00741cd0 */


undefined8 FUN_00741cd0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x318) + 0x18);
  if ((((*(char *)(param_1 + 0xa9) != '\0') && ((*(ushort *)(param_1 + 0x34) & 1) == 0)) &&
      (plVar1 != (longlong *)0x0)) && (uVar4 = uVar5, *(char *)((longlong)plVar1 + 0x3a) != '\0')) {
    lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1);
    if (lVar3 == 0) {
      *(undefined1 *)((longlong)plVar1 + 0x3a) = 0;
    }
    else {
      lVar3 = FUN_007f9b70(param_1,1);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x4d5) != '\0')) {
        cVar2 = FUN_0065be20(lVar3);
        if (cVar2 != '\0') {
          if (*(char *)(param_1 + 0x344) == '\0') {
            uVar4 = FUN_0065b870(lVar3);
            thunk_FUN_0413e052(uVar4,0x30f,0,0);
          }
          else {
            FUN_0064fca0(lVar3,0x30f,0,0);
          }
          uVar4 = 1;
          *(undefined1 *)((longlong)plVar1 + 0x3a) = 0;
        }
      }
    }
  }
  return uVar4;
}

