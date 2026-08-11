/* Ghidra address: 01a0cf20 */
/* Ghidra symbol: FUN_01a0cf20 */


undefined8 * FUN_01a0cf20(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong local_res20;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_res20 = param_4;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  FUN_00414610(param_4);
  FUN_00414ad0(local_50,&DAT_01a0d0fc);
  local_40 = 0;
  do {
    iVar3 = FUN_004170c0(&DAT_01a0d10c,local_res20,local_40);
    if (iVar3 < 1) {
      FUN_00414560(&local_38,2);
      FUN_00414480(&local_res20);
      return local_50;
    }
    local_40 = FUN_004170c0(&DAT_01a0d10c,local_res20,local_40);
    local_40 = local_40 + 1;
    iVar3 = local_40;
    while( true ) {
      iVar6 = 0;
      if (local_res20 != 0) {
        iVar6 = *(int *)(local_res20 + -4);
      }
      if ((iVar6 < iVar3) || (*(short *)(local_res20 + -2 + (longlong)iVar3 * 2) == 0x20)) break;
      iVar3 = iVar3 + 1;
    }
    FUN_00416dc0(local_30,local_res20,local_40,iVar3 - local_40);
    lVar1 = local_48;
    lVar5 = 0;
    iVar3 = *(int *)(local_48 + 0x10);
    local_3c = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar4 = FUN_00b94e60(lVar1,local_3c);
        cVar2 = FUN_01a0ce50(auStack_88,uVar4);
        if (cVar2 != '\0') {
          lVar5 = FUN_00b94e60(lVar1,local_3c);
          break;
        }
        local_3c = local_3c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (lVar5 != 0) {
      FUN_019f0400(local_58,&local_38,0,lVar5);
      local_68 = &DAT_01a0d0fc;
      FUN_00416cd0(local_50,3,*local_50,local_38);
    }
  } while( true );
}

