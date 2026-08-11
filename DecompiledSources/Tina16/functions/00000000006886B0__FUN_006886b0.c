/* Ghidra address: 006886b0 */
/* Ghidra symbol: FUN_006886b0 */


void FUN_006886b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    iVar3 = FUN_0044f080();
    if (iVar3 < 6) {
      cVar2 = FUN_0044f0c0(5,1);
    }
    else {
      cVar2 = *(char *)(param_1 + 0x4b8) == '\0';
    }
    if (cVar2 != '\0') {
      local_30 = *(undefined4 *)(&DAT_01df9bf8 + (ulonglong)*(byte *)(param_1 + 0x4c0) * 4);
      lVar1 = *(longlong *)(param_1 + 0x4d8);
      local_48 = param_2;
      FUN_004238d0(&local_68,*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar1 + 0x10),
                   *(undefined4 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0xc));
      local_40 = local_68;
      uStack_38 = uStack_60;
      uVar4 = FUN_0065b870(param_1);
      local_50 = &local_48;
      thunk_FUN_041b2403(uVar4,0x1602,0,local_50);
    }
  }
  return;
}

