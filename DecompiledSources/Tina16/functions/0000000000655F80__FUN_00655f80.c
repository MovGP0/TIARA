/* Ghidra address: 00655f80 */
/* Ghidra symbol: FUN_00655f80 */


void FUN_00655f80(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if ((param_1[0xf] == 0) && (param_1[0x6b] != param_2)) {
    if ((param_1[0x8d] == 0) || ((param_1[0x6b] == 0 || (param_2 == 0)))) {
      FUN_0065ed10(param_1,1);
      (**(code **)(*param_1 + 0x1e8))(param_1);
      param_1[0x6b] = param_2;
      FUN_00655e40(param_1);
      FUN_0065ed10(param_1,0);
    }
    else {
      param_1[0x6b] = param_2;
      local_20 = auStack_48;
      thunk_FUN_04119e7b(param_1[0x8d],param_2);
      iVar1 = FUN_0044f080();
      if (4 < iVar1) {
        iVar1 = FUN_0044f060();
        if (iVar1 == 2) {
          FUN_0064fca0(param_1,0x127,0x30003,0);
        }
      }
      FUN_00655e40(param_1);
    }
  }
  return;
}

