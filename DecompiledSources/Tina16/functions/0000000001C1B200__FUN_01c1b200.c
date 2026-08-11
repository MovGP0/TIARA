/* Ghidra address: 01c1b200 */
/* Ghidra symbol: FUN_01c1b200 */


undefined8 FUN_01c1b200(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_20;
  
  local_20 = 0;
  uVar1 = 0;
  if (param_1[100] != 0) {
    lVar2 = FUN_01bfd960(param_1[100]);
    lVar2 = (**(code **)(*param_1 + 0x218))(param_1,*(char *)(lVar2 + 0x49) == '\0',0xffffffff);
    uVar1 = local_20;
    if (lVar2 != 0) {
      lVar3 = FUN_01bfd960(param_1[100]);
      if (((*(char *)(lVar3 + 0x49) == '\0') && (*(int *)(lVar2 + 0x94) == *(int *)(lVar2 + 0x90)))
         && (*(int *)(lVar2 + 0x94) < 0x20)) {
        uVar1 = 0x2000000020;
      }
      else {
        uVar1 = CONCAT44(*(undefined4 *)(lVar2 + 0x90),*(undefined4 *)(lVar2 + 0x94));
      }
    }
  }
  local_20 = uVar1;
  return local_20;
}

