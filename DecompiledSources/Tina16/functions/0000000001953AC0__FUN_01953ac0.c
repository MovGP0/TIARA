/* Ghidra address: 01953ac0 */
/* Ghidra symbol: FUN_01953ac0 */


void FUN_01953ac0(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  
  if (*(longlong *)(param_2 + 0x10) != 0) {
    if ((param_3 == '\x02') &&
       ((*(longlong *)(param_1 + 0xf0) != 0 || (*(longlong *)(param_1 + 0x90) != 0)))) {
      local_20 = (longlong *)FUN_01950760(param_1);
      if (local_20 != (longlong *)0x0) {
        iVar1 = (**(code **)(*local_20 + 0x28))(local_20);
        if (0 < iVar1) {
          FUN_01953a00(auStack_48,param_2);
        }
      }
    }
    if (param_3 == '\0') {
      local_20 = (longlong *)FUN_01950760(param_1);
      if (local_20 != (longlong *)0x0) {
        FUN_01953a00(auStack_48,param_2);
        FUN_00452320(param_2 + 0x90);
      }
    }
  }
  return;
}

