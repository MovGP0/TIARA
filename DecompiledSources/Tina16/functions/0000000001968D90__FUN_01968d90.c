/* Ghidra address: 01968d90 */
/* Ghidra symbol: FUN_01968d90 */


void FUN_01968d90(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  if ((char)param_1[0x3b] != param_2) {
    FUN_00410f20(param_1[0x3a]);
    if (param_2 == '\0') {
      lVar1 = FUN_01956770(&PTR_FUN_01920040,1);
      param_1[0x3a] = lVar1;
    }
    else if (param_2 == '\x01') {
      lVar1 = FUN_01956c90(&PTR_FUN_01920448,1);
      param_1[0x3a] = lVar1;
    }
    else if (param_2 == '\x02') {
      lVar1 = FUN_01957da0(&PTR_FUN_01920928,1);
      param_1[0x3a] = lVar1;
    }
    *(char *)(param_1 + 0x3b) = param_2;
    lVar1 = (**(code **)(*param_1 + 0x118))(param_1);
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x118))(param_1);
      if (*(longlong *)(lVar1 + 0x178) != 0) {
        lVar1 = (**(code **)(*param_1 + 0x118))(param_1);
        (**(code **)(**(longlong **)(lVar1 + 0x178) + 0x3c8))(*(longlong **)(lVar1 + 0x178));
      }
    }
  }
  return;
}

