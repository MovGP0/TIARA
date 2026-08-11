/* Ghidra address: 01609b20 */
/* Ghidra symbol: FUN_01609b20 */


undefined8 FUN_01609b20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_004170c0(L"XMC11",local_res10[0],1);
  if (iVar1 < 1) {
    iVar1 = FUN_004170c0(L"XMC12",local_res10[0],1);
    if (iVar1 < 1) {
      iVar1 = FUN_004170c0(L"XMC13",local_res10[0],1);
      if (iVar1 < 1) {
        iVar1 = FUN_004170c0(L"XMC14",local_res10[0],1);
        if (iVar1 < 1) {
          iVar1 = FUN_004170c0(L"XMC44",local_res10[0],1);
          if (iVar1 < 1) {
            iVar1 = FUN_004170c0(L"XMC72",local_res10[0],1);
            if (iVar1 < 1) {
              FUN_00414ad0(param_1,&DAT_01609d9c);
            }
            else {
              FUN_00414ad0(param_1,&DAT_01609d88);
            }
          }
          else {
            FUN_00414ad0(param_1,&DAT_01609d5c);
          }
        }
        else {
          FUN_00414ad0(param_1,&DAT_01609d30);
        }
      }
      else {
        FUN_00414ad0(param_1,&DAT_01609d04);
      }
    }
    else {
      FUN_00414ad0(param_1,&DAT_01609cd8);
    }
  }
  else {
    FUN_00414ad0(param_1,&DAT_01609cac);
  }
  FUN_00414480(local_res10);
  return param_1;
}

