/* Ghidra address: 0129d610 */
/* Ghidra symbol: FUN_0129d610 */


longlong FUN_0129d610(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4
                     ,longlong *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong local_90;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined8 local_77;
  undefined8 uStack_6f;
  undefined8 uStack_67;
  undefined8 uStack_5f;
  undefined1 uStack_57;
  undefined8 local_56;
  undefined8 local_26;
  char local_1d;
  char local_19;
  
  puVar2 = &local_56;
  for (lVar1 = 7; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = *(undefined4 *)param_2;
  *(undefined2 *)((longlong)puVar2 + 4) = *(undefined2 *)((longlong)param_2 + 4);
  local_77 = *param_3;
  uStack_6f = param_3[1];
  uStack_67 = param_3[2];
  uStack_5f = param_3[3];
  uStack_57 = *(undefined1 *)(param_3 + 4);
  FUN_004179d0(&local_56,&DAT_01d0ba10);
  if ((local_19 == '\x02') || (local_1d != '\0')) {
    local_90 = FUN_019ac5b0(param_1,local_26);
    if (local_90 != 0) {
      lVar1 = FUN_01cfde70(local_90,2,0,&local_78,&local_79,&local_7a);
      *param_5 = lVar1;
      puVar2 = (undefined8 *)*param_5;
      *param_4 = *puVar2;
      param_4[1] = puVar2[1];
      param_4[2] = puVar2[2];
      param_4[3] = puVar2[3];
      *(undefined1 *)(param_4 + 4) = *(undefined1 *)(puVar2 + 4);
      puVar2 = (undefined8 *)*param_5;
      *puVar2 = local_77;
      puVar2[1] = uStack_6f;
      puVar2[2] = uStack_67;
      puVar2[3] = uStack_5f;
      *(undefined1 *)(puVar2 + 4) = uStack_57;
      FUN_0129d520(&local_56,&local_77);
    }
  }
  FUN_00417740(&local_56,&DAT_01d0ba10);
  return local_90;
}

