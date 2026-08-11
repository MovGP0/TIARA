/* Ghidra address: 00a01a10 */
/* Ghidra symbol: FUN_00a01a10 */


void FUN_00a01a10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_004192a0(param_1 + 8,*(undefined8 *)(param_2 + 8),&DAT_009f2be0);
  FUN_00a02a30(param_1);
  *(longlong *)(param_1 + 0x10) =
       *(longlong *)(param_1 + 0x10) + (*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8));
  FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20));
  plVar1 = *(longlong **)(param_2 + 0x28);
  uVar2 = (**(code **)(*plVar1 + 8))
                    (*plVar1,1,param_1 + 0x10,param_1 + 0x18,(int)plVar1[3],
                     *(undefined4 *)((longlong)plVar1 + 0x1c));
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  return;
}

