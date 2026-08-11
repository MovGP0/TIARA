/* Ghidra address: 00803bb0 */
/* Ghidra symbol: FUN_00803bb0 */


undefined8 FUN_00803bb0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_007e5bc0(param_2,(longlong)
                                 *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10) + 8),1
                        );
    if ((int)uVar1 == 0) {
      uVar1 = FUN_007e5bc0(param_2,*(undefined8 *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10) + 0x10),0);
    }
  }
  return uVar1;
}

