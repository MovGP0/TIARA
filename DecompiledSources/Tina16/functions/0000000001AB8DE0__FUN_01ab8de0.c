/* Ghidra address: 01ab8de0 */
/* Ghidra symbol: FUN_01ab8de0 */


void FUN_01ab8de0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_01ada080(*(undefined8 *)(param_1 + 0x60));
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))
              (*(longlong **)(param_1 + 0x68),L"main",L"width",
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18) + 0x2c));
    uVar2 = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x78));
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))
              (*(longlong **)(param_1 + 0x68),L"main",L"color",uVar2);
    FUN_01add6f0(*(undefined8 *)(param_1 + 0x60),local_res10[0]);
  }
  FUN_00414480(local_res10);
  return;
}

