/* Ghidra address: 00e11cb0 */
/* Ghidra symbol: FUN_00e11cb0 */


ulonglong FUN_00e11cb0(undefined8 param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_7b;
  
  uVar1 = 0xffffffff;
  if (0 < *(int *)(param_3 + 0xf4)) {
    puVar3 = (undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x40) + 0x528) + 0x168) +
             (longlong)*(int *)(param_3 + 0xf4) * 99);
    puVar4 = &local_7b;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
    *(undefined1 *)((longlong)puVar4 + 2) = *(undefined1 *)((longlong)puVar3 + 2);
    uVar1 = (ulonglong)*(byte *)((longlong)&local_7b + (longlong)param_2 * 2 + 4);
    if (*(char *)((longlong)&local_7b + (longlong)param_2 * 2 + 3) != '\0') {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

