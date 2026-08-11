/* Ghidra address: 015d78e0 */
/* Ghidra symbol: FUN_015d78e0 */


undefined1
FUN_015d78e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [3];
  undefined8 local_28;
  int local_20;
  undefined1 local_19;
  
  local_58 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_28 = 0;
  FUN_00414610(param_5);
  FUN_015c1220(&local_28,param_3,0,param_5);
  if ((*(uint *)(param_2 + 0x10) & 0x10) == 0) {
    FUN_015c1190(&local_50,local_28,param_5);
    FUN_00416ba0(param_1 + 0x358,local_50,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    FUN_015c1190(local_40,local_28,param_5);
    FUN_015c1190(&local_48,*(undefined8 *)(param_2 + 0x18),param_5);
    FUN_00416ba0(param_1 + 0x358,local_40[0],local_48);
  }
  *(undefined1 *)(param_1 + 0x357) = 1;
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x380) + 0x98) + 0x28))();
  local_20 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x380) + 0x98);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_58,local_20);
      cVar2 = FUN_015d4f30(*(undefined8 *)(*(longlong *)(param_1 + 0x380) + 0x80),
                           *(undefined8 *)(param_1 + 0x358),local_58,
                           (*(uint *)(param_2 + 0x10) & 0x10) != 0);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 0x357) = 0;
        break;
      }
      local_20 = local_20 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(char *)(param_1 + 0x357) != '\0') {
    FUN_015d74e0(*(undefined8 *)(param_1 + 0x380),*(undefined8 *)(param_1 + 0x358),param_4,param_2);
  }
  local_19 = *(undefined1 *)(param_1 + 0x357);
  FUN_00414560(&local_58,4);
  FUN_00414480(&local_28);
  FUN_00414480(&param_5);
  return local_19;
}

