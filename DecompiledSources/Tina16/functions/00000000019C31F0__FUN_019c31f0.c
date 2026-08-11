/* Ghidra address: 019c31f0 */
/* Ghidra symbol: FUN_019c31f0 */


undefined1
FUN_019c31f0(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,int param_5,
            char param_6)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 local_51;
  int local_50 [2];
  undefined1 local_48;
  int local_40;
  undefined1 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  iVar2 = 0;
  if (param_4 < 0x80000000) {
    iVar4 = param_4 + 1;
    puVar3 = (undefined8 *)(param_3 + 0x10);
    do {
      iVar1 = FUN_019c2270(param_2,*puVar3);
      if (((param_6 != '\0') && (*(char *)(param_1 + 0x30) != '\0')) && (0 < iVar1)) {
        local_48 = 0;
        local_38 = 0;
        local_50[0] = iVar2;
        local_40 = iVar1;
        FUN_00442f70(&local_30,L"  overlap with route %d: %d shared points",local_50,1);
        (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
                  (*(longlong **)(param_1 + 0x70),local_30);
      }
      if (param_5 <= iVar1) {
        local_51 = 1;
        goto LAB_019c32c2;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_51 = 0;
LAB_019c32c2:
  FUN_00414480(&local_30);
  return local_51;
}

