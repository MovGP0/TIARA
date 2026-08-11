/* Ghidra address: 01bba6d0 */
/* Ghidra symbol: FUN_01bba6d0 */


undefined8 FUN_01bba6d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1,L"<none>");
  iVar1 = FUN_00416db0(local_res10[0],L"Input");
  if (iVar1 == 0) {
    FUN_00414ad0(param_1,L"Input");
  }
  else {
    iVar1 = FUN_00416db0(local_res10[0],L"Output");
    if (iVar1 == 0) {
      FUN_00414ad0(param_1,L"Output");
    }
    else {
      iVar1 = FUN_00416db0(local_res10[0],L"3-state");
      if (iVar1 == 0) {
        FUN_00414ad0(param_1,L"3_State_Output");
      }
      else {
        iVar1 = FUN_00416db0(local_res10[0],&DAT_01bba91c);
        if (iVar1 == 0) {
          FUN_00414ad0(param_1,L"3_State_IO");
        }
        else {
          iVar1 = FUN_00416db0(local_res10[0],L"Open_drain");
          if (iVar1 != 0) {
            iVar1 = FUN_00416db0(local_res10[0],L"Open_sink");
            if (iVar1 != 0) {
              iVar1 = FUN_00416db0(local_res10[0],L"I/O_open_drain");
              if (iVar1 != 0) {
                iVar1 = FUN_00416db0(local_res10[0],L"I/O_open_sink");
                if (iVar1 != 0) {
                  iVar1 = FUN_00416db0(local_res10[0],L"I/O_open_source");
                  if (iVar1 == 0) {
                    FUN_00414ad0(param_1,L"Open_Source_Output");
                  }
                  else {
                    iVar1 = FUN_00416db0(local_res10[0],L"I/O_open_drain");
                    if (iVar1 == 0) {
                      FUN_00414ad0(param_1,L"Open_Drain_IO");
                    }
                  }
                  goto code_r0x01bba84b;
                }
              }
            }
          }
          FUN_00414ad0(param_1,L"Open_Drain_Output");
        }
      }
    }
  }
code_r0x01bba84b:
  FUN_00414480(local_res10);
  return param_1;
}

