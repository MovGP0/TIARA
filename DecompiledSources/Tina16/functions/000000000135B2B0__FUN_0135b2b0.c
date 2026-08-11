/* Ghidra address: 0135b2b0 */
/* Ghidra symbol: FUN_0135b2b0 */


void FUN_0135b2b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong local_res10 [3];
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_30 [2];
  
  local_res10[0] = param_2;
  local_40 = param_1;
  FUN_00414610(param_2);
  if (local_res10[0] == 0) {
    iVar1 = (**(code **)(**(longlong **)(local_40 + 8) + 0x28))();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar2 = (**(code **)(**(longlong **)(local_40 + 8) + 0x30))
                          (*(longlong **)(local_40 + 8),iVar3);
        if (lVar2 != 0) {
          local_30[0] = (**(code **)(**(longlong **)(local_40 + 8) + 0x30))
                                  (*(longlong **)(local_40 + 8),iVar3);
          FUN_0135b130(auStack_68,local_30);
          (**(code **)(**(longlong **)(local_40 + 8) + 0x48))
                    (*(longlong **)(local_40 + 8),iVar3,local_30[0]);
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(local_40 + 8) + 0xb0))
                      (*(longlong **)(local_40 + 8),local_res10[0]);
    if (-1 < iVar1) {
      local_30[0] = (**(code **)(**(longlong **)(local_40 + 8) + 0x30))
                              (*(longlong **)(local_40 + 8),iVar1);
      FUN_0135b130(auStack_68,local_30);
      (**(code **)(**(longlong **)(local_40 + 8) + 0x48))
                (*(longlong **)(local_40 + 8),iVar1,local_30[0]);
    }
  }
  FUN_00414480(local_res10);
  return;
}

