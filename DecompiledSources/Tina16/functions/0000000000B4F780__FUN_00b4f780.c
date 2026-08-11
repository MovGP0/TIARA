/* Ghidra address: 00b4f780 */
/* Ghidra symbol: FUN_00b4f780 */


undefined8 FUN_00b4f780(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong local_58;
  undefined2 uStack_50;
  undefined2 local_48;
  undefined6 local_46;
  undefined2 uStack_40;
  ulonglong local_38;
  undefined2 uStack_30;
  undefined8 local_20;
  
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_46 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_20 = 0;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x18) != '\x02') {
    uVar3 = FUN_00b4d170(param_1);
    FUN_00b1f820(*(undefined8 *)(lVar1 + 0x10),&local_38,uVar3);
    cVar2 = FUN_00b1c800(local_38 & 0xffff);
    if (cVar2 == '\0') {
      FUN_00414520(&local_20);
      goto LAB_00b4f827;
    }
  }
  uVar3 = FUN_00b4d170(param_1);
  FUN_00b1f820(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),&local_48,uVar3);
  FUN_00414be0(&local_20,CONCAT26(uStack_40,local_46));
LAB_00b4f827:
  uVar3 = FUN_00b4d170(param_1);
  FUN_00b1f820(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),&local_58,uVar3);
  FUN_00b1e5a0(param_2,param_1 + 0x28,local_58 & 0xffff,local_20);
  FUN_00417740(&local_58,&DAT_00b1be28);
  FUN_00417740(&local_48,&DAT_00b1be28);
  FUN_00417740(&local_38,&DAT_00b1be28);
  FUN_00414520(&local_20);
  return param_2;
}

