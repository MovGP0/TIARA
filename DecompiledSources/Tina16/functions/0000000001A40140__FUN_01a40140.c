/* Ghidra address: 01a40140 */
/* Ghidra symbol: FUN_01a40140 */


void FUN_01a40140(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  int local_20;
  int local_1c;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_004b4b10(*(undefined8 *)(param_1 + 0x8e0),local_res10[0]);
  FUN_01a513b0(param_1,L"ModelList",local_res10[0]);
  local_20 = (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0xb0))
                       (*(longlong **)(param_1 + 0x8e0),L"llama3.1:latest");
  if (0 < local_20) {
    (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0xa0))
              (*(longlong **)(param_1 + 0x8e0),local_20,0);
  }
  local_1c = 0;
  while( true ) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x28))(*(longlong **)(param_1 + 0x8e0));
    if (iVar1 <= local_1c) break;
    (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x18))
              (*(longlong **)(param_1 + 0x8e0),&local_38,local_1c);
    FUN_0043e1a0(&local_28,local_38);
    iVar1 = FUN_004170c0(L"embed",local_28,1);
    if (iVar1 < 1) {
      local_1c = local_1c + 1;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x98))
                (*(longlong **)(param_1 + 0x8e0),local_1c);
    }
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x28))(*(longlong **)(param_1 + 0x8e0));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x18))
              (*(longlong **)(param_1 + 0x8e0),&local_40,0);
    FUN_00414ad0(*(longlong *)(param_1 + 0x2968) + 8,local_40);
  }
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_28);
  FUN_00414480(local_res10);
  return;
}

