/* Ghidra address: 00ac51f0 */
/* Ghidra symbol: FUN_00ac51f0 */


undefined8
FUN_00ac51f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 *param_6,undefined1 *param_7,undefined1 *param_8,
            undefined8 param_9,undefined8 *param_10)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_30;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  local_50 = param_1;
  local_48 = param_2;
  local_44 = param_3;
  local_40 = param_4;
  if (-1 < iVar4 + -1) {
    do {
      local_30 = (longlong *)FUN_004aeac0(local_50,iVar3);
      cVar1 = FUN_004113d0(local_30,&PTR_FUN_00a83768);
      if (cVar1 != '\0') {
        local_68 = param_5;
        cVar1 = (**(code **)(*local_30 + 0xa0))(local_30,local_48,local_44,local_40);
        if (cVar1 != '\0') {
          *param_7 = *(undefined1 *)((longlong)local_30 + 0x1bc);
          *param_6 = (int)local_30[0xd];
          *param_8 = 0;
          *param_10 = local_30;
          if (*(char *)((longlong)local_30 + 0x1bd) == '\0') {
            return 1;
          }
          uVar2 = FUN_00ac5160(auStack_88,*(undefined8 *)(local_30[3] + 0x220),local_30[0x38]);
          *param_8 = uVar2;
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

