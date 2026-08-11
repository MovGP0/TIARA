/* Ghidra address: 01be95b0 */
/* Ghidra symbol: FUN_01be95b0 */


void FUN_01be95b0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_007f9b70(param_1,1);
  if (((lVar2 == *(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xf0)) ||
      (*(int *)(*(longlong *)PTR_DAT_02004030 + 0x180) == 0)) &&
     (*(char *)((longlong)param_1 + 0x592) == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x391) != '\0')) &&
       (((*(ulonglong *)(param_2 + 8) & 0xfff0) == 0xf100 &&
        ((*(short *)(param_2 + 0x10) != 0x20 && (*(short *)(param_2 + 0x10) != 0x2d)))))) {
      lVar2 = thunk_FUN_041d93e9();
      if (lVar2 == 0) {
        if (*(short *)(param_2 + 0x10) == 0) {
          if ((char)param_1[0xc5] == '\0') {
            lVar2 = FUN_01c01290(param_1);
            (**(code **)(*param_1 + 0x330))(param_1,1);
            if (lVar2 != 0) {
              (**(code **)(**(longlong **)(lVar2 + 0x80) + 600))(*(longlong **)(lVar2 + 0x80),1);
            }
            uVar3 = FUN_0065b870(param_1);
            thunk_FUN_0413e052(uVar3,0xb410,0,0);
          }
        }
        else {
          lVar2 = FUN_01c00de0(param_1,*(short *)(param_2 + 0x10));
          if (lVar2 != 0) {
            (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x268))(*(longlong **)(lVar2 + 0x80));
            *(undefined8 *)(param_2 + 0x18) = 1;
          }
        }
        *(undefined1 *)(param_1 + 0xc5) = 0;
        *(undefined8 *)(param_2 + 0x18) = 1;
      }
    }
  }
  return;
}

