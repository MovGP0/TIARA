/* Ghidra address: 018720d0 */
/* Ghidra symbol: FUN_018720d0 */


void FUN_018720d0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_3;
  local_30 = param_3[1];
  if (*(char *)(param_1 + 0x70) != '\0') {
    lVar1 = *(longlong *)(param_1 + 8);
    FUN_004238d0(&local_38,*(undefined4 *)(lVar1 + 0x248),*(undefined4 *)(lVar1 + 0x24c),
                 *(undefined4 *)(lVar1 + 0x250),*(undefined4 *)(lVar1 + 0x254));
    uVar2 = FUN_00423990((int)local_38 + ((int)local_30 - (int)local_38) / 2 + -8,
                         local_38._4_4_ + (local_30._4_4_ - local_38._4_4_) / 2 + -8);
    uVar3 = FUN_00423990((int)uVar2 + 0x10,(int)(uVar2 >> 0x20) + 0x10);
    uVar4 = FUN_0180bfb0();
    uVar4 = FUN_0180a040(uVar4);
    FUN_007d6c70(uVar4,param_2,uVar2 & 0xffffffff,(int)(uVar2 >> 0x20),0x23,1,uVar2,uVar3);
  }
  return;
}

