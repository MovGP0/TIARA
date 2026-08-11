/* Ghidra address: 0151f9b0 */
/* Ghidra symbol: FUN_0151f9b0 */


void FUN_0151f9b0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_30 [2];
  
  if (param_2 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x108))(*(longlong **)(param_1 + 0xec8));
  }
  else if (param_2 == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x100))(*(longlong **)(param_1 + 0xec8));
  }
  else if (param_2 == '\x06') {
    local_30[0] = FUN_00b90090(*(undefined8 *)(param_1 + 0xca8));
    (**(code **)(**(longlong **)(param_1 + 0xec8) + 0xf8))(*(longlong **)(param_1 + 0xec8),local_30)
    ;
    (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x118))
              (*(longlong **)(param_1 + 0xec8),local_30[0]);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x110))(*(longlong **)(param_1 + 0xec8));
  FUN_00b90440(*(undefined8 *)(param_1 + 0xca8),uVar2);
  lVar1 = *(longlong *)(param_1 + 0x9b0);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x110))(*(longlong **)(param_1 + 0xec8));
  *(undefined8 *)(lVar1 + 0x108) = uVar2;
  FUN_0151f130(param_1,1);
  return;
}

