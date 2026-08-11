/* Ghidra address: 013f66e0 */
/* Ghidra symbol: FUN_013f66e0 */


void FUN_013f66e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  
  cVar4 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6f0));
  *(char *)(param_1 + 0x723) = cVar4;
  if (cVar4 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x708);
    if (*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x4a8) == 2) {
      if (*(longlong *)(lVar1 + 0x20) == 0) {
        uVar5 = FUN_00409570(0x13);
        *(undefined8 *)(lVar1 + 0x20) = uVar5;
      }
      puVar2 = *(undefined8 **)(lVar1 + 0x20);
      *puVar2 = *(undefined8 *)(param_1 + 0x710);
      puVar2[1] = *(undefined8 *)(param_1 + 0x718);
      *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(param_1 + 0x720);
      *(undefined1 *)((longlong)puVar2 + 0x12) = *(undefined1 *)(param_1 + 0x722);
    }
    else if (*(longlong *)(lVar1 + 0x20) != 0) {
      FUN_004095f0(*(longlong *)(lVar1 + 0x20));
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    *(undefined1 *)(lVar1 + 0x18) = *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x4a8);
    dVar3 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
    *(float *)(lVar1 + 0x10) = (float)dVar3;
  }
  return;
}

