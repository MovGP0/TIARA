/* Ghidra address: 0089c1a0 */
/* Ghidra symbol: FUN_0089c1a0 */


longlong FUN_0089c1a0(longlong *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_2c;
  longlong local_20;
  
  local_40 = auStack_68;
  puVar1 = auStack_68;
  if (param_1[1] == 0) {
    lVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
    param_1[1] = lVar2;
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_004b3260(param_1[1]);
  (**(code **)(*(longlong *)param_1[1] + 0x90))((longlong *)param_1[1]);
  local_20 = FUN_0089bc50(&PTR_FUN_008996f8,1);
  (**(code **)(*param_1 + 0x140))(param_1,local_20);
  iVar3 = *(int *)(*(longlong *)(local_20 + 0x10) + 0x10);
  local_2c = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar2 = FUN_0089bcf0(local_20,local_2c);
      if (*(char *)(lVar2 + 0x18) == '\0') {
        lVar2 = FUN_0089bcf0(local_20,local_2c);
        (**(code **)(*(longlong *)param_1[1] + 0x78))
                  ((longlong *)param_1[1],*(undefined8 *)(lVar2 + 0x20));
      }
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_20);
  FUN_004b3390(param_1[1]);
  return param_1[1];
}

