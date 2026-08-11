/* Ghidra address: 00a53e80 */
/* Ghidra symbol: FUN_00a53e80 */


undefined1 FUN_00a53e80(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_19;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_0046c390(param_1 + 0x4f8);
  if (cVar1 == '\0') {
    local_19 = 0;
  }
  else {
    local_19 = 1;
    FUN_00467e90(&local_10,param_1 + 0x4f8);
    iVar2 = FUN_00416db0(local_10,&DAT_00a53fe4);
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_10,L"text-top");
      if (iVar2 != 0) {
        iVar2 = FUN_00416db0(local_10,L"middle");
        if (iVar2 == 0) {
          *param_2 = 2;
        }
        else {
          iVar2 = FUN_00416db0(local_10,L"baseline");
          if (iVar2 == 0) {
            *param_2 = 3;
          }
          else {
            iVar2 = FUN_00416db0(local_10,L"bottom");
            if (iVar2 == 0) {
              *param_2 = 4;
            }
            else {
              iVar2 = FUN_00416db0(local_10,&DAT_00a54070);
              if (iVar2 == 0) {
                *param_2 = 8;
              }
              else {
                iVar2 = FUN_00416db0(local_10,L"super");
                if (iVar2 == 0) {
                  *param_2 = 9;
                }
                else {
                  local_19 = 0;
                }
              }
            }
          }
        }
        goto code_r0x00a53f9f;
      }
    }
    *param_2 = 1;
  }
code_r0x00a53f9f:
  FUN_00414480(&local_10);
  return local_19;
}

