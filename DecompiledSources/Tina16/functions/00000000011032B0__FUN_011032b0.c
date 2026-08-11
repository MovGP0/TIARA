/* Ghidra address: 011032b0 */
/* Ghidra symbol: FUN_011032b0 */


undefined8 FUN_011032b0(longlong param_1,double param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    if ((*(longlong *)(lVar1 + 0x188) == 0) ||
       (param_2 < *(double *)(lVar1 + 0x168) || param_2 == *(double *)(lVar1 + 0x168))) {
      if (*(int *)(*(longlong *)(lVar1 + 0xe0) + 0x2c) < 2) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_01cc81f0(param_1,param_2);
      }
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x188);
      (**(code **)(**(longlong **)(lVar1 + 200) + 0x10))
                (*(longlong **)(lVar1 + 200),*(undefined8 *)(lVar1 + 0xe0),1);
      uVar2 = (**(code **)(**(longlong **)(lVar1 + 200) + 0x48))
                        (*(longlong **)(lVar1 + 200),param_2);
      FUN_01cc81f0(param_1,param_2);
    }
  }
  return uVar2;
}

