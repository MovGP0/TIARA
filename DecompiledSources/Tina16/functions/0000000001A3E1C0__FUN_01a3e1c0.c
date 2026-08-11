/* Ghidra address: 01a3e1c0 */
/* Ghidra symbol: FUN_01a3e1c0 */


void FUN_01a3e1c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(char *)(param_1 + 0x815) != '\0') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x900) + 0x28))(*(longlong **)(param_1 + 0x900));
    if (iVar2 == 0) {
      FUN_00416cd0(local_20,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a3e39c,L"llm_log.txt");
      cVar1 = FUN_00440a20(local_20[0],1);
      if (cVar1 != '\0') {
        FUN_00416cd0(&local_28,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a3e39c,L"llm_log.txt");
        (**(code **)(**(longlong **)(param_1 + 0x900) + 0xd8))
                  (*(longlong **)(param_1 + 0x900),local_28);
      }
      (**(code **)(**(longlong **)(param_1 + 0x900) + 0x78))(*(longlong **)(param_1 + 0x900),0);
    }
    FUN_01a3c6f0(&local_30,local_res10[0]);
    (**(code **)(**(longlong **)(param_1 + 0x900) + 0x78))(*(longlong **)(param_1 + 0x900),local_30)
    ;
    FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a3e39c,L"llm_log.txt");
    (**(code **)(**(longlong **)(param_1 + 0x900) + 0x100))
              (*(longlong **)(param_1 + 0x900),local_38);
  }
  FUN_00414560(&local_38,4);
  FUN_00414480(local_res10);
  return;
}

