/* Ghidra address: 00463250 */
/* Ghidra symbol: FUN_00463250 */


ulonglong FUN_00463250(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  int local_34;
  undefined8 local_30;
  byte local_21;
  ulonglong local_20 [2];
  
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  FUN_00467310(&local_30,param_1);
  FUN_004168b0(local_50,local_30);
  cVar1 = FUN_0043fd30(local_50[0],local_20);
  if (cVar1 == '\0') {
    uVar3 = FUN_00415f70(local_30);
    iVar2 = (**(code **)PTR_DAT_02005690)(uVar3,0x400,0,&local_34);
    if (iVar2 == 0) {
      local_20[0] = (ulonglong)local_34;
    }
    else {
      uVar3 = FUN_00415f70(local_30);
      iVar2 = (**(code **)PTR_DAT_02003b78)(uVar3,0x400,0,&local_40);
      if (iVar2 == 0) {
        local_20[0] = FUN_0040c770(local_40);
      }
      else if (iVar2 == -0x7ffdfffb) {
        FUN_004168b0(&local_58,local_30);
        cVar1 = FUN_0043ff60(local_58,&local_21);
        if (cVar1 == '\0') {
          FUN_00460800(0x80020005,*param_1,0x14);
        }
        else {
          local_20[0] = (ulonglong)local_21;
        }
      }
      else {
        FUN_00460800(iVar2,*param_1,0x14);
        local_20[0] = 0;
      }
    }
  }
  FUN_00414560(&local_58,2);
  FUN_00414520(&local_30);
  return local_20[0];
}

