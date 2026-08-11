/* Ghidra address: 00a9d480 */
/* Ghidra symbol: FUN_00a9d480 */


uint FUN_00a9d480(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_30;
  int local_2c;
  
  *param_7 = 0;
  *param_5 = 0;
  *param_6 = 0;
  if (*(char *)(param_1 + 0x40) == '\x11') {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_00414480(param_7);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x40))
                      (*(longlong **)(param_1 + 0xa8),param_2,param_3,param_4,param_5,param_6,uVar3)
    ;
    if (((uVar2 & 4) == 0) && (*(longlong *)(param_1 + 0x448) != 0)) {
      local_2c = param_4 - *(int *)(*(longlong *)(param_1 + 0x18) + 0x94);
      local_30 = param_3;
      cVar1 = FUN_004231e0(param_1 + 0x540,&local_30);
      if (cVar1 != '\0') {
        FUN_00414ad0(param_7,*(undefined8 *)(param_1 + 0x448));
        uVar2 = uVar2 | 4;
      }
    }
  }
  return uVar2;
}

