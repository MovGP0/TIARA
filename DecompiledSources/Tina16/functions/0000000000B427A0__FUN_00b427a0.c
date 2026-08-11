/* Ghidra address: 00b427a0 */
/* Ghidra symbol: FUN_00b427a0 */


void FUN_00b427a0(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  char local_9;
  
  local_18 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x30) == 0x19) {
    if (param_4 == '\x01') {
      FUN_00b256b0(param_2,&local_9);
      lVar4 = (**(code **)*param_2)(param_2);
      FUN_00415d10(&local_18,lVar4 + -1,0);
      iVar2 = (**(code **)*param_2)(param_2);
      FUN_00b257a0(param_2,&local_18,iVar2 + -1);
      if (local_9 == '\0') {
        FUN_00b15390(&local_20,local_18);
      }
      else {
        FUN_00b15310(&local_20,local_18);
      }
      iVar2 = FUN_00b41f80(param_1);
      if (iVar2 < 1) {
        uVar5 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xf);
        FUN_004134c0(uVar5);
      }
      iVar2 = FUN_00b41f80(param_1);
      uVar5 = FUN_00b41f60(param_1,iVar2 + -1);
      cVar1 = FUN_004113d0(uVar5,&DAT_00b403a0);
      if (cVar1 == '\0') {
        uVar5 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xf);
        FUN_004134c0(uVar5);
      }
      iVar2 = FUN_00b41f80(param_1);
      lVar4 = FUN_00b41f60(param_1,iVar2 + -1);
      FUN_00414b90(lVar4 + 0x40,local_20);
    }
    else if (param_4 == '\x02') {
      uVar3 = (**(code **)*param_2)(param_2);
      FUN_00415d10(&local_18,uVar3,0);
      lVar4 = (**(code **)*param_2)(param_2);
      if (0 < lVar4) {
        uVar3 = (**(code **)*param_2)(param_2);
        FUN_00b257a0(param_2,&local_18,uVar3);
      }
      iVar2 = FUN_00b41f80(param_1);
      lVar4 = FUN_00b41f60(param_1,iVar2 + -1);
      FUN_00414bf0(lVar4 + 0x50,local_18);
    }
  }
  FUN_00414520(&local_20);
  FUN_004144d0(&local_18);
  return;
}

