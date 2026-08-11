/* Ghidra address: 00c02540 */
/* Ghidra symbol: FUN_00c02540 */


void FUN_00c02540(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_2 == *(longlong *)(param_1 + 0x550)) {
    lVar1 = *(longlong *)(param_1 + 0x4f8);
    local_38 = *(code **)(param_1 + 0x858);
    local_30 = *(undefined8 *)(param_1 + 0x860);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x500);
    local_38 = *(code **)(param_1 + 0x868);
    local_30 = *(undefined8 *)(param_1 + 0x870);
  }
  if (local_38 != (code *)0x0) {
    (*local_38)(local_30,param_2);
  }
  (**(code **)(lVar1 + 0x38))(*(undefined8 *)(lVar1 + 0x40),param_2);
  return;
}

