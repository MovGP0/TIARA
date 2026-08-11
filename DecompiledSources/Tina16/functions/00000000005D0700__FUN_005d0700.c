/* Ghidra address: 005d0700 */
/* Ghidra symbol: FUN_005d0700 */


undefined1 FUN_005d0700(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((*(uint *)(param_3 + 0x10) & 0x10) != 0) goto code_r0x005d07e5;
  if (*(longlong *)(param_1 + 0x20) == 0) {
LAB_005d076d:
    bVar1 = true;
  }
  else {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                        (*(longlong **)(param_1 + 0x20),param_2,param_3);
      if (cVar2 != '\0') goto LAB_005d076d;
    }
    bVar1 = false;
  }
  if (bVar1) {
    lVar3 = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + -8);
    }
    FUN_00419260(param_1 + 0x18,&DAT_004210c0,1,lVar3 + 1);
    lVar3 = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + -8);
    }
    FUN_005d1ea0(local_20,param_2,*(undefined8 *)(param_3 + 0x18),0);
    FUN_00414ad0(*(longlong *)(param_1 + 0x18) + -8 + lVar3 * 8,local_20[0]);
  }
code_r0x005d07e5:
  FUN_00414480(local_20);
  return 1;
}

