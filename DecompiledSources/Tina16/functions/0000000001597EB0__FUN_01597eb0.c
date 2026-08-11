/* Ghidra address: 01597eb0 */
/* Ghidra symbol: FUN_01597eb0 */


undefined4 FUN_01597eb0(longlong param_1)

{
  int iVar1;
  undefined4 local_14;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    local_14 = 0xfffffffe;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 8);
    if ((((iVar1 == 0x2a) || (iVar1 == 0x45)) || (iVar1 == 0x49)) ||
       (((iVar1 == 0x5b || (iVar1 == 0x67)) || ((iVar1 == 0x71 || (iVar1 == 0x29a)))))) {
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xc) != 0) {
        (**(code **)(param_1 + 0x38))
                  (*(undefined8 *)(param_1 + 0x40),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xc));
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x59) != 0) {
        (**(code **)(param_1 + 0x38))
                  (*(undefined8 *)(param_1 + 0x40),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x59));
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x51) != 0) {
        (**(code **)(param_1 + 0x38))
                  (*(undefined8 *)(param_1 + 0x40),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x51));
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x45) != 0) {
        (**(code **)(param_1 + 0x38))
                  (*(undefined8 *)(param_1 + 0x40),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x45));
      }
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28))
      ;
      *(undefined8 *)(param_1 + 0x28) = 0;
      if (iVar1 == 0x71) {
        local_14 = 0xfffffffd;
      }
      else {
        local_14 = 0;
      }
    }
    else {
      local_14 = 0xfffffffe;
    }
  }
  return local_14;
}

