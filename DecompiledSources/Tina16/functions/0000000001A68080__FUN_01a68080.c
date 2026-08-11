/* Ghidra address: 01a68080 */
/* Ghidra symbol: FUN_01a68080 */


void FUN_01a68080(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x18))
            (*(longlong **)(param_1 + 0x740),local_20,uVar1);
  uVar2 = FUN_00416740(local_20[0]);
  thunk_FUN_0419adcc(0,L"open",uVar2,0,0,1);
  FUN_00414480(local_20);
  return;
}

