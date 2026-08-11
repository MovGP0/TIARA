/* Ghidra address: 006497e0 */
/* Ghidra symbol: FUN_006497e0 */


undefined8 FUN_006497e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_28 [16];
  
  if (param_1 == param_2[1]) {
    uVar2 = 0;
  }
  else {
    if (param_2[2] == 0) {
      thunk_FUN_03e49910(param_1,local_28);
      cVar1 = FUN_00423210(local_28,param_2 + 3);
      if (cVar1 != '\0') {
        param_2[2] = param_1;
      }
    }
    if (param_1 == param_2[2]) {
      uVar2 = 0;
      *(undefined1 *)(param_2 + 4) = 1;
    }
    else if (param_1 == *param_2) {
      uVar2 = 0xffffffff;
      param_2[2] = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

