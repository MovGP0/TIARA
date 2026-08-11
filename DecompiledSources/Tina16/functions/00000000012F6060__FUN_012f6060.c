/* Ghidra address: 012f6060 */
/* Ghidra symbol: FUN_012f6060 */


void FUN_012f6060(longlong param_1)

{
  char cVar1;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414ad0(*(longlong *)(param_1 + 0x770) + 0xe0,L"Model test bench|*.mtb");
  FUN_00414ad0(*(longlong *)(param_1 + 0x770) + 0x100,&DAT_012f6278);
  (**(code **)(**(longlong **)(param_1 + 0xa98) + 0x10))
            (*(longlong **)(param_1 + 0xa98),local_20,L"ModelTest Settings",L"TestBench",0);
  FUN_00441640(local_30,local_20[0]);
  FUN_00724420(*(undefined8 *)(param_1 + 0x770),local_30[0]);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x770) + 0xa8))(*(longlong **)(param_1 + 0x770));
  if (cVar1 != '\0') {
    FUN_012fa2c0(param_1);
    FUN_00724270(*(undefined8 *)(param_1 + 0x770),&local_38);
    FUN_012fb520(param_1,local_38);
    (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x128))(*(longlong **)(param_1 + 0x7a8),1);
    (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x128))(*(longlong **)(param_1 + 0x7b8),1);
    (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x128))(*(longlong **)(param_1 + 0x7c8),1);
    (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x128))(*(longlong **)(param_1 + 0x7e0),1);
    (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x128))(*(longlong **)(param_1 + 0x7e8),1);
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

