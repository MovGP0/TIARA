/* Ghidra address: 010a63d0 */
/* Ghidra symbol: FUN_010a63d0 */


void FUN_010a63d0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00416ba0(local_20,*(undefined8 *)(param_1 + 0x9a8),L"va_debugger_config.txt");
  cVar1 = FUN_00440a20(local_20[0],1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0xd8))
              (*(longlong **)(param_1 + 0x9f0),local_20[0]);
    (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x18))
              (*(longlong **)(param_1 + 0x9f0),local_30,1);
    uVar2 = FUN_01b217f0(local_30[0]);
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x858),uVar2);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

