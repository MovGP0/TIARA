/* Ghidra address: 01c3c110 */
/* Ghidra symbol: FUN_01c3c110 */


void FUN_01c3c110(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6c0)) {
    if (param_2 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x268))(*(longlong **)(param_1 + 0x7a0),0);
      (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x268))(*(longlong **)(param_1 + 0x7b8),0);
      (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x268))(*(longlong **)(param_1 + 0x7c0),0);
      (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x268))(*(longlong **)(param_1 + 0x7d8),0);
    }
    if (param_2 == '\x01') {
      (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x268))(*(longlong **)(param_1 + 0x7a0),1);
    }
    else if (param_2 == '\x02') {
      (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x268))(*(longlong **)(param_1 + 0x7b8),1);
    }
    else if (param_2 == '\x03') {
      (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x268))(*(longlong **)(param_1 + 0x7c0),1);
    }
    else if (param_2 == '\x04') {
      (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x268))(*(longlong **)(param_1 + 0x7d8),1);
    }
    else {
      uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"[Error] @ SetSource");
      FUN_004134c0(uVar1);
    }
  }
  FUN_01c3c2e0(param_1,param_1);
  return;
}

