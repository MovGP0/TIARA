/* Ghidra address: 013694a0 */
/* Ghidra symbol: FUN_013694a0 */


void FUN_013694a0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    uVar1 = FUN_0198d430(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8));
    FUN_01a98210(uVar1,&local_38);
    plVar2 = (longlong *)FUN_0198d430(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8));
    (**(code **)(*plVar2 + 0xa8))(plVar2,param_2,param_3,&local_38);
    DAT_02108260 = local_38;
    DAT_02108268 = uStack_30;
    DAT_01f374b0 = param_2;
    DAT_01f374b4 = param_3;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}

