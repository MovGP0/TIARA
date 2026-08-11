/* Ghidra address: 0084a0b0 */
/* Ghidra symbol: FUN_0084a0b0 */


void FUN_0084a0b0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined1 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_4;
  local_30 = param_4[1];
  if (*(longlong *)(param_1 + 0x588) != 0) {
    pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
    cVar1 = (*pcVar4)(param_1);
    if (cVar1 != '\0') {
      iVar2 = FUN_0064d0b0(param_1);
      local_38._0_4_ = iVar2 - (int)local_38;
      iVar3 = FUN_0064d0b0(param_1);
      iVar2 = (int)local_38;
      local_38 = CONCAT44(local_38._4_4_,iVar3 - (int)local_30);
      local_30 = CONCAT44((int)((ulonglong)local_30 >> 0x20),iVar2);
      FUN_00842410(param_1,0);
    }
    (**(code **)(param_1 + 0x588))
              (*(undefined8 *)(param_1 + 0x590),param_1,param_2,param_3,&local_38,param_5);
    pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
    cVar1 = (*pcVar4)(param_1);
    if (cVar1 != '\0') {
      FUN_00842410(param_1,1);
    }
  }
  return;
}

