/* Ghidra address: 00821c50 */
/* Ghidra symbol: FUN_00821c50 */


void FUN_00821c50(undefined8 param_1,undefined4 param_2,undefined2 param_3,int param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int local_48 [2];
  int local_40;
  int local_30;
  undefined4 local_2c;
  
  FUN_0068d880(param_1,param_2,param_3,param_4,param_5);
  if ((char)param_2 == '\0') {
    local_2c = param_5;
    local_30 = param_4;
    iVar2 = FUN_0068c230(param_1,&local_30,1);
    if (iVar2 != -1) {
      cVar1 = FUN_00821960(param_1,iVar2);
      if (cVar1 != '\0') {
        pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
        cVar1 = (*pcVar4)(param_1);
        if (cVar1 == '\0') {
          FUN_0068c2d0(param_1,local_48,iVar2);
          iVar3 = FUN_00820730(param_1);
          if (param_4 - local_48[0] < iVar3) {
            FUN_00821d50(param_1,iVar2);
          }
        }
        else {
          FUN_0068c2d0(param_1,local_48,iVar2);
          iVar3 = FUN_00820730(param_1);
          param_4 = param_4 - (local_40 - iVar3);
          if (0 < param_4) {
            iVar3 = FUN_00820730(param_1);
            if (param_4 < iVar3) {
              FUN_00821d50(param_1,iVar2);
            }
          }
        }
      }
    }
  }
  return;
}

