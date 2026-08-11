/* Ghidra address: 008288d0 */
/* Ghidra symbol: FUN_008288d0 */


void FUN_008288d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                 char param_5,uint param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
  if ((param_5 == '\x01') && (*(char *)(param_1 + 0x3c) == '\0')) {
    FUN_00423b50(&local_38,1,1);
    FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0xff000014);
    uVar1 = FUN_005ffa40(param_2);
    local_48 = param_6 | 0x105;
    FUN_00828790(auStack_68,uVar1,param_3,&local_38);
    FUN_00423b50(&local_38,0xffffffff,0xffffffff);
    FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0xff000010);
    uVar1 = FUN_005ffa40(param_2);
    local_48 = param_6 | 0x105;
    FUN_00828790(auStack_68,uVar1,param_3,&local_38);
  }
  else {
    uVar1 = FUN_005ffa40(param_2);
    local_48 = param_6 | 0x105;
    FUN_00828790(auStack_68,uVar1,param_3,&local_38);
  }
  return;
}

