/* Ghidra address: 01ce8c60 */
/* Ghidra symbol: FUN_01ce8c60 */


undefined8 FUN_01ce8c60(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414480(param_2);
  iVar2 = FUN_00416db0(local_res20,L"%ANALYSIS%");
  if (iVar2 == 0) {
    cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_3 + 0xd0) + 8) + 0x434);
    if (cVar1 == '\0') {
      FUN_00414ad0(param_2,L"DC Sweep");
    }
    else if (cVar1 == '\x03') {
      FUN_00414ad0(param_2,L"Transient Analysis");
    }
    else if (cVar1 == '\x04') {
      FUN_00414ad0(param_2,L"AC Sweep");
    }
    else {
      FUN_005894c0(param_2,&DAT_01cb2e28,cVar1);
    }
  }
  else {
    iVar2 = FUN_00416db0(local_res20,L"%SUBTITLE%");
    if (iVar2 == 0) {
      FUN_01cc1600(*(undefined8 *)(param_3 + 0xe0),param_2);
    }
    else {
      iVar2 = FUN_00416db0(local_res20,L"%COMPLEX%");
      if (iVar2 == 0) {
        cVar1 = *(char *)(*(longlong *)(param_3 + 0xe0) + 0x2b);
        if (cVar1 != '\0') {
          if (cVar1 == '\x01') {
            FUN_00414ad0(param_2,&DAT_01ce90a4);
            goto code_r0x01ce8f7d;
          }
          if (cVar1 != '\x02') {
            FUN_00414ad0(param_2,&DAT_01ce9090);
            goto code_r0x01ce8f7d;
          }
        }
        FUN_00414ad0(param_2,&DAT_01ce9090);
      }
      else {
        iVar2 = FUN_00416db0(local_res20,L"%SWEEPVAR%");
        if (iVar2 == 0) {
          cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_3 + 0xd0) + 8) + 0x434);
          if (cVar1 == '\0') {
            FUN_00414ad0(param_2,L"V_IN_voltage");
          }
          else if (cVar1 == '\x03') {
            FUN_00414ad0(param_2,L"Time");
          }
          else if (cVar1 == '\x04') {
            FUN_00414ad0(param_2,L"Frequency");
          }
          else {
            FUN_00414ad0(param_2,&DAT_01ce913c);
          }
        }
        else {
          iVar2 = FUN_00416db0(local_res20,L"%SWEEPMODE%");
          if (iVar2 == 0) {
            cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_3 + 0xd0) + 8) + 0x434);
            if (cVar1 == '\0') {
              FUN_00414ad0(param_2,L"LINEAR");
            }
            else if (cVar1 == '\x03') {
              FUN_00414ad0(param_2,L"VAR_STEP");
            }
            else if (cVar1 == '\x04') {
              if (*(char *)(*(longlong *)(param_3 + 0xd0) + 0x56) == '\x01') {
                FUN_00414ad0(param_2,&DAT_01ce91ac);
              }
              else {
                FUN_00414ad0(param_2,L"LINEAR");
              }
            }
            else {
              FUN_00414ad0(param_2,&DAT_01ce913c);
            }
          }
          else {
            iVar2 = FUN_00416db0(local_res20,L"%FORMAT%");
            if (iVar2 == 0) {
              cVar1 = *(char *)(*(longlong *)(param_3 + 0xe0) + 0x2b);
              if (cVar1 == '\0') {
                FUN_00414ad0(param_2,L"0 VOLTSorAMPS;EFLOAT : NODEorBRANCH;NODE  ");
              }
              else if (cVar1 == '\x01') {
                FUN_00414ad0(param_2,
                             L"0 R_VOLTSorAMPS;EFLOAT / I_VOLTSorAMPS;EFLOAT : NODEorBRANCH;NODE  ")
                ;
              }
              else {
                FUN_00414ad0(param_2,&DAT_01ce913c);
              }
            }
          }
        }
      }
    }
  }
code_r0x01ce8f7d:
  FUN_00414480(&local_res20);
  return param_2;
}

