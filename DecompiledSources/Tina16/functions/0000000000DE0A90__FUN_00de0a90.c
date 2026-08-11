/* Ghidra address: 00de0a90 */
/* Ghidra symbol: FUN_00de0a90 */


void FUN_00de0a90(longlong param_1,uint *param_2)

{
  int iVar1;
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (((0xbcff < *param_2) && (*param_2 < 0xbd0a)) && (*(longlong *)(param_1 + 0x4e0) != 0)) {
    local_48 = FUN_0065b870(param_1);
    local_40 = *param_2 - 0xbc00;
    local_38 = *(undefined8 *)(param_2 + 2);
    local_30 = *(undefined8 *)(param_2 + 4);
    local_28 = thunk_FUN_041c61bd();
    local_24 = 0x115de1f1;
    local_20 = 0x115de1f1;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e0) + 0x28))
                      (*(longlong **)(param_1 + 0x4e0),&local_48);
    if (iVar1 == 0) {
      param_2[6] = 1;
      param_2[7] = 0;
      return;
    }
  }
  if (*param_2 == 0xb008) {
    if ((*(char *)(param_1 + 0xab) != '\0') && (*(longlong *)(param_1 + 0x4c0) != 0)) {
      (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x28))
                (*(longlong **)(param_1 + 0x4c0),0xfffffd41);
      (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x28))
                (*(longlong **)(param_1 + 0x4c0),0xfffffd40);
    }
  }
  else if (((*param_2 == 0xb009) && (*(char *)(param_1 + 0xac) != '\0')) &&
          (*(longlong *)(param_1 + 0x4c0) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x28))
              (*(longlong **)(param_1 + 0x4c0),0xfffffd43);
  }
  FUN_00656570(param_1,param_2);
  return;
}

