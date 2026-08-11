/* Ghidra address: 006d78a0 */
/* Ghidra symbol: FUN_006d78a0 */


void FUN_006d78a0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if ((param_2 == 0) || (*(longlong **)(param_2 + 0x498) == param_1)) {
    *(undefined1 *)(param_1 + 0xa9) = 1;
    FUN_006d70c0(param_1,param_2);
    if (param_2 == 0) {
      (**(code **)(*param_1 + 0x278))(param_1,0xffffffff);
    }
    else if (param_2 == param_1[0xa6]) {
      uVar1 = FUN_006d6630(param_2);
      (**(code **)(*param_1 + 0x278))(param_1,uVar1);
    }
    *(undefined1 *)(param_1 + 0xa9) = 0;
  }
  return;
}

