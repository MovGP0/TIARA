/* Ghidra address: 00f7a500 */
/* Ghidra symbol: FUN_00f7a500 */


void FUN_00f7a500(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  char local_21;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_20[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_48 = param_3;
  while( true ) {
    cVar1 = FUN_00f78a60(param_1);
    if (cVar1 == '\0') break;
    FUN_00f6f640(local_48,&local_40);
    FUN_00415dd0(local_20,local_40,0);
    if (*(char *)(local_48 + 0x108) != '\0') break;
    if ((*(char *)(local_48 + 0x30) != '\t') || (*(int *)(param_1 + 0x11b) != 1)) {
      (**(code **)*param_1)(param_1,param_2,local_48);
    }
    *(undefined1 *)(local_48 + 0x108) = 1;
    iVar2 = FUN_00f6f890(local_48,1,&local_21);
    if (iVar2 != -1) {
      lVar4 = FUN_00f65130(param_1[0x11],iVar2);
      if ((*(char *)(lVar4 + 0x30) == '\t') && (*(int *)(param_1 + 0x11b) == 0)) {
        (**(code **)*param_1)(param_1,param_2,lVar4);
      }
    }
    iVar2 = FUN_00f6f890(local_48,0,&local_21);
    if (iVar2 != -1) {
      lVar4 = FUN_00f65130(param_1[0x11],iVar2);
      if ((*(char *)(lVar4 + 0x30) == '\t') && (*(int *)(param_1 + 0x11b) == 0)) {
        (**(code **)*param_1)(param_1,param_2,lVar4);
      }
    }
    if (local_21 != '\0') break;
    iVar2 = FUN_00f6f890(local_48,0);
    if (iVar2 != -1) {
      cVar1 = FUN_00f6f8c0(local_48);
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 1) = 0xfffffffd;
        uVar3 = FUN_00f6f890(local_48,0);
        local_48 = FUN_00f65130(param_1[0x11],uVar3);
      }
      else {
        uVar3 = FUN_00f6f890(local_48,1,&local_21);
        uVar5 = FUN_00f65130(param_1[0x11],uVar3);
        if (local_21 == '\0') {
          *(undefined4 *)(param_1 + 1) = 0xffffffff;
          FUN_00f7a500(param_1,param_2,uVar5);
        }
        *(undefined4 *)(param_1 + 1) = 0xfffffffe;
        uVar3 = FUN_00f6f890(local_48,0);
        local_48 = FUN_00f65130(param_1[0x11],uVar3);
      }
    }
  }
  FUN_00414560(&local_40,3);
  FUN_004144d0(local_20);
  return;
}

