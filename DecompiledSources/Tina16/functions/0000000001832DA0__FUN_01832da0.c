/* Ghidra address: 01832da0 */
/* Ghidra symbol: FUN_01832da0 */


undefined8 FUN_01832da0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  uStack_40 = 0;
  local_20 = 0;
  local_50 = param_2;
  FUN_00417580(local_30,&DAT_0183db48);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  FUN_018318a0(*(undefined8 *)(param_1 + 0x90),uVar1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x90));
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
  FUN_00414480(&local_20);
  FUN_01832a40(auStack_78,&local_48,*(undefined8 *)(param_1 + 0x90));
  FUN_00417c40(local_30,&local_48,&DAT_0183db48);
  *(undefined1 *)(param_1 + 0x48) = local_30[0];
  FUN_00414ad0(param_1 + 0x50,local_28);
  FUN_00414ad0(local_50,local_20);
  lVar2 = *(longlong *)(param_1 + 0x90);
  cVar3 = FUN_004113d0(lVar2,&PTR_FUN_0182da68);
  if ((cVar3 == '\0') || (*(char *)(*(longlong *)(lVar2 + 0xa0) + 0x19) != '\0')) {
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  FUN_00417740(&local_48,&DAT_0183db48);
  FUN_00417740(local_30,&DAT_0183db48);
  FUN_00414480(&local_20);
  return local_50;
}

