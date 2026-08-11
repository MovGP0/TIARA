/* Ghidra address: 01be5120 */
/* Ghidra symbol: FUN_01be5120 */


void FUN_01be5120(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  char local_19 [9];
  
  local_30 = auStack_58;
  local_38 = 0;
  puVar1 = auStack_58;
  if ((*(char *)(*(longlong *)PTR_DAT_02004030 + 0x108) != '\0') &&
     (puVar1 = auStack_58, *(longlong *)(param_1 + 0x598) == 0)) {
    FUN_0080e820(*(undefined8 *)PTR_DAT_02004030);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  lVar4 = FUN_01be2d90(param_1);
  if (lVar4 != 0) {
    uVar5 = FUN_01be2d90(param_1);
    lVar4 = FUN_01bfd980(uVar5);
    if (lVar4 != 0) {
      uVar5 = FUN_01be2d90(param_1);
      lVar4 = FUN_01bfd980(uVar5);
      FUN_00648780(&local_38,*(undefined8 *)(lVar4 + 0xf8));
      FUN_0080e230(*(undefined8 *)PTR_DAT_02004030,local_38);
      goto LAB_01be51d7;
    }
  }
  FUN_0080e820(*(undefined8 *)PTR_DAT_02004030);
LAB_01be51d7:
  local_19[0] = '\x01';
  if (*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0x250) != 0) {
    (**(code **)(*(longlong *)PTR_DAT_02004030 + 0x250))
              (*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 600),param_1,local_19);
  }
  if (local_19[0] != '\0') {
    if (*(int *)(*(longlong *)PTR_DAT_02004030 + 0x17c) < 1) {
      FUN_01be5010(param_1);
    }
    else if (*(char *)(*(longlong *)(param_1 + 0x570) + 0x98) == '\0') {
      FUN_00742ed0(*(longlong *)(param_1 + 0x570),*(int *)(*(longlong *)PTR_DAT_02004030 + 0x17c));
      FUN_00742eb0(*(undefined8 *)(param_1 + 0x570),1);
    }
  }
  iVar3 = FUN_00427ab0();
  if (iVar3 == *(int *)PTR_DAT_02005bd8) {
    cVar2 = FUN_004d0700(0);
    if (cVar2 != '\0') {
      local_19[0] = '\0';
    }
  }
  if (local_19[0] != '\0') {
    thunk_FUN_0414c9e5();
  }
  FUN_00414480(&local_38);
  return;
}

